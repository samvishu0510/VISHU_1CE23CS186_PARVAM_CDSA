#include <stdio.h>
int main()
{
    int i;
    printf("even number 1 to 20\n");
    for (i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
        return 0;
}