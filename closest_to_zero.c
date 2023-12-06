#include <stdio.h>
#include <stdlib.h>

int yakinbul(int* degerler, int n) {
    int enyakin = degerler[0];
    for (int i = 1; i < n; i++) 
        if (abs(degerler[i]) < abs(enyakin))
            enyakin = degerler[i];
    return enyakin;
}

void print(int* degerler, int n) {
    printf("Girmis oldugunuz degerler: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", degerler[i]);
}

void degerlerioku(int* degerler, int n){
    printf("Lütfen %d degeri giriniz:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Deger %d: ", i + 1);
        scanf("%d", &degerler[i]);
    }
}

int sayi_al() {
    int n;
    printf("Kac deger gireceksiniz:");
    scanf("%d", &n);
    return n;
}

int main() {
    int n = sayi_al();
    int degerler[n];
    degerlerioku(degerler, n);
    print(degerler, n);
    printf("\nSıfıra en yakın deger: %d\n", yakinbul(degerler, n));
    return 0;
}