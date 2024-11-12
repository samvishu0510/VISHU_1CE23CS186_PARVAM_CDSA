#include <stdio.h>
int main(){
int arr[] = (34, 25, 12, 22, 11, 99); 
int n = sizeof(arr) / sizeof(arr[0]);
int i, j, temp;
printf("Original array: ");
for(i=0; i < n; i++){
printf("%d", arr[1]);
}
printf("\n");
for(i=0; i<n-1; i++){
     for(j=0; j<n-1-1; j++){ 
     if(arr[j]> arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j+1]=temp;
     }
     }
}
printf("sorted array:");
for (i=0;i<n;i++){
    
}
}