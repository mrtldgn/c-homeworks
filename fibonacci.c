#include <stdio.h>

int read_number(char* message) {
    int number;
    printf("%s", message);
    scanf("%d", &number);
    return number;
}

int main() {
	int s1 = 0, s2 =1;
	int n = read_number("Terim sayısı giriniz: ");
	printf("Fibonacci Dizisi: ");
	for(int i = 1; i <= n; i++) {
		printf("%d,", s1);
		int nextterm = s1 + s2;
		s1 = s2;
		s2 = nextterm;
	}
	return 0;
}
