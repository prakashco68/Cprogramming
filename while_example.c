#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

int num,guess = 5;
do{
printf("Guess the number:");
scanf("%d",&num);
}
while(num!=guess);

printf("Guessed the correct number \n");

}
