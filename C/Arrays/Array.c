#include<stdio.h>
int main()
{
    int p[3][3],sum=0;
        printf("\nEnter the elements : \n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          printf("Element - [%d][%d] : ",i,j);
          scanf("%d", *(p+i)+j);
        }
    }
    printf("\nThe matrix is : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
          printf("%d ",*(*(p+i)+j));
        printf("\n");
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
               sum+=*(*(p+i)+j);
        }
    }
    printf("\nSum of diagonal elements : %d",sum);
    return 0;
}