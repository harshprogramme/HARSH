#include<stdio.h>
int main()
{
int fact,i,num;
float add=1.0;

printf("enter the number");
scanf("%d",&num);

if(num==1)
{
    printf("1");
}
else{
    printf("(1/1)");

for(i=2,fact=1;i<=num;i++)
{
    fact=fact*i;
    add=add+(1.0/fact);
    printf("+(1/%d)",fact);
}
printf("=%f",add);
printf("\nthe factorial is::%d",fact);
}
}