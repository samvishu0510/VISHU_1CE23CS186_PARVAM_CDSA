#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int sum=0;
    for(int i=0;i<6;i++){
        printf("%d \n",arr[i]);
    sum+=arr[i];
    }
      printf("sum is : %d",sum);
    return 0;                                                                           
}