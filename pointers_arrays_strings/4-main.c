#include <stdio.h>

void reverse_array(int *a, int n);

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;

    reverse_array(arr, 5);

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
