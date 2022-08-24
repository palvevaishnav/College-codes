// write a program to find facctorial of a given number
// program is okay but only for small numbers.
//  what about larger number  ?


#include<stdio.h>
int f=1,t=1;
int n;
// long long f=1,n;

int main()
{
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i=1;i<n+1;i++)
    {
        t=i*f;
        f=t;
    }

    printf("The factorial of the given number is %i",f);
}

// vaishnav 05/06/2022 3:38  