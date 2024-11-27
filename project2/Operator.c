// PENJELASAN OPERATOR
// Operator adalah simbol atau tanda dalam bahasa pemrograman 
// yang digunakan untuk melakukan operasi pada data atau variabel 
// (penjumlahan, pengurangan, pembagian, perkalian, modulus, dll) 
// serta operasi logika (AND && OR || dll).

// IMPLEMENTASI OPERATOR
#include <stdio.h>

int main(){
    int a=10,b=5;
    printf("a = %d, b = %d\n", a, b);
    printf("Penjumlahan : %d\n", a+b);
    printf("Pengurangan : %d\n", a-b);
    printf("Perkalian   : %d\n", a*b);
    printf("Perkalian   : %d\n", a/b);
    printf("Logika OR   : %d\n", a||b);
    printf("Logika AND  : %d\n", a&b);
}

// KESULITAN OPERATOR
// Operator memiliki urutan prioritas tertentu yang bisa membingungkan,
// seperti * (perkalian) dihitung terlebih dahulu lalu + (penjumlahan).