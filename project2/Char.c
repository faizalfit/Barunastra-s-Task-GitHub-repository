// PENJELASAN CHAR
// Char adalah tipe data dalam bahasa pemrograman C yang digunakan 
// untuk menyimpan satu karakter, seperti huruf, angka, atau simbol. 
// Char juga sering digunakan dalam array untuk membentuk kata atau 
// kalimat (string). Dengan array char, kita bisa menyimpan dan mengolah 
// teks seperti nama, kalimat, atau paragraf.

// IMPLEMENTASI CHAR
#include <stdio.h>
int main(){
    char a = 'A';
    char b[5] = {'A','B','C','D','E'}; //Char array
    printf("%c\n", a);
    for(int i=0; i<5; i++){
        printf("%c ", b[i]);
    }
    return 0;
}

// KESULITAN CHAR
// Sulit membedakan antara char dan char array. 