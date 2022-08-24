// // // // // // // //  #include<stdio.h>
// // // // // // // // //  #include<>
// // // // // // // // int *large(int *a,int *b)
// // // // // // // // {
// // // // // // // //     if(*a>*b){
// // // // // // // //         return(*a);
// // // // // // // //     }
// // // // // // // //     else
// // // // // // // //     if(*b>*a){
// // // // // // // //         return(*b);
// // // // // // // //     }
// // // // // // // //     else{
// // // // // // // //         return 0;
// // // // // // // //     }

// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     int x,y;
// // // // // // // //     int *r;
// // // // // // // //     printf("enter first number:");
// // // // // // // //     scanf("%d",&x);
// // // // // // // //     printf("enter second number:");
// // // // // // // //     scanf("%d",&y);
// // // // // // // //     r=large(&x,&y);
// // // // // // // //     if(r==0){
// // // // // // // //         printf("Both of them are equal");
// // // // // // // //     }
// // // // // // // //     else{
// // // // // // // //     printf("The larger number is %d",r);
// // // // // // // //     }

    
// // // // // // // // }

// // // // // // // // // user defined function to find the occurance of a character in the string
// // // // // // // #include<stdio.h>
// // // // // // // #include<string.h>


// // // // // // // int count(char s[100],char chr,int l)
// // // // // // // {
// // // // // // //     int co2=0;
// // // // // // //     for(int i=0;i<l;i++)
// // // // // // //     {
// // // // // // //         if(s[i]==chr){
// // // // // // //             co2++;
// // // // // // //         }
        

// // // // // // //     }
// // // // // // //     return(co2);
// // // // // // // }

// // // // // // // int main()
// // // // // // // {
// // // // // // //     char s[100],ch;
// // // // // // //     int co;
// // // // // // //     printf("Enter the string:");
// // // // // // //     gets(s);
// // // // // // //     int L=strlen(s);
// // // // // // //     printf("enter the character:");
// // // // // // //     scanf("%c",&ch);
// // // // // // //     co=count(s,ch,L);
// // // // // // //     printf("The number of occurances of %c is %d ",ch,co);
// // // // // // // }

// // // // // // // illesturate command line argument with suitable example:
// // // // // // // The values/arguments passed to the c program in the command line at the time of its execution 
// // // // // // // are called as command line arguments

// // // // // // // #include<stdio.h>
// // // // // // // #include<stdlib.h>
// // // // // // // #include<string.h>

// // // // // // // int main(int argc,char *argv[])
// // // // // // // {
// // // // // // //     printf("The number of arguments passed is:%d\n",argc);
// // // // // // //     printf("The argument is %s\n\n",argv[1]);

// // // // // // // }
// // // // // // // q.9>
// // // // // // #include <stdio.h>
// // // // // // int main()
// // // // // // {
// // // // // //  char *str = "Hello";
// // // // // //  char *p = str;
// // // // // //  char a;
// // // // // //  char *x=&a;
// // // // // // //printf("\n %c \t %c", *(p+3), *p+3);
// // // // // // printf("\n%c\n\n\n",*x+3);
// // // // // // }

// // // // // // 17. Describe the use of ftell() function. State an example
// // // // // // long int ftell() function is used to get the current location/position  of a file pointer

// #include<stdio.h>
// int main()
// {
//     FILE*fp;
//     long int pos;
//     fp=fopen("myfile.txt","w");
//     // fprintf(fp,"this is a test");
//     pos=ftell(fp);
//     printf("The file pointer is at %ld bytes \n",pos);
//     fclose(fp);
//     return 0;
// }

// // // // #include<stdio.h>
// // // // // #define AREA(a, b) a * b
// // // // // int main()
// // // // // {
// // // // //  int x = 5, b = 3, a;
// // // // //  a = AREA(x+2, b+x);    //a=7,b=8,,,area 56
// // // // //  printf("%d",a);
// // // // // }

// // // #define Ar(a,b) a*b 
// // // int main()
// // // {
// // //     int x=5,b=3,a;
// // //     a=Ar(x+2,b+x);
// // //     printf("%d\n",a);
    
// // //}

// // // // // -> 16

// // // #include <stdio.h>
// // // #define SQUARE(x) x * x
// // // int main()
// // // {
// // //  int a = 5, b = 4, ans;
// // //  ans = SQUARE(a+b);
// // //  printf("%d", ans);
// // // }

// // #include<stdio.h>
// // #define MAX(x,y)  ((x>y)?x:y)

// // int main()
// // {
// //     int m,m1,a,b,c;
// //     printf("Enter");
// //     scanf("%d%d%d",&a,&b,&c);
// //     m =MAX(a,b);
// //     m1=MAX(m,c);
// //     printf("The max is %d",m1);

// // }


// // 44. Implement a user-defined function to compare two strings.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void compare(char s1[],char s2[]);
int main()
{
    // char st1[],st2[],cpr;
    int s;
    char s1[]="hello aaaa";
    char s2[]="hello zzzz";  //alpha numeric
    // printf("%d\n",strcmp(s1,s2));
    // compare(s1,s2);
    int x=strchr(s1,);
    printf("%d",x);
}

// void compare(char s1[],char s2[])
// {
//     char c=strcmp(s1,s2);
//     if(c==0){
//         printf("BOth are equal\n");
//     }
//     else if(c>0){
//         printf("S1 >s2\n");
//     }
//     else{
//         printf("s1<s2\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int A[]={10,20,30};
//     int *p;
//     p=&A[2];
//     printf("%d\n",*p++);
//     printf("%d\n",*p--);

// }


















