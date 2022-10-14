#include<stdio.h>
int main()
{
int m1,b,c,d,e,sum;
float per;

printf("Enter your maths marks::\t");
scanf("%d",&m1);

printf("Enter your science marks::\t");
scanf("%d",&b);

printf("Enter your so science marks::\t");
scanf("%d",&c);

printf("Enter your hindi marks::\t");
scanf("%d",&d);

printf("Enter your english marks::\t");
scanf("%d",&e);

sum=m1+b+c+d+e;
per=sum/5;

printf("Your total marks is::%d\n",sum);
printf("\nYour percentage is::%.2f\n",per);

if (per<=40)
{
    printf("\nStatus::Fail.\n Grade::F");
}
else if(per>=41 && per<=50)
{
    printf("status::Pass.\n Grade::C");
}
else if(per>=51 && per<=60)
{
    printf("Status::Pass.\n Grade::B");
}
else if(per>=61 && per<=70)
{
    printf("Status::Pass.\n Grade::B+");
}
else if(per>=71 && per<=80)
{
    printf("Status::Pass.\n Grade::A");
}
else if(per>=81 && per<=90)
{
    printf("Status::Pass.\n Grade::A+");
}
else
{
    printf("Status::Pass.\nGrade::A++");
}

}
