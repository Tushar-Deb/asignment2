#include<stdio.h>
int main()
{
    int num;
    printf("Please enter year \n");
    scanf("%d",&num);
    if(num%4==0)
    printf(" The year is leap year");

    else
        printf("The year is not leap year");

    return 0;
}
