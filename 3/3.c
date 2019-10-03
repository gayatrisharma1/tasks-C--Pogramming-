#include<stdio.h>

void main()
{
float s1,s2,s3,sum;
float avg;
printf("Marks obtained in ENGLISH : ");
scanf("%f",&s1);
printf("Marks obtained in MATHS : ");
scanf("%f",&s2);
printf("Marks obtained in SCIENCE : ");
scanf("%f",&s3);
sum = s1 + s2 + s3;
printf("total marks obtained :%f ",sum);
avg = sum/3;
printf("Average = %0.2f\n",avg);

}