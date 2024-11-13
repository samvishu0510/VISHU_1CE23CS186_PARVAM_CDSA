#include<stdio.h>

int main(){
    FILE *file =fopen("example.txt","w");
    if(file==NULL){
        printf("error creating file.\n");
        return 1;
    }
    printf("file created succesfully,\n");
    fclose(file);
    return 0;
}