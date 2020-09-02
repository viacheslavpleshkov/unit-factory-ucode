#pragma once

#include <iostream>

namespace CBL {
    template<class T>
    class Vector {
    public:
        using iterator = T*;

        Vector();
        explicit Vector(size_t size);
        Vector(size_t size, const T& value);
        Vector(iterator first, iterator last);
        Vector(const std::initializer_list<T>& lst);
        Vector(const Vector<T>& other);
        ~Vector();

        Vector<T>& operator=(const Vector<T>& other);
        bool operator==(const Vector<T>& other) const;
        bool operator!=(const Vector<T>& other) const;
        bool operator<(const Vector<T>& other) const;
        bool operator>(const Vector<T>& other) const;
        bool operator<=(const Vector<T>& other) const;
        bool operator>=(const Vector<T>& other) const;

        iterator begin() const {
            return &(*m_buffer);
        }
        iterator end() const {
            return &(*(m_buffer + m_size));
        }
        size_t size() const {
            return m_size;
        }
        size_t capacity() const {
            return m_capacity;
        }
        bool isEmpty() const {
            return begin() == end();
        }
        void resize(size_t size, const T& value = T());
        void reserve(size_t size);

        T& operator[](size_t index) const;
        T& at(size_t index) const;
        T* data() const;

        void push_back(const T& value);
        void pop_back();
        iterator insert(iterator pos, const T& value) {
            size_t index = std::distance(m_buffer, pos);
            if (index >= 0 && index <= m_size) {
                if (m_size + 1 > m_capacity)
                    reserve(m_capacity * 2 == 0 ? 1 : m_capacity * 2);
                for (int c = m_size - 1; c >= static_cast<int>(index); --c) {
                    m_buffer[c + 1] = m_buffer[c];
                }
                m_buffer[index] = value;
                m_size++;
                return &(*(m_buffer + index));
            }
            return pos;
        }
        iterator erase(iterator pos) {
            size_t index = std::distance(m_buffer, pos);
            if (index >= 0 && index <= m_size) {
                for (int c = index; c < static_cast<int>(m_size) - 1; ++c)
                    m_buffer[c] = m_buffer[c + 1];
                m_size--;
                return &(*(m_buffer + index));
            }
            return pos;
        }
        iterator erase(iterator first, iterator last) {
            size_t start = std::distance(m_buffer, first);
            size_t end = std::distance(m_buffer, last);
            if (start >= 0 && end >= 0 && start <= m_size && end <= m_size) {
                for (int i = end; i > static_cast<int>(start); --i) {
                    erase(&(*(m_buffer + i)));
                }
                return &(*(m_buffer + start));
            }
            return last;
        }
        void clear() {
            erase(begin(), end());
        }

    private:
        size_t m_size{0};
        size_t m_capacity{0};
        T* m_buffer{nullptr};
    };
    template<class T>
    Vector<T>::Vector(size_t size) : m_size(size), m_capacity(size), m_buffer(new T[size]) {}
    template<class T>
    Vector<T>::Vector() : Vector(0) {}
    template<class T>
    Vector<T>::Vector(size_t size, const T &value) : Vector(size) {
        for (size_t i = 0; i < m_size; ++i)
            m_buffer[i] = value;
    }
    template<class T>
    Vector<T>::Vector(Vector::iterator first, Vector::iterator last) : Vector(std::distance(first, last)) {
        size_t distance = std::distance(first, last);
        for (size_t i = 0; first != last && i < distance; ++i, ++first)
            m_buffer[i] = *first;
    }
    template<class T>
    Vector<T>::Vector(const std::initializer_list<T> &lst) : Vector(lst.size(), lst.size()) {
        auto it = lst.begin();
        for (size_t i = 0; it != lst.end(); ++it, ++i)
            m_buffer[i] = *it;
    }
    template<class T>
    Vector<T>::Vector(const Vector<T> &other) : Vector(other.size(), other.capacity()) {
        auto it = other.begin();
        for (size_t i = 0; it != other.end(); ++it, ++i)
            m_buffer[i] = *it;
    }
    template<class T>
    Vector<T>::~Vector() {
        delete[] m_buffer;
    }
    template<class T>
    Vector<T> &Vector<T>::operator=(const Vector<T> &other) {
        if (m_buffer != nullptr && m_capacity < other.m_capacity)
            delete[] m_buffer;
        m_size = other.m_size;
        if (m_capacity < other.m_capacity) {
            m_capacity = other.m_capacity;
            m_buffer = new T[m_capacity];
        }

        auto it = other.begin();
        for (size_t i = 0; it != other.end() ; ++it, ++i)
            m_buffer[i] = *it;
        return *this;
    }
    template<class T>
    bool Vector<T>::operator==(const Vector<T> &other) const {
        if (m_size != other.m_size)
            return false;
        for (size_t i = 0; i < m_size; ++i) {
            if (!(m_buffer[i] == other.m_buffer[i]))
                return false;
        }
        return true;
    }
    template<class T>
    bool Vector<T>::operator!=(const Vector<T> &other) const {
        return !(this == other);
    }
    template<class T>
    bool Vector<T>::operator<(const Vector<T> &other) const {
        return std::lexicographical_compare(m_buffer, m_buffer + m_size, other.m_buffer, other.m_buffer + other.m_size);
    }
    template<class T>
    bool Vector<T>::operator>(const Vector<T> &other) const {
        return !(this < other) && this != other;
    }
    template<class T>
    bool Vector<T>::operator<=(const Vector<T> &other) const {
        return this < other || this == other;
    }
    template<class T>
    bool Vector<T>::operator>=(const Vector<T> &other) const {
        return this > other || this == other;
    }
    template<class T>
    void Vector<T>::resize(size_t size, const T &value) {
        if (m_size > size)
            delete[] &(*(m_buffer + size));
        else {
            T* ptr = new T[size];
            memcpy(ptr, m_buffer, m_size * sizeof(*m_buffer));
            delete[] m_buffer;
            m_buffer = ptr;
            for (size_t i = m_size; i < size; ++i)
                m_buffer[i] = value;
            m_size = size;
            m_capacity = size;
        }
    }
    template<class T>
    void Vector<T>::reserve(size_t size) {
        if (size < 0 || m_capacity > size)
            return;
        T* ptr = new T[size];
        memcpy(ptr, m_buffer, m_size * sizeof(*m_buffer));
        delete[] m_buffer;
        m_buffer = ptr;
        m_capacity = size;
    }
    template<class T>
    T &Vector<T>::operator[](size_t index) const {
        return m_buffer[index];
    }
    template<class T>
    T &Vector<T>::at(size_t index) const {
        if (index >= m_size)
            throw std::out_of_range("Vector: out of range");
        return m_buffer[index];
    }
    template<class T>
    T *Vector<T>::data() const {
        return m_buffer;
    }
    template<class T>
    void Vector<T>::push_back(const T &value) {
        if (m_size + 1 > m_capacity)
            reserve(m_capacity * 2 == 0 ? 1 : m_capacity * 2);
        m_buffer[m_size] = value;
        m_size += 1;
    }
    template<class T>
    void Vector<T>::pop_back() {
        m_size--;
    }
}