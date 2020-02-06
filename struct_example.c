#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{

char name[20];
double gpa;


};

int main()
{

struct student student1;
strcpy(student1.name,"Prakash");
student1.gpa=7.51;
printf("Student1 name is %s \n",student1.name);
printf("%s gpa is %lf \n",student1.name,student1.gpa);
return 0;
}
