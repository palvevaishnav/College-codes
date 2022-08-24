// to store data of n students using structures and representing them using case 
// include header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int n=1,sw,i;
int r,e;
char c[20],st[10],pn[20],nm[20];


struct student  // structure to store students data
{
    char name[20];
    int r_no;
    // int p[10],r;
    // char clg[20],str[10];
};
// void serch(int n, struct student *s);

int main()
{
    printf("Entre the number of students: \n");  //number of students and store in n
    scanf("%d",&n);
    // struct student s[];     //allocating name and storage 
    struct student s[n]=(struct*)malloc(n*sizeof(student));
    // can we allocate memory using malloc and calloc functions.

    for( i=0;i<n;i++)    // values or student data
    {
        printf("Enter the name of student:\n");
        scanf("%s",&s[i].name);
        printf("Enter the room number of student:  \n");
        scanf("%d",&s[i].r_no);
        // printf("Enter the phone number of student: \n");
        // scanf("%d",&s[i].p);
        // printf("Enter the name of his/her college: \n");
        // scanf("%s",&s[i].clg);
        // printf("Enter his stream :\n");
        // scanf("%s",&s[i].str);

    }
    input:
    // printf("Enter the code of operation you want to perform :\n");   //asking for choise
    // printf("\n 1.Enter the room no and search for names \n 2.Enter college name and search for students details:\n 3.Enter the stream and search for students details:\n 4.Enter name and search for details: \n 5.Exit\n");
    // scanf("%d",&sw);

    
    // switch(sw)   // performing the choice using switch 
    // {
        


        // case 1:

     {   printf("\nEnter the room no:\n");
        scanf("%d",&r); }

            for(int i=0;i<n;i++)   //here is the issue ???????
            {
                if(r=s[i].r_no)
                {
                    printf("\nName of student:%s\n",s[i].name);
                }
                else
                    if(r==0){
                        exit(0);
                    }
                    else
                        {
                             printf("wrong number");
                            // printf("\nName of student:%s\n",s[i].name[20]);
                        }
                
            }
    goto input;
            

    

    //     case 2:
    //         printf("Enter the name of college:\n");
    //         scanf("%s",&c[20]);
    //         for(i=0;i<n;i++)
    //         {
    //             if(c[20]==s[i].clg[20])
    //             {
    //                 printf("the name of student is %S \n room number is %d  \n phone number is %d\n",s[i].name[20],s[i].r_no,s[i].p[10]);
    //             }
    //         }

    //     break;

    //     case 3:
    //         printf("enter the stream you want to search for:");
    //         scanf("%s",&st[10]);
    //         for(i=0;i<n;i++)
    //         {
    //             if(st[10]==s[i].str[10])
    //             {
    //             printf("name of students are :%s",s[i].str[10]); 
    //             }
    //         }


    //     break;

    //     case 4:
    //         printf("Enter the name of student:");
    //         scanf("%s",&nm[20]);
    //         for(i=0;i<n;i++)
    //         {
    //             if(nm[20]==s[i].name[20])
    //             {
    //             printf("the name of student is %S \n room number is %d  \n phone number is %d\n",s[i].name[20],s[i].r_no,s[i].p[10]);
    //             }
    //         }
    //     break;

    //     case 5:
    //          exit(0);

    // }
    //  printf("\n\n\n SUCCESSUFLLY RUNED");




}




// Vaishnav_20_May_2022
