#include<stdio.h>
#include<stdlib.h>


int addition(int num1,int num2)
{
return num1+num2;
}


int substraction(int num1,int num2)
{
return num1-num2;
}

int multiplication(int num1,int num2)
{
return num1*num2;
}

int division(int num1,int num2)
{
return num1/num2;
}

int main()
{
int num1,num2;
char c;
printf("\n\t\t Calculator \n\n");
printf("Please enter Operation which you want to perform \n\n");
printf("-For Addition, Please enter + \n");
printf("-For Substraction, Please enter - \n");
printf("-For Multiplication, Please enter * \n");
printf("-For Division, Please enter / \n"); 
scanf("%s",&c);
printf("Enter number 1 \n");
scanf("%d",&num1);
printf("Enter number 2 \n");
scanf("%d",&num2);
if(c == '+')
{

printf("Addition : %d \n\n",addition(num1,num2));
}
else if(c == '-')
{
printf("Substraction : %d \n\n",substraction(num1,num2));
}
else if(c == '*')
{
printf("Multiplication : %d \n\n",multiplication(num1,num2));
}
else if(c == '/')
{
printf("Division : %d \n\n",division(num1,num2));
}
return 0;
}
