#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

// we are going to built a calculator using c

void addition(float *add,int l){
    float buff=0;
    for(int i=0;i<l;i++){
        buff=add[i]+buff;
    }
    printf("\nThe sum of digits entered are : %f",buff);
}

void multiplication(int *multi,int m){
    int i=0;
    // if(m!=0){
    while(i<m){
        printf("Enter the number:");
        scanf("%d",multi[i]);
        i++;
    }
    int buffer=1;
    // int end=strlen(multi);
    for(int i=0;i<m;i++){
        buffer= buffer * (*(multi+i));
    }
}



int main()
{
    // for addition
    int choice=0,for1;
    // for subtraction
    float one=0,two=0,ans=0;
    // for multiplication
    int m;


    printf("\n1.ADDITION \n2.Subtraction \n3.multiplication \n4.division \n5.percentage \n6.log \n7.Exponential \n8.trignometric ");
    printf("\nEnter the choice of operation you would like to perform :");
    scanf("%d",&choice);
    // for addition operation;
    // float *add;
    switch(choice){

        case 1: {
            //addition
            printf("\nEnter the number of elements:");
            scanf("%d",&for1);
            float add[for1];
            for(int i=0;i<for1;i++){
                printf("\nEnter the number :");
                scanf("%f",&add[i]);
            }
            addition(add,for1);

            break;
        }

        case 2:{
            // subtraction
            // only for two elements and no special function for this operation
            
            printf("Enter the first number:");
            scanf("%f",&one);
            printf("Enter the second number:");
            scanf("%f",&two);
            ans=one-two;
            printf("the answer is %f ",ans);
            break;

        }

        case 3:{
            // for multiplication ,let us try dynamic memory allocation
            printf("Enter the number of elements:");
            scanf("%d",&m);
            int multi[m];
            multiplication(multi,m);
            break;
        }


    }
}

