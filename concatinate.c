#include <stdio.h>
int main() {
  char str1[100] = "hello", str2[] = "world";
  int i=0,j=0;
  while (str1[i]!= '\0') {
    i++;
  }
  while (str2[j]!='\0') {
    str1[i++]=str2[j++];
  }
  str1[i] ='\0';
  printf("%s\n",str1);
  return 0;
}