// find power of a number(unsuccessfull _ finds square always)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num=0,po=0,lp,res=1,x;
    printf("\nEnter the number:");
    scanf("%d",&num);
    printf("Enter the power :");
    scanf("%d",&po);
    if(po==0)
    {
        printf("\nIf zero is in the power of any number ,the output value will always 1\n\n");
    }
    else
    {
        // x=pow(num,po);
        for(int i=0;i<po;i++)
        {
            lp=res*num;
            res=lp;
        }
        //loop is printing the required value till a level but later the value printed is not real or true.
        printf("\n%d to the power %d is = %d \n\n",num,po,lp);    
    }
}
        