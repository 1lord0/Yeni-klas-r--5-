#include <stdio.h>

unsigned long long int Factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}

int main() {
    unsigned int number;
    
    printf("Bir sayi girin: ");
    scanf("%u", &number);
    
    unsigned long long int result = Factorial(number);
    
    printf("%u! = %llu\n", number, result);
    
    return 0;
}

