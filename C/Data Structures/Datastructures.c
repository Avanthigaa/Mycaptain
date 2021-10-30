#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int age;
    long int phone_number;
    double salary;
} Employee;
 
int main()
{
    int n=2;
    Employee employees[n];
     printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);
        printf("Age: ");
        scanf("%d",&employees[i].age);
        printf("Phone Number: ");
        scanf("%ld",&employees[i].phone_number);
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);
        char ch = getchar();
 
        printf("\n");
    }
 
    printf("-------------- All Employees Details ---------------\n\n");
    printf("Name\tAge\tPhone Number\tSalary\n");
    for(int i=0; i<n; i++){
        printf("%s \t",employees[i].name);
        printf("%d \t",employees[i].age);
        printf("%ld \t",employees[i].phone_number);
        printf("%.2lf \t",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}