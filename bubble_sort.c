#include <stdio.h>

int read_number(char* message) {
    int number;
    printf("%s", message);
    scanf("%d", &number);
    return number;
}

void fill_array(int* array, int size, char* message) {
    printf("Lutfen %d adet tam sayi giriniz:\n", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(char* title, int* array, int n, char* delimiter) {
    printf("\n%s\n", title);
    for(int i = 0; i < n; i++){
        printf("%d", array[i]);
        if (i < n - 1)
            printf("%s", delimiter);
    }
    printf("\n");
}

void bubble_sort(int* array, int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (array[j] > array[j+1])
                swap(&array[j], &array[j+1]);
}

int main(){
    int size = read_number("Kaç adet tam sayı gireceksiniz? ");
    int array[size];
    fill_array(array, size, "Lütfen %d adet tam sayı giriniz:\n");
    print_array("Girilen sayilar:", array, size, ", ");
    bubble_sort(array, size);
    print_array("Sıralanmış hali:", array, size, " < ");
    return 0;
}
