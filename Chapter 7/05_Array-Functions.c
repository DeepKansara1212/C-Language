#include <stdio.h>
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int numbers1[] = {10, 20, 30};

    printArray(numbers, 5);
    printArray(numbers1, 3);
    return 0;
}