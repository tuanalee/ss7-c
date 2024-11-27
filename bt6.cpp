#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int newArr[5]; 

 
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            newArr[i] = arr[i] + 3; 
        } else { 
            newArr[i] = arr[i] + 2; 
        }
    }

    
    printf("Mang moi sau khi da thay doi:\n");
    printf("[");
    for (int i = 0; i < 5; i++) {
        printf("%d", newArr[i]);
        if (i < 4) { 
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
