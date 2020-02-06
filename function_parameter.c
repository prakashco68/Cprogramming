#include<stdio.h>
#include<stdlib.h>

void func1(char name[], int age)
{
printf("Hello %s, you are %d old \n",name,age);
}

int main()
{
printf("Beginning of the function \n");

func1("Prakash", 24);

printf("End of the function \n ");
return 0;
}
