#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int func1(int num, int pownum)
{
int power=pow(num,pownum);
return power;
}

int main()
{
int num=2;
int pownum=3;
printf("%d power of %d is %d \n",num,pownum,func1(num,pownum));
}
