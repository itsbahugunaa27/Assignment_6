#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a numbers\n",n);
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits is %d ",count);
    return 0;
}
