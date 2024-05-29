#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int ex1_malloc();
int ex2_calloc();
int ex3_realloc();
int exRealloc();
int ex5_matriz();
int ex6_registro();

int main(void)
{
    setlocale(LC_ALL, "portuguese");
int *ptr[3];
int *ptr2;
int array[3]={12,3,55};
int a=200;
ptr2=&a;
ptr[0]=&array[0];

printf("array[0]= %d", array[0]);
printf("\narray[1]= %d", array[1]);
printf("\n ptr[2]= %d",ptr[2]);
//printf("\n %d", ptr2);
printf("\n &ptr[2]= %d",&ptr[2]);

printf("\n ptr2= %d",ptr2);
printf("\n *ptr2= %d",*ptr2);
*ptr2=123;
printf("\n a= %d",a);
printf("\n ptr[0]= %d",*ptr[0]);
*ptr[0]=22;
printf("\n array[0]= %d",array[0]);

    printf("\nHello world!\n");

}

