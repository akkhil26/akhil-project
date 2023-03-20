// functions
// FACTORIAL CODE
#include<stdio.h>
int factorial(int);
int main()
{
    int n, result ;
    printf("Enter a number\n");
    scanf("%d",&n);

    result=factorial(n);

    printf("the factorial of %d is %d ",n,result);
}
int factorial(int  a)
{
    int i,prod;
    prod=1;
    for(i=1 ; i<=a;i++)
        prod=prod*i;
    return prod;
}
//
