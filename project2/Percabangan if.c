// PENJELASAN IF
// If adalah sebuah blok percabangan yang digunakan 
// untuk mengeksekusi blok kode tertentu jika suatu 
// kondisi terpenuhi.

// IMPLEMENTASI IF
#include <stdio.h>
int main(){
    int a,b;
    printf("Masukkan a : ");
    scanf("%d",&a);
    printf("Masukkan b : ");
    scanf("%d",&b);
    if(a > b){
        printf("%d lebih besar dari %d", a, b);
    } else if(a < b){
        printf("%d lebih kecil dari %d", a, b);
    } else{
        printf("%d sama dengan %d", a, b);
    }
}

// KESULITAN IF
// Penggunaan nested if yang terkadang membingungkan.