#include<stdio.h>
int binarySearch(int arr[],int size,int target){
    int left =0;
    int right=size -1;
    while(left<=right){
        int mid=left+(right-left)/-2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=5;
    int result=binarySearch(arr,sizeof(arr)/sizeof(arr[0]),target);
    printf("element found at index:%d\n",result);
    return 0;
    }