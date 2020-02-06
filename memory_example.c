#include<stdio.h>
#include<stdlib.h>

int main(){
int num = 2;
printf("address of num is %p \n",&num);
printf("value of num is %d \n",*(&num));
return 0;
}
