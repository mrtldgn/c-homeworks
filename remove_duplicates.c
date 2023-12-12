#include <stdio.h>

int includes(int* array, int size, int number) {
	for(int i = 0; i < size; i++) {
		if (number == array[i])
			return 1;
	}
	return 0;
}

int main() {
    int n;
    printf("Kaç adet veri gireceksiniz?");
    scanf("%d", &n);

    int input[n];
    int output[n];
    int permanent = 0;

    // input'u doldur
    for (int i = 0; i < n; i++) {
        printf("Sayı %d:", i + 1);
        scanf("%d", &input[i]);
    }

    // output'u doldur
    for (int i = 0; i < n; i++) {
        if (!includes(output, n, input[i])) {
            output[permanent++] = input[i];
        }
    }

    // output'u yazdır
    printf("Girilen sayılar:");
    for (int i = 0; i < permanent; i++) {
        printf("%d, ", output[i]);
    }
    printf("\n");

    return 0;
}
