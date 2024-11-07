#include <stdio.h>
int main()
{
    int n1 = 0;
    int n2 = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int n3 = 0;
    for (int i = 0; i <= n; ++i)
    {
        printf("%d\t", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
}