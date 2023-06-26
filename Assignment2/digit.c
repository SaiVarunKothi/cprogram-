#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf(" %d",&n);

    int digit=n%10;
    printf("the unit is %d",digit);
    return 0;
}