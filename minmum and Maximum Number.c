#include<stdio.h>
int main()
{
   int minno,maxno,num1,num2,num3;
   printf("enter  three numbers:");
   scanf("%d %d %d",&num1,&num2,&num3);
   minno=num1;
   maxno=num1;
   if(minno>num2)
      minno=num2;
   else if(maxno<num2)
      maxno=num2;
   if(minno>num3)
      minno=num3;
   else if(maxno<num3)
      maxno=num3;

   printf("Largest number  is:%d\n",maxno);
   printf("Smallest number is:%d",minno);
   return 0;
}
