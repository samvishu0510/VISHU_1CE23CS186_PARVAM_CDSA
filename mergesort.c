#include<stdio.h>
void mergeArrays(int arr1[],int m,int arr2[],int n){
    int i=0,j=0,k=0;
    int merged[m+n];
    while(i < m && j < n){
        if(arr1[i]<arr2[j]){
            merged[k++]=arr1[i++];
        }else{
            merged[k++]=arr2[j++];
        }
    }
    while(i<m){
        merged[k++]=arr1[i++];
    }
    while(j<n){
        merged[k++]=arr2[j++];
    }
    printf("Merged Array:");
    for(k=0;k<m+n;k++){
        printf("%d",merged[k]);
    }
    printf("\n");
}
int main(){
    int arr1[]={1,3,5,7};
    int m=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={2,4,6,8};
    int n=sizeof(arr2)/sizeof(arr2[0]);

    printf("Array 1:");
    for(int i=0;i<m;i++){
        printf("%d",arr1[i]);
    }
      printf("\n");
      printf("Array 2:");
      for(int i=0;i<n;i++){
      printf("%d",arr2[i]);
    }
    printf("\n");
    mergeArrays(arr1,m,arr2,n);
    return 0;
    }