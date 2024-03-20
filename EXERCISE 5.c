#include <stdio.h>

typedef struct {
    int id;
    char name[20];
} Record;

int main() {
    // Typecasting examples
    int a = 10;
    float b = 3.5;
    char c = 'A';

    float result1 = (float)a / 3;
    int result2 = (int)b * 2;
    char result3 = (char)(c + 1);

    printf("Typecasting examples:\n");
    printf("Result 1: %f\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %c\n", result3);

    // Array of records
    Record records[5] = {{3, "J.COLE"}, {1, "OMONDI"}, {4, "NYAKUNDI"}, {2, "PATEL"}, {5, "HASSAN"}};

    // Bubble sort based on the id field
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (records[j].id > records[j + 1].id) {
                Record temp = records[j];
                records[j] = records[j + 1];
                records[j + 1] = temp;
            }
        }
    }

    // Display sorted records
    printf("\nSorted Records based on ID:\n");
    for (int i = 0; i < 5; i++) {
        printf("ID: %d, Name: %s\n", records[i].id, records[i].name);
    }

    return 0;
}
