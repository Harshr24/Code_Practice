#include<stdio.h>
#include<math.h>

int main()
{ 
    int arr[100], i, n;
    printf("Enter set length : ");
    scanf("%d",&n);
    printf("Enter n numbers : ");

    for (int i=0;i<n;i++) 
    {
    	do
		{
            scanf("%d",&arr[i]);
		} while(arr[i]==0);
	} 

    int c=0,c2=0,s=0,s2=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>0)
        {
            c++;
            s=s+arr[i];
        }
        else 
        {
            c2++;
            s2=s2+arr[i];
        }
    }
    printf ("positive interger are %d and their sum is %d : ",c,s);
    printf ("/n negative interger are %d and their sum is %d : ",c2,s2);
}