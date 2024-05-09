// 4. Write a program that takes in an array of 
// integers and its size as input. The program 
// should calculate and display the median value 
// of the array. If the array has an even number 
// of elements, display the average of the two middle values.
#include <stdio.h>

void sort(int *arr, int size)
{
    int i, j, t;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

float getMedian(int *arr, int size)
{
    if (size % 2 == 0)
    {
        return (arr[(size - 1) / 2] + arr[size / 2]) / 2.0;
    }
    else
    {
        return arr[size / 2];
    }
}

int main()
{
    int i, size;

    printf("Enter the total number of elements: ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter the element for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    sort(arr, size);

    printf("Median of the given array: %.2f\n", getMedian(arr, size));

    return 0;
}