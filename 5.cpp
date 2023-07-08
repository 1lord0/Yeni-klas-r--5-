#include <stdio.h>

int main() {
    FILE *file;
    char fileName[] = "metin.txt"; // Dosya ad�
    char text[] = "Merhaba"; // Yaz�lacak metin
    
    // Dosyay� yazma modunda a�
    file = fopen(fileName, "w");
    
    // Dosyaya metni yaz
    fprintf(file, "%s", text);
    
    // Dosyay� kapat
    fclose(file);
    
    // Dosyay� tekrar okuma modunda a�
    file = fopen(fileName, "r");
    
    // Dosyay� oku ve ekrana yazd�r
    printf("Dosya icerigi:\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    // Dosyay� kapat
    fclose(file);
    
    return 0;
}

