#include <stdio.h>

int main() {
    FILE *file;
    char fileName[] = "metin.txt"; // Dosya adý
    char text[] = "Merhaba"; // Yazýlacak metin
    
    // Dosyayý yazma modunda aç
    file = fopen(fileName, "w");
    
    // Dosyaya metni yaz
    fprintf(file, "%s", text);
    
    // Dosyayý kapat
    fclose(file);
    
    // Dosyayý tekrar okuma modunda aç
    file = fopen(fileName, "r");
    
    // Dosyayý oku ve ekrana yazdýr
    printf("Dosya icerigi:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    // Dosyayý kapat
    fclose(file);
    
    return 0;
}

