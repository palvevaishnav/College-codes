#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void pattern(char name[]);
int main(){
    char *name;
    printf("Enter the word:");
    scanf("%[^\n]s",name);
    // printf("\n\n");
    pattern(name);
}

void pattern(char name[]){
    int end;
    end = strlen(name);
    for(int i=0;i<end;i++){
        if(name[i] == 'A' || name[i] == 'a'){
            printf("%c %c  %c\n",2,2,2);
            printf("%c    %c\n",2,2);
            printf("%c %c  %c\n",2,2,2);
            printf("%c    %c\n",2,2);
            printf("%c    %c\n",2,2);
            printf("\n");
        }
        if(name[i] == 'B' || name[i]=='b'){
            printf("%c %c %c\n",2,2,2);
            printf("%c    %c\n",2,2);
            printf("%c %c %c\n",2,2,2);
            printf("%c    %c\n",2,2);
            printf("%c %c %c",2,2,2);
            printf("\n");
        }
        if(name[i]=='c' || name[i]=='C'){
            printf("%c %c %c \n",2,2,2);
            printf("%c       \n",2);
            printf("%c       \n",2);
            printf("%c       \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='d' || name[i] == 'D'){
            printf("%c %c %c\n",2,2,2);
            printf("%c    %c\n",2,2);
            printf("%c    %c\n",2,2);
            printf("%c    %c\n",2,2);
            printf("%c %c %c\n",2,2,2);
        }
        if(name[i]=='E' || name[i]=='e'){
            printf("%c %c %c \n",2,2,2);
            printf("%c       \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("%c       \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='F' || name[i]=='f'){
            printf("%c %c %c \n",2,2,2);
            printf("%c       \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("%c       \n",2);
            printf("%c       \n",2);
            printf("\n");         
        }
        if(name[i]=='G' || name[i]=='g'){
            printf("%c %c %c \n",2,2,2);
            printf("%c       \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("%c   %c \n",2,2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='H' || name[i]=='h'){
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("\n");         
        }
        if(name[i]=='I' || name[i]=='i'){
            printf("%c %c %c \n",2,2,2);
            printf("  %c \n",2);
            printf("  %c    \n",2);
            printf("  %c    \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='J' || name[i]=='j'){
            printf("%c %c %c \n",2,2,2);
            printf("    %c \n",2);
            printf("    %c \n",2);
            printf("%c   %c \n",2,2);
            printf(" %c %c \n",2,2);
            printf("\n");         
        }
        if(name[i]=='K' || name[i]=='k'){
            printf("%c   %c \n",2,2);
            printf("%c %c    \n",2,2);
            printf("%c       \n",2);
            printf("%c %c    \n",2,2);
            printf("%c   %c \n",2,2);
            printf("\n");         
        }
        if(name[i]=='l' || name[i]=='L'){
            printf("%c       \n",2);
            printf("%c       \n",2);
            printf("%c       \n",2);
            printf("%c       \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='m' || name[i]=='M'){
            printf("%c   %c \n",2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("\n");         
        }
        if(name[i]=='N' || name[i]=='n'){
            printf("%c   %c \n",2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c   %c \n",2,2);
            printf("\n");         
        }
        if(name[i]=='O' || name[i]=='o'){
            printf("%c %c %c \n",2,2,2);
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='P' || name[i]=='p'){
            printf("%c %c %c \n",2,2,2);
            printf("%c   %c \n",2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c     \n",2);
            printf("%c     \n",2);
            printf("\n");         
        }
        if(name[i]=='Q' || name[i]=='q'){
            printf("%c %c %c \n",2,2,2);
            printf("%c   %c \n",2,2,2);
            printf("%c   %c \n",2,2,2);
            printf("%c %c %c \n",2,2,2);
            printf("     %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i] == 'R' || name[i] == 'r'){
            printf("%c %c  %c\n",2,2,2);
            printf("%c     %c\n",2,2);
            printf("%c %c  %c\n",2,2,2);
            printf("%c     %c\n",2,2);
            printf("%c     %c",2,2);
            printf("\n");
        }
        if(name[i]=='S' || name[i]==  's'){
            printf("%c %c %c \n",2,2,2);
            printf("%c       \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("    %c \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='T' || name[i]=='t'){
            printf("%c %c %c \n",2,2,2);
            printf("  %c   \n",2); 
            printf("  %c   \n",2);         
            printf("  %c   \n",2);         
            printf("  %c   \n",2);          
            printf("\n");         
        }
        if(name[i]=='U' || name[i]=='u'){
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='V' || name[i]=='v'){
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2);
            printf("%c   %c \n",2,2,2);
            printf("  %c   \n",2);
            printf("\n");         
        }   
        if(name[i]=='W' || name[i]=='w'){
            printf("%c   %c \n",2,2,2);
            printf("%c   %c \n",2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c %c %c \n",2,2,2);
            printf("%c   %c \n",2,2,2);
            printf("\n");         
        }
        if(name[i]=='X' || name[i]=='x'){
            printf("%c    %c \n",2,2);
            printf(" %c  %c \n",2,2);
            printf("  %c \n",2);
            printf(" %c  %c \n",2,2);
            printf("%c    %c \n",2,2);
            printf("\n");         
        }
        if(name[i]=='Y' || name[i]=='y'){
            printf("%c    %c \n",2,2);
            printf(" %c  %c \n",2,2);
            printf("  %c \n",2);
            printf("  %c   \n",2);
            printf("  %c     \n",2);
            printf("\n");         
        }
        if(name[i]=='Z' || name[i]=='z'){
            printf("%c %c %c \n",2,2,2);
            printf("   %c\n",2);
            printf("  %c  \n",2);
            printf(" %c  \n",2);
            printf("%c %c %c \n",2,2,2);
            printf("\n");         
        }
    }
}