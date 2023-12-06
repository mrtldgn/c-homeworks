#include <stdio.h>
int main() {
	int n, s1 = 0, s2 =1, nextterm;
	printf("Terim sayısı girinizzz:");
	scanf("%d",&n);
	printf("Fibonacci Dizisi : ");
	for(int i = 1; i <= n; i++) {
		printf("%d,", s1);
		nextterm = s1 + s2;
		s1 = s2;
		s2 = nextterm;
	}
	return 0;
}		