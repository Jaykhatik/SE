#include <stdio.h>

int main() {
    int amount;
    int notes[8] = {500, 200, 100, 50, 20, 10, 5, 1};
    int count[8] = {0};  // store number of notes

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (int i = 0; i < 8; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount = amount % notes[i];
        }
    }

    printf("\nCurrency Note Breakdown:\n");
    for (int i = 0; i < 8; i++) {
        if (count[i] != 0) {
            printf("%d x %d = %d\n", notes[i], count[i], notes[i] * count[i]);
            //printf("%d notes of %d\n",count[i],notes[i]);
        }
    }

    return 0;
}
