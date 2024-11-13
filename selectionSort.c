#include<stdio.h>
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
        min=j;
    }
}
if (min!=i){
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
}
}
}
void print(int arr[],int size){
    for( int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
    }
int main(){
    int arr[]={67,987,87,98};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("original number");
    print(arr,n);

    selection(arr,n);

    printf("sorted elements:");
    print(arr,n);

    return 0;

}