#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    
    // De�er atanacak say�lar� kullan�c�dan al
    printf("Birinci sayiyi girin: ");
    scanf("%d", &num1);
    
    printf("Ikinci sayiyi girin: ");
    scanf("%d", &num2);
    
    // ��aret�ilere de�i�ken adreslerini atay�n
    ptr1 = &num1;
    ptr2 = &num2;
    
    // De�erleri ekrana yazd�r�n
    printf("Birinci sayi: %d\n", *ptr1);
    printf("Ikinci sayi: %d\n", *ptr2);
    
    return 0;
}

