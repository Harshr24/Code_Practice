+#include<stdio.h>
int main()
{
	char a[10],b[10];
	int i,j,len1=0,len2=0,count=0,status;
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++)
	{
		len1=len1+1;
	}
	for(i=0;b[i]!='\0';i++)
	{
		len2=len2+1;
	}

	for(i=0;i<=(len1-len2+1);i++)
	{
		for(j=0;j<len2;j++)
		{
			if(a[i+j]==b[j])
			{
				count++;
				printf("%c",b[j]);
			}
	}
	if(count==len2)
	{
		status=0;
	}
	else
	{
		status!=0;
	}
	count=0;
	}
	if(status==0)
	{
		printf("substring");
	}
	else
	{
		printf("not substring");
	}
}