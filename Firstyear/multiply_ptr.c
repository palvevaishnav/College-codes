// multiplication of two numbers using pointers
#include<stdio.h>
#include<stdlib.h>

int mul(int *x,int*y,int *m)
{
   // int
    *m=(*x) * (*y);
   // return 0;
}
int main()
{
    int *a,*b,c,d,*e,*m;
    printf("Enter the 1st number:");
    scanf("%d",&c);
    printf("Enter the 2nd number:");
    scanf("%d",&d);
    //a=&c;
    //b=&d;
    mul(&c,&d,m);
    //e=(*a)*(*b);
    printf("The multiplication of the %d and %d is %d \n",c,d,*m);
    //printf("%u %d",*m,*a);

}

