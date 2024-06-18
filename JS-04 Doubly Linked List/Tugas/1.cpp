//created by Raditya Putra Farma 23343050

#include <stdio.h>
#include <stdlib.h>

// Struktur node untuk linked list
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Fungsi untuk menghitung bilangan Fibonacci ke-n
Node *fibonacci(int n) {
    Node *head = NULL, *prev = NULL, *curr = NULL;

    for (int i = 0; i < n; i++) {
        curr = (Node *)malloc(sizeof(Node));
        if (curr == NULL) {
            printf("Pengalokasian memori gagal!\n");
            exit(1);
        }

        if (i == 0) {
            curr->data = 0;
            head = curr;
        } else if (i == 1) {
            curr->data = 1;
            prev->next = curr;
        } else {
            curr->data = prev->data + (prev->next)->data;
            prev->next = curr;
        }

        curr->next = NULL;
        prev = curr;
    }

    return head;
}

// Fungsi untuk mencetak linked list
void printLinkedList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Fungsi untuk membebaskan memori linked list
void freeLinkedList(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int n;

    printf("Masukkan nilai n untuk bilangan Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Masukkan n harus lebih dari 0.\n");
        return 1;
    }

    Node *fib_series = fibonacci(n);

    printf("Bilangan Fibonacci pertama sampai ke-%d adalah:\n", n);
    printLinkedList(fib_series);

    // Membebaskan memori yang dialokasikan untuk linked list
    freeLinkedList(fib_series);

    return 0;
}

