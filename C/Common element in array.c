#include <stdio.h>

int main() 
{
    int n1,n2,x,temp;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter array elements:\n");
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter array elements:\n");
    for (int i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    for(int x = 0; x < n1 - 1; x++)
    {       
        for(int y = 0; y < n1 - x - 1; y++)
        {          
            if(arr1[y] > arr1[y + 1])
            {               
                temp = arr1[y];
                arr1[y] = arr1[y + 1];
                arr1[y + 1] = temp;
            }
        }
    }
    printf("Sorted array is : ");
    for(x = 0; x < n1; x++)
    {
        printf("%d  ", arr1[x]);
    }

    for(int x = 0; x < n2 - 1; x++)
    {       
        for(int y = 0; y < n2 - x - 1; y++)
        {          
            if(arr2[y] > arr2[y + 1])
            {               
                temp = arr2[y];
                arr2[y] = arr2[y + 1];
                arr2[y + 1] = temp;
            }
        }
    }
    printf("Sorted array is : ");
    for(x = 0; x < n2; x++)
    {
        printf("%d  ", arr2[x]);
    }

    int low,high;
    printf("Same element found are : ");
    for (int i = 0; i < n1; i++) 
    {
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;

            if (arr2[mid] == arr1[i])
                printf("%d\t", arr1[i]);
            else if (arr2[mid] < arr1[i])
                low = mid + 1;
            else
                high = mid - 1;
        }   
    }
}


    /*int i,j;
    printf("Common elements are : ");
    while (i <= n1 && j <= n2) 
    {
        if (arr1[i] == arr2[j]) 
        {
            printf("%d ", arr2[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }


    int flag = 0;
    for (i = 0; i < n1; i++) 
    {  
        for (j = 0; j < n2; j++) 
        {   
            if (arr1[i] == arr2[j]) 
            {   
                if (flag == 0) 
                {
                    printf("%d ", arr1[i]);
                }
            }
        }
    }*/