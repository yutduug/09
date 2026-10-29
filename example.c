
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 9, 4, 8};
    int all_same = 1;

    for (i = 0; i < SIZE; i++)
    {
        if (a[i] != b[i])
        {
            printf("index %d: a[%d] = %d, b[%d] = %d\n",
                   i, i, a[i], i, b[i]);

            all_same = 0;
        }
    }

    if (all_same == 1)
    {
        printf("배열은 같은 값을 가집니다.\n");
    }

    return 0;
}
