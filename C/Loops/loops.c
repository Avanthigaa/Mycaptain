#include<stdio.h>
int main()
{
    int n;
    printf("Enter the range : ");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<2*i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}