#include <stdio.h>
#include <string.h>
struct student
{
    int list;
    int roll_no;
    char name[20];
    int phone_number;
    int mark1;
    int mark2;
    int mark3;
    char grade[10];
};
int add_contact(struct student s[], int n)
{
    int i;
    if (n < 100)
    {
        printf("your entry is");
        scanf("%d",&s[n].list);
        printf("enter roll_no");
        scanf("%d",&s[n].roll_no);
        printf("Enter Name: ");
        scanf("%s", s[n].name);
        printf("Enter Phone Number: ");
        scanf("%d", &s[n].phone_number);
        printf("Enter marks of 3 subjects: ");
        scanf("%d",&s[n].mark1);
        scanf("%d",&s[n].mark2);
        scanf("%d",&s[n].mark3);
        printf("Enter grade: ");
        scanf("%s",s[n].grade);
        n++;
        return n;
    }
    else
    {
        printf("Contact list is full!\n");
        return n;
    }
}
void search_contact(struct student s[], int n)
{
    int i,entry;
    printf("enter the entry of contact u want to search");
    scanf("%d",&entry);
    for (int i = 1; i <= n; i++)
    {
        if (s[i].list == entry)
        {
            printf("Data is of contact %d\n", s[i].list);
            printf("your roll_no is %d\n",s[i].roll_no);
            printf("Name: %s\n", s[i].name);
            printf("Phone Number: %d\n", s[i].phone_number);
            printf("marks of sub1: %d\n", s[i].mark1);
            printf("marks of sub2: %d\n", s[i].mark2);
            printf("marks of sub3: %d\n", s[i].mark3);
            printf("grade: %s\n", s[i].grade);
            return;
        }
    }

    printf("Contact not found!\n");
}
void update_phoneno(struct student s[],int n)
{
    int i,entry,new_phoneno;
    printf("enter the entry of contact for which u want to upgrade phone_no");
    scanf("%d",&entry);
    printf("enter the new phoneno u want to update");
    scanf("%d",&new_phoneno);
    for(i=1;i<=n;i++)
    {
        if(s[i].list == entry)
        {
            s[i].phone_number=new_phoneno;
        }
    }
}
int main()
{
    int choice, n = 1;
    struct student s[100];
    while (1)
    {
        printf("\n1. Add Contact");
        printf("\n2. Search Contact");
        printf("\n3. update phone no");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
	        case 1:
	            n = add_contact(s, n);
	            break;
	        case 2:
	            search_contact(s, n);
	            break;
	        case 3:
	            update_phoneno(s,n);
	            break;
	        case 4:
	            printf("exit");
	            return 0;
	        default:
	            printf("Invalid choice\n");
	            break;
		}
 }
}
