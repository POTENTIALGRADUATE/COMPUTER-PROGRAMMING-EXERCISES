#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 5

int a[ARRAY_SIZE];

void bubble_sort() {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < ARRAY_SIZE - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void get_user_input() {
    printf("Enter %d integers:\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; scanf("%d", &a[i++]));
}

int main() {
    srand(time(NULL));
    get_user_input();

    printf("Original Array: ");
    for (int i = 0; i < ARRAY_SIZE; printf("%d ", a[i++]));

    bubble_sort();

    printf("\nSorted Array: ");
    for (int i = 0; i < ARRAY_SIZE; printf("%d ", a[i++]));

    return 0;
}
