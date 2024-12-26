#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEE 2

// Substructure for salary details
struct Salary
{
    float bS;
    float DA;
    float HRA;
};
// Structure for employee details
struct Employee 
{
    char name[100];
    int age;
    int employeeID;
    struct Salary s;
    char designation[100];
    char phoneNumber[20];
    char address[200];
};

// Function to read employee details
void getEmployeeInfo(struct Employee emp[], int numE) 
{
    printf("Enter employee name: ");
    scanf("%s", emp[numE].name);
    
    printf("Enter employee age: ");
    scanf("%d", &emp[numE].age);
    
    printf("Enter employee ID: ");
    scanf("%d", &emp[numE].employeeID);
    
    printf("Enter employee basic salary: ");
    scanf("%f", &emp[numE].s.bS);
    
    printf("Enter employee DA: ");
    scanf("%f", &emp[numE].s.DA);
    
    printf("Enter employee HRA: ");
    scanf("%f", &emp[numE].s.HRA);
    
    printf("Enter employee designation: ");
    scanf("%s", emp[numE].designation);
    
    printf("Enter employee phone number: ");
    scanf("%s", emp[numE].phoneNumber);
    
    printf("Enter employee address: ");
    scanf("%s", emp[numE].address);
}

// Function to display employee with the same designation
void searchByDesignation(struct Employee emp[], int numE, char *designation) 
{
    int i;
    int found = 0;
    
    printf("employee with designation %s are :\n", designation);
    
    for (i = 0; i < numE; i++) 
    {
        if (strcmp(emp[i].designation, designation) == 0) 
        {
            printf("Name: %s\n", emp[i].name);
            printf("Employee ID: %d\n", emp[i].employeeID);
            found = 1;
        }
    }
    
    if (found==0) 
    {
        printf("No employee found with designation %s\n", designation);
    }
}

// Function to update salary details and designation for a promoted employee
void updateEmployee(struct Employee emp[], int x) 
{
	float add1, add2, add3;
	
    printf("Enter increased additonal basic salary: ");
    scanf("%f", &add1);
    emp[x].s.bS += add1;
    
    printf("Enter increased additional DA: ");
    scanf("%f", &add2);
    emp[x].s.DA += add2;
    
    printf("Enter increased additional HRA: ");
    scanf("%f", &add3);
    emp[x].s.HRA += add3;
    
    printf("Enter designation: ");
    scanf("%s", emp[x].designation);
    
    printf("Employee details updated successfully.\n");
    
    printf("Updated basic salary is : %.2f\n", emp[x].s.bS);
    printf("Updated DA is : %.2f\n", emp[x].s.DA);
    printf("Updated HRA is : %.2f\n", emp[x].s.HRA);
}

int main() 
{
    struct Employee emp[MAX_EMPLOYEE];
    int numE = 0;
    int choice;
    char designation[100];
    int i,j,c;
    
    do {
        printf("Menu:\n");
        printf("1. Read employee details\n");
        printf("2. Display employee with the same designation\n");
        printf("3. Update salary details and designation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) 
        {
            case 1:
                if (numE < MAX_EMPLOYEE) 
                {
                    getEmployeeInfo(emp,numE);
                    numE++;
                    printf("Employee details added successfully.\n");
                } 
                else 
                {
                    printf("Maximum number of employee reached.\n");
                }
                break;
            case 2:
                printf("Enter designation: ");
                scanf("%s", designation);
                searchByDesignation(emp, numE, designation);
                break;
            case 3:
                printf("Enter employee ID: ");
                scanf("%d", &i);

                for (j = 0; j < numE; j++) 
                {
                    if (emp[j].employeeID == i) 
                    {
                        updateEmployee(emp, j);
                        c++;
                    }
                }
                if (c==0)
                {
                    printf("Invalid employee ID.\n");
                }
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }   
        printf("\n");
    } while (choice != 4);
   return 0;
}
