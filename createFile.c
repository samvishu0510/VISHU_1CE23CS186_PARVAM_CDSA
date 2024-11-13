#include<stdio.h>

int main(){
    FILE *file=fopen("hello.txt","w");
    if(file==NULL){
        perror("error opening file");
        return 1;
    }
    fprintf(file,"this is the first line.\n");
    fprintf(file,"writing to file will overwrite its contents");
    fclose(file);
    printf("file written successfully in write node.\n");
    return 0;
}