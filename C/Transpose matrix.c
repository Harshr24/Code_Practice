#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of column: ");
    scanf("%d", &c);

    int a[r][c];
    printf("Enter the Element of array : ");
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int ta[c][r];
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            ta[j][i]=a[i][j];
        }
    }

    printf("\nTranspose matrix is : \n");
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            printf("%d\t",ta[i][j]);
        }
        printf("\n\n");
    }
}