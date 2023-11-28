#include <stdio.h>

int main(){
    int n;
    printf("Kac adet tam sayi gireceksiniz? ");
    scanf("%d", &n);

    int sayilar[n];

    printf("Lutfen %d adet tam sayi giriniz:\n", n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &sayilar[i]);
    }
    int temp;

    printf("\nGirilen sayilar:\n");
    for (int i = 0; i < n; ++i) {
        printf("-%d\n", sayilar[i]);
    }
    for (int i = 0; i < n-1; ++i) {
        for(int j =0; j < n-i-1; j++){
            if(sayilar[j] > sayilar[j+1]){
                temp = sayilar[j];
                sayilar[j] = sayilar[j+1];
                sayilar[j+1] = temp;
            }
        }
    }  

    printf("\nSıralanmış hali:\n");
    for(int i = 0; i < n; i++){
        printf("%d", sayilar[i]);
         if (i < n - 1) {
            printf("<");
        }
    }
    printf("\n");

    return 0;
}
