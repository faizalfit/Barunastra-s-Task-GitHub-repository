#include <stdio.h>
#include <string.h>

int const MAX_JURUSAN = 100;
int const MAX_MAHASISWA = 100;

typedef struct{
    char nama[50];
    char nrp[20];
    char jurusan[50];
    int sama;
} Mahasiswa;

Mahasiswa InputMhs(){
    Mahasiswa mhs;
    printf("nama    : ");
    scanf("%s", mhs.nama);
    printf("nrp     : ");
    scanf("%s", mhs.nrp);
    printf("jurusan : ");
    scanf("%s", mhs.jurusan);
    return mhs;
}

int CariJurusan(char jurusan[MAX_JURUSAN][50], int jumlahJurusan, char target[50]) {
    for (int i = 0; i < jumlahJurusan; i++) {
        if (strcmp(jurusan[i], target) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int jumlahMahasiswa;
    printf("Jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    Mahasiswa mhs[jumlahMahasiswa];

    char jurusan[MAX_JURUSAN][50];
    int jumlahMahasiswaJurusan[MAX_JURUSAN];
    int count = 0;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        char nama[50], nrp[20], jurusanTemp[50];

        mhs[i] = InputMhs();

        int indeksJurusan = CariJurusan(jurusan, count, mhs[i].jurusan);

        if (indeksJurusan == -1) {
            strcpy(jurusan[count], mhs[i].jurusan);
            jumlahMahasiswaJurusan[count] = 1;
            count++;
        } else {
            jumlahMahasiswaJurusan[indeksJurusan]++;
        }
    }

    printf("\nHasil Pengelompokan Mahasiswa:\n");
    for (int i = 0; i < count; i++) {
        if(jumlahMahasiswaJurusan[i]>1){
            for(int j=0; j < jumlahMahasiswa; j++){
                if(strcmp(jurusan[i],mhs[j].jurusan) == 0){
                    printf("%s ", mhs[j].nama);
                }
            }
            printf("dari departemen %s\n",jurusan[i]);
        } else{
            printf("%s sendirian dari departemen %s\n", mhs[i].nama, jurusan[i]);
        }
    }

    return 0;
}