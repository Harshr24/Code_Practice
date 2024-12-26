/*Write a program that takes in an array of integers and its size as input. The program should calculate and display 
the median value of the array. If the array has an even number of elements, display the average of the two middle values.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n,x,y,temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(x = 0; x < n - 1; x++)
    {       
        for(y = 0; y < n - x - 1; y++)
        {          
            if(arr[y] > arr[y + 1])
            {               
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;

            }
        }
    }

    printf("Array after implementing bubble sort: ");

    for(x = 0; x < n; x++)
    {
        printf("%d  ", arr[x]);
    }


    float median;
    if (n % 2 == 0) 
    {
        median = (float)(arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else 
    {
        median = (float)arr[n / 2];
    }

    printf("\nMedian value of the array is: %.2f\n", median);
}