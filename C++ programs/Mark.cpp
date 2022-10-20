#include<stdio.h>

int main()
{
int sub1,sub2,sub3,sub4,sub5;
float average;
printf("Enter marks of 5 subjects:");
scanf("%d%d%d%d%d",&sub1, &sub2, &sub3 ,&sub4 ,&sub5);
avg=(sub1+sub2+sub3+sub4+sub5)/5;
printf("Percentage = %f",average);
if(average>=60)
{
   printf("\nFirst Division");
}
else if(average>=50)
{
   if(average <=59)
   {
      printf("\nSecond Division");
   }
}
else if(average >=40)
{
   if(average <=49)
   {
       printf("\nThird Division");
   }
}
else
{
    printf("\nFail");
}
}
