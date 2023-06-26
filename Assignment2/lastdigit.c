#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int q=n/10;
    printf("number without last digit is %d",q);
    return 0;
}