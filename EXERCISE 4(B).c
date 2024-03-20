#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[5];

void bubble_sort() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < 5; a[i++] = rand() % 100);

    printf("Original Array: ");
    for (int i = 0; i < 5; printf("%d ", a[i++]));

    bubble_sort();

    printf("\nSorted Array: ");
    for (int i = 0; i < 5; printf("%d ", a[i++]));

    return 0;
}
