//created by Raditya Putra Farma 23343050

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Struktur simpul untuk linked list
struct Node {
    int data;
    struct Node* next;
};

// Fungsi untuk mengecek apakah suatu bilangan adalah prima
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Fungsi untuk menambahkan simpul baru ke linked list
void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}

// Fungsi untuk mencetak linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    int n, m;

    printf("Masukkan nilai n untuk bilangan prima: ");
    scanf("%d", &n);

    printf("Masukkan nilai m untuk alokasi memori awal: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0) {
        printf("Masukkan n dan m harus lebih dari 0.\n");
        return 1;
    }

    // Inisialisasi linked list
    struct Node* head = NULL;

    // Alokasi memori awal
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 2;
    head->next = NULL;

    int count = 1;
    int num = 3;
    while (count < n) {
        if (isPrime(num)) {
            append(&head, num);
            count++;
        }
        num++;
    }

    // Cetak linked list
    printf("Bilangan prima pertama sampai ke-%d adalah:\n", n);
    printList(head);

    // Alokasi ulang memori berdasarkan nilai m
    printf("Masukkan nilai m untuk alokasi memori baru: ");
    scanf("%d", &m);

    head = (struct Node*)realloc(head, m * sizeof(struct Node));

    // Jika alokasi ulang berhasil, cetak pesan
    if (head != NULL) {
        printf("Alokasi memori berhasil untuk %d elemen.\n", m);
    } else {
        printf("Alokasi memori gagal.\n");
    }

    // Bebaskan memori linked list
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

