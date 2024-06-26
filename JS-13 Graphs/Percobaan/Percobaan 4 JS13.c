/*
    Nama  : Raditya Putra Farma
    Nim   : 23343050
    Prodi : Informatika
*/
#include <stdio.h>

int a[20][20], reach[20], n;

void dfs(int v) {
    int i;
    reach[v] = 1;
    for (i = 0; i < n; i++) {
        if (a[v][i] && !reach[i]) {
            printf("\n %d -> %d", v, i);
            dfs(i);
        }
    }
}

int main() {
    int i, j, count = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        reach[i] = 0;
        for (j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    dfs(1);

    for (i = 0; i < n; i++) {
        if (reach[i]) {
            count++;
        }
    }

    if (count == n) {
        printf("\nGraph is connected");
    } else {
        printf("\nGraph is not connected");
    }

    return 0;
}
