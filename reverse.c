#include<stdio.h>
int main()
{
int num;
printf("enter  indegers");
scanf("%d",&num);
return rev;
}
int reverse(int num)
{
int rev;
rev=rev*10+num%10;
num=num/10;
printf("the reversed number is%d",rev);
}