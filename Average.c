#include<Stdio.h>
int main()
{
    int marks;
    printf("please input marks\n");
    scanf("%d", &marks);
    if (marks>=80 && marks<=100)
    printf("A+");

    else
    if (marks>=75 && marks<=79)
    printf("A");

    else
    if (marks>=70 && marks<=74)
    printf("A-");

    else
    if (marks>=65 && marks<=69)
    printf("B+");

    else
    if (marks>=60 && marks<=64)
    printf("B");

    else
    if (marks>=55 && marks<=59)
    printf("B-");

    else
    if (marks>=50 && marks<=54)
    printf("C+");

    else
    if (marks>=45 && marks<=49)
    printf("C");

    else
    if (marks>=40 && marks<=44)
    printf("C-");

    else
    if (marks>=0 && marks<=39)
    printf("F");

    else
    printf("Wrong input");

    return 0;
}
