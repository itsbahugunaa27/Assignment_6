#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n)
    {
        sum=sum+2*n;
        n--;
    }
    printf("Sum of Even naturals numbers is %d",sum);
    return 0;
}

