#include<stdio.h>

int is_fizz(int i) {
    return (i % 3 == 0 || (i > 9 && i < 100 && (i / 10 == 3 || i % 10 == 3)));
}

int is_buzz(int i) {
     return (i %5 == 0 || (i > 9 && i < 100 && (i / 10 == 5 || i % 10 == 5)));
}

void fizzbuzz() {
    for (int i = 1; i < 101; i++) {
        if (is_fizz(i)) printf("FİZZ");
        if (is_buzz(i)) printf("BUZZ");
        if (!is_fizz(i) && !is_buzz(i)) printf("%d", i);
        printf("\n");
    }
}

int main() {
    fizzbuzz();
    return 0;
}