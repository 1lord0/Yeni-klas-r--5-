#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    
    printf("Bir kelime veya cumle girin: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    int length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
        length--;
    }
    
    printf("Girilen kelimenin veya cumlenin uzunlugu: %d\n", length);
    
    return 0;
}

