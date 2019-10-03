#include<stdio.h>
void main()
{
    char name[20];
    int age;
    int phone_no;
    printf("enter your name :\n");
    scanf("%s",&name);
    printf("enter your age :\n");
    scanf("%d",&age);
    printf("enter your phone no:\n");
    scanf("%d",&phone_no);
    printf("you entered \n name:%s\nage:%d\nphone no:%d\n",name,age,phone_no);
}