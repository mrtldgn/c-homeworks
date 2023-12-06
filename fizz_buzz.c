#include<stdio.h>

void fizzbuzz() {
    for (int i = 1; i < 101; i++) {
        if (i %3 == 0) printf("FİZZ");
        if (i %5 == 0) printf("BUZZ");
        if (i % 3 != 0 && i % 5 != 0) printf("%d", i);
        printf("\n");
    }
}

int main() {
    fizzbuzz();
    return 0;
}