/* sort n strings using bubble sort technique . accept the strings from the user.
steps:->    
1>accept a number from user
2>create a character pointer to pointer which will store the strings 
3> pass the pointer  to pointer to a bubble sort
4> run a for loop to access the pointer then use while to work according to the condition 

*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define max 50

int main(){
    // int n=3;
    // printf("\nEnter the number of strings you want to store:");
    // scanf("%d",&n);
    char strings[][max]={"vaishnav","ashok","subodh","piyush"};
    int n = sizeof(strings)/sizeof(strings[0]);
    for(int i=0;i<n;i++){
        printf("\n %s",strings[i]);
    }
}