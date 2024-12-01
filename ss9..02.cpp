#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  
    int pos, new_value, i;

   
    printf("Mang ban dau: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    printf("Nhap vi tri can sua (0 den 9): ");
    scanf("%d", &pos);

  
    if (pos < 0 || pos >= 10) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &new_value);

   
    arr[pos] = new_value;

  
    printf("Mang sau khi sua: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}