#include<stdio.h>
int main()
{
    int n,y,r;
    printf("Enter trhe number\n");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        y=(y*10)+r;
        n=n/10;
    }
    printf("Reverse of a number is %d ",y);
    return 0;
}
