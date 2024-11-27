// PENJELASAN FUNCTION
// Function adalah blok kode yang dibuat untuk melakukan tugas tertentu. 
// Dengan menggunakan function, kode menjadi lebih terstruktur karena 
// dapat digunakan berulang sehingga memudahkan proses debugging.

// IMPLEMENTASI FUNCTION
#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int a=10, b=5;
    printf("%d + %d = %d", a, b, sum(a,b));
}

// KESULITAN FUNCTION
// Terkadang membingungkan antara parameter yang hanya menerima input atau 
// parameter yang merupakan input sekaligus output.