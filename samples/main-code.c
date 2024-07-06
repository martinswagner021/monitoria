#include <stdio.h>
#include <stdbool.h>

void print_bits(const char* name, void* data, int n){
    printf("%s: ", name);
    int N = 8;
    bool binary = false;
    unsigned char* v = data;
    for(int i = 0; i < n; i+=N){
        printf("\n\t%p : ", &v[i]);
        for(int j = 0; j < N && i+j<n; j++)
            printf(binary? "%08b ": "%02x ", v[i+j]);
    }
    puts("");
}
#define PRINT_BITS(X) print_bits(#X, &X, sizeof X);

struct Dados{
    int x, y; 
    struct Dados* next;
};

int main(){
    float a[4] = {5.2, 4.2, 9.6, 2.6};
    char s[8] = "abacaxi";
    int b[3] = {138735, 35435, 6843552};
    int x = 260;
    int* p = &x;
    struct Dados d = {2451, 1354, NULL};
    struct Dados e = {1485, 5467, &d};

    PRINT_BITS(a);
    PRINT_BITS(s);
    PRINT_BITS(b);
    PRINT_BITS(x);
    PRINT_BITS(p);
    PRINT_BITS(d);
    PRINT_BITS(e);
}