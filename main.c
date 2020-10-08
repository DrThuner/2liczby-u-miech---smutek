#include <stdio.h>

int main() {
    int firstNumber;
    int secondNumber;

    printf("Podaj pierwsza liczbe");

    scanf("%d", &firstNumber);

    printf("Podaj druga liczbe");

    scanf("%d", &secondNumber);

    for (int i = firstNumber; i <= secondNumber; i++) {
        printf("%d", i);

        if (i != 0 && (i % 5) == 0) {
            printf(":)");
        }

        if (i != 0 && (i % 10) == 0) {
            printf(":(");

        }
        printf("\n");
    }
    return 0;
}
