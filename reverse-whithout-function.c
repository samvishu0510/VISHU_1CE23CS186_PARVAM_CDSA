#include <stdio.h>
#include <string.h>
int main()
{
  	char str[100],rev[100];
  	int i,j,len;
  	printf("Enter any String :\n");
  	gets(str); 	
  	j=0;
  	len=strlen(str);
  	for (i =len-1; i>=0;i--)
  	{
  		rev[j++]=str[i];
  	}
  	printf("\n String after Reversing=%s\n",rev);
  	return 0;
}