//Global struct
#include <stdio.h>
#include <string.h>

struct karyawan{
    char nama[50];
    int umur;
    char bagian[50];

};

struct karyawan krywn1,krywn2;

int main(){

    strcpy(krywn1.nama,"fikri");
    krywn1.umur = 19;
    strcpy(krywn1.bagian,"pergudangan");

    strcpy(krywn2.nama,"tasya");
    krywn2.umur = 18;
    strcpy(krywn2.bagian,"admin");

    printf("karyawan 1: %s,umur: %d,bagian: %s\n",krywn1.nama,krywn1.umur,krywn1.bagian);
    printf("karyawan 1: %s,umur: %d,bagian: %s\n",krywn2.nama,krywn2.umur,krywn2.bagian);

    return 0;
}
