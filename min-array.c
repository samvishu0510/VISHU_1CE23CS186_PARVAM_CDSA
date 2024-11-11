#include<stdio.h>
int main(){
    int arr[]={1,2,3,5,6};
    int min=arr[0];
    for (int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("the min element is %d",min);
    return 0;
}
