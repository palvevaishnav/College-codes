//  add multiple numbers
// accept numbers in an array and add them
#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int a,b,c=0,n,i,s;
    printf("How many numbers you want to add:\n");
    scanf("%d",&n);
    int A[n];           //creating the array only of required size
    printf("\nEnter the numbers \n");
    for(i=0;i<n;i++)     //accepting n numbers
    {
        printf("Enter the %dth number:\n",i+1);
        scanf("%d",&A[i]);
        // printf("The number entered is :%d \n",A[i]);
    }

    for(i=0;i<n;i++)   //adding n numbers
    {
        // starting with c=0,
        //add first number +zero
        s=A[i]+c; 
        // store the value of sum in s also copy the vaue in c for the i+1 loop
        c=s;
        // copy the value in c for the i+1 loop
        /** in next loop the A[i]th number and the previously stored value of c
         will be added and the new value of s will again be stored in c **/
        

        // in the end s  as well as c will contain the sum of all numbers


    }

    printf("The sum is %d",c);
    // or we can also print s
    printf("The sum is %d",s);

     
    
}