// PENJELASAN ARRAY
// Array adalah struktur data yang dapat menyimpan beberapa nilai
// dengan tipe data yang sama di dalam satu variabel. Elemen dalam 
// array diakses menggunakan indeks yang mana indeks pertamanya dimulai
// dari 0, 1, 2, 3, 4, dan seterusnya.

// IMPLEMENTASI ARRAY
#include <stdio.h>

int main(){
    int array[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("%d ", array[i]);
    }
}

// KESULITAN ARRAY
// Ukuran array tetap, sehingga array tidak fleksibel untuk bertambah 
// atau berkurang ukurannya. Selain itu karena indeks dimulai dari 0, maka 
// terkadang membingungkan.