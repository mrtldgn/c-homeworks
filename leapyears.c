#include<stdio.h>
int main (void) {
    while(1){

        int sayi;
        printf("Lutfen bir yil giriniz:");
        scanf("%d", &sayi);

    if ((sayi%4 == 0 && sayi%100 != 0)|| (sayi%400 == 0))
        printf("Artik bir yildir\n\n");
    else
        printf("Artik bir yil degildir\n\n");

        printf("Devam etmek istiyor musunuz?\n(e/h):");
    char devam;
        scanf(" %c", &devam);

    if (devam != 'e' && devam != 'E') {
            printf("Program sonlandirildi.\n");
            break;
        }
    }
return 0;
}