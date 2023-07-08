#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    
    // Deðer atanacak sayýlarý kullanýcýdan al
    printf("Birinci sayiyi girin: ");
    scanf("%d", &num1);
    
    printf("Ikinci sayiyi girin: ");
    scanf("%d", &num2);
    
    // Ýþaretçilere deðiþken adreslerini atayýn
    ptr1 = &num1;
    ptr2 = &num2;
    
    // Deðerleri ekrana yazdýrýn
    printf("Birinci sayi: %d\n", *ptr1);
    printf("Ikinci sayi: %d\n", *ptr2);
    
    return 0;
}

