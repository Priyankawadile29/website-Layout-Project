#include<stdio.h>

int main(){
int num;

printf("enter the value of number whose multiplication table is to be printed\n");
scanf("%d", &num);
for(int i = 0; i<10; i++)
{
printf("%d X %d =  %d\n", num, i , i*num);

}

    //take the number as an input from user



    return 0;
}