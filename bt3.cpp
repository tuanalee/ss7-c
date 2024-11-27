#include <stdio.h>

int main() {
    int arr[5] = {10, 21, 34, 45, 56}; 
    int kiemtrasochan = 0; 

    
    printf("Cac so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            kiemtrasochan = 1; 
        }
    }

    
    if (!kiemtrasochan) {
        printf("Mang khong chua so chan.\n");
    } else {
        printf("\n"); 
    }

    return 0;
}
