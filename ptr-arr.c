#include<stdio.h>
int main(){
   int arr[]={1,2,3,6,7,8};
   int* ptr=arr;
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
    printf("%d\n",*ptr);
    ptr++;
   }
printf("%d\n",*(ptr+1));
return 0;
}