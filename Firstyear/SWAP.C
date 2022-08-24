#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int*,int*);

int main()
{
    int x,y,*p1,*p2;
    p1=&x;
    p2=&y;

    input:
          printf("\n Enter the first number : ");
          scanf("%d",&x);
          printf("\n Enter the second number : ");
          scanf("%d",&y);
		  if(x==y)
          
           {
               ("\n The entered numbers are equal:\n");
               goto input ;
           }
          printf("\n The number before swap are : \n x=%d, y=%d",x,y);
          swap(p1,p2);
          printf
		  ("\n The number after swap are : \n x=%d, y=%d",x,y);
          
}
void swap(int *p1, int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
    
    
}
          
          
          
