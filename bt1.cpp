#include <stdio.h>

     int main(){
     
     
     int arr[] = {10, 20, 30, 40, 50};
     int size = sizeof(arr) / sizeof (arr[0]); 
     	
     	
     	printf("cac phan tu cua mang: \n");
     	   for(int i =0 ; i < size; i++){
     	   	
     	   	printf("arr[%d] = %d\n", i, arr[i]);
			}
     	   
     	 
     	printf("do dai cua mang : %d\n", size);
     	
     return 0;
	 }
