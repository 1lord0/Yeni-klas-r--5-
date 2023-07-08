#include <stdio.h>

int main() {
    double decimalNumber;
    
    printf("Bir ondalik sayi girin: ");
    scanf("%lf", &decimalNumber);
    
    printf("Onaltilik (Hexadecimal) olarak: %a\n", decimalNumber);
    
    return 0;
}

