#include <stdio.h>

int main() {
    char nama[100];
    char nim[20];
    char kelas_paralel[10];
    char Ttl[100];
    char Alamat[100];
    char Hobby[100];
    char Hp[15];

    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM: ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel: ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);
    printf("Tempat/Tanggal Lahir: ");
    fgets(Ttl, sizeof(Ttl), stdin);
    printf("Alamat: ");
    fgets(Alamat, sizeof(Alamat), stdin);
    printf("Hobby: ");
    fgets(Hobby, sizeof(Hobby), stdin);
    printf("No.HP: ");
    fgets(Hp, sizeof(Hp), stdin);

    printf("\n");

    printf("Nama: %s", nama);
    printf("NIM: %s", nim);
    printf("Kelas Paralel: %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir: %s", Ttl);
    printf("Alamat: %s", Alamat);
    printf("Hobby: %s", Hobby);
    printf("Hp: %s", Hp);

    return 0;
}
