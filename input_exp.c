#include<stdio.h>

int main(){
int age;
char name[255];
printf("Enter your name : ");
scanf("%s",name);
printf("Enter your age : ");
scanf("%d",&age);

double gpa;
printf("Enter your gpa :");
scanf("%lf",&gpa);
printf("Your name is %s \n",name);
printf("Your age is %d \n",age);
printf("Your gpa is %f \n",gpa);

return 0;
}
