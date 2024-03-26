//created by Raditya Putra Farma 23343050

#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk mengecek apakah suatu bilangan adalah bilangan prima
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Bukan bilangan prima jika kurang dari atau sama dengan 1
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Bukan bilangan prima jika dapat dibagi oleh bilangan lain selain 1 dan dirinya sendiri
        }
    }
    return 1; // Bilangan prima
}

// Fungsi untuk menampilkan n bilangan prima pertama
void printPrimes(int n) {
    int* primes = (int*)malloc(sizeof(int)); // Mengalokasikan memori awal dengan ukuran 1 int
    if (primes == NULL) {
        printf("Pengalokasian memori gagal.\n");
        return;
    }
    
    int count = 0;
    int num = 2; // Dimulai dari 2 karena 2 adalah bilangan prima pertama
    while (count < n) {
        if (isPrime(num)) {
            primes[count] = num;
            count++;

            // Mengalokasikan memori baru jika diperlukan
            primes = (int*)realloc(primes, (count + 1) * sizeof(int));
            if (primes == NULL) {
                printf("Pengalokasian memori gagal.\n");
                return;
            }
        }
        num++;
    }

    // Menampilkan bilangan prima yang sudah ditemukan
    printf("%d bilangan prima pertama adalah:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    // Melepaskan memori yang telah dialokasikan
    free(primes);
}

int main() {
    int n, m;
    printf("Masukkan jumlah bilangan prima yang ingin ditampilkan: ");
    scanf("%d", &n);
    printf("Masukkan ukuran awal memori (m): ");
    scanf("%d", &m);

    // Mengatur ukuran awal memori dengan malloc
    int* primes = (int*)malloc(m * sizeof(int));
    if (primes == NULL) {
        printf("Pengalokasian memori gagal.\n");
        return 1;
    }

    printPrimes(n);

    return 0;
}


