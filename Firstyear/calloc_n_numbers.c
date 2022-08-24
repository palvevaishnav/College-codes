// ALLOCATE MEMORY FOR 500 INTEGERS USING CALLOC ,
// STORE FIRST 500 NATURAL NUMBERS INNTO THE ALLOCATED SPACE.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *A;
    A=(int*)calloc(500,sizeof(int));   // ptr=(data_type*)calloc(n,sizeof(data_type));
    for(int i=0;i<500;i++)
    {
        A[i]=i+1;
    }
    for(int i=0;i<500;i++)
    {
        printf("%d\t",A[i]);
    }
    
}

// // allocating memory to first n natural numbers and printing them
// int main()
// {
//     int n,*A;
//     printf("\nHow many first n natural numbers:");
//     scanf("%d",&n);
//     A=(int*)calloc(n,sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//         A[i]=i+1;   
//     }
//     printf("The numbers are::\n");
//     for(int i=0;i<n;i++)
//     {
        
//         printf("%d\t",A[i]);
//     }
    
// }
