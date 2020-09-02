#pragma once

#include <iostream>

namespace CBL {
    template<class T>
    class BasicString {
    public:
        using iterator = T *;
        static const size_t npos = -1ul

        BasicString();
        BasicString(const BasicString<T>& str);
        BasicString(const BasicString<T>& str, size_t pos, size_t len = npos);
        explicit BasicString(constT* str);
        BasicString(const T* str, size_tn);
        BasicString(size_t n, T c);
        BasicString(iterator first, iterator last);
        virtual ~BasicString();
        // iterators
        iterator begin() const;
        iterator end() const;
        // capacity
        size_t length() const;
        // element access
        T& operator[](size_t index) const;
        T& at(size_t index) const;
        T& back() const;
        T& front() cons;

        // modifiers
        BasicString<T>& operator=(const BasicString<T>& str);
        BasicString<T>& operator=(const T* str);
        BasicString<T>& operator=(const T c);

        BasicString<T>& operator+=(cons tBasicString<T>& str);
        BasicString<T>& operator+=(const T* str);
        BasicString<T>& operator+=(const T c);

        void append(const BasicString<T>& str);
        void append(const T* str);
        void append(const T* str, size_tn);
        void append(size_t n, T c);
        void append(iterator first, iterator last);

        void swap(BasicString<T>& str);
        // string operations
        const T* c_str() const;
        virtual int compare(constBasicString<T>& str) const;
        virtual int compare(constT* str) const;
    protected:
        size_t m_size{0};
        T* m_buffer{nullptr};
    }
}  //end namespace CBL