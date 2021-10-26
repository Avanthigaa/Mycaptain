#include<stdio.h>

int fun(int, int);  

int main()
{
    int a, b, ans;
    printf("\nInput first number : ");
    scanf("%d", &a);
     printf("Input second number : ");
    scanf("%d", &b);
    ans = fun(a,b);   
    printf("\n\n LCM of %d and %d is = %d", a, b, ans);
    return 0;
}

int fun(int a, int b)  
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        fun(a,b);
        return temp;
    }
}