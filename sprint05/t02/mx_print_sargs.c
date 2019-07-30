

void mx_printchar(char c);
void mx_printstr(const char *s);

sort() {
for (int i = 0; i < 6; i++) { 
for (int i2 = i; i2 < 5; i2++) 
{ 
int a; 
if (m1[i2] > m1[i2 + 1]) 
{ 
a = m1[i2]; m1[i2] = m1[i2 + 1]; m1[i2 + 1]=a; 
} 
} 


}
}


int main( int argc, char *argv[] ) {
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');    
    }
}
