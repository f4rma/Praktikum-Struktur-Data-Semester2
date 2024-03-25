//created by Raditya Putra Farma 23343050

#include <stdio.h>

// Mendefinisikan struct Mahasiswa
struct Mahasiswa {
    char NIM[15];
    char Nama[50];
    char TanggalLahir[15];
    float IPK;
};

// Fungsi untuk input data mahasiswa
void inputData(struct Mahasiswa *mhs) {
    printf("Masukkan NIM: ");
    scanf("%s", mhs->NIM);

    printf("Masukkan Nama: ");
    scanf("%s", mhs->Nama);

    printf("Masukkan Tanggal Lahir (DD/MM/YYYY): ");
    scanf("%s", mhs->TanggalLahir);

    printf("Masukkan IPK: ");
    scanf("%f", &mhs->IPK);
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanData(struct Mahasiswa mhs) {
    printf("\nData Mahasiswa:\n");
    printf("NIM: %s\n", mhs.NIM);
    printf("Nama: %s\n", mhs.Nama);
    printf("Tanggal Lahir: %s\n", mhs.TanggalLahir);
    printf("IPK: %.2f\n", mhs.IPK);
}

int main() {
    struct Mahasiswa mhs;

    // Input data mahasiswa
    printf("Masukkan data mahasiswa:\n");
    inputData(&mhs);

    // Menampilkan data mahasiswa
    tampilkanData(mhs);

    return 0;
}

