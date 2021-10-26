#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two values : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap : \n%d %d",a,b);
    

    return 0;
}
