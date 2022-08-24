#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,r,c,*A,t,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    n=r*c;
    A=(int*)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        
            printf("Enter the %d element:",i+1);
            scanf("%d",(A+i));
        

    }

    for(i=0;i<n;i++)
    {
        
            printf("The entered elements are:%d \t",*(A+i));
        
        
    }
}


// A1Q3
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(int *a,int *b);
int main()
{
    int A,B,t,n;
    int A,B;
    printf("Enter the elements you want to swap\n");
    printf("Enter the value of A:");
    scanf("%d",&A);
    printf("Enter the value of B: ");
    scanf("%d",&B);
   // printf("Before swap")
    //printf("A=%d \n B=%d",A,B);
    swap(&A,&B);
    printf("After swap");
    printf("A=%d \n B=%d",A,B);
    return 0;

}

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


// A2Q1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindrome(char[]);
int main()
{
    int ans,n,i;
    /***
    char P[20];
    input:
    printf("enter the string :");
    scanf("%s",P);
    if(strlen(P)>20)
    {
        printf("enter a smaller string:");
        goto input;
    }
    ***/
    
    printf("\nEnter the size of string:");
    scanf("%d",&n);
    char P[n];
    printf("\nEnter the string:");
    scanf("%s",P);
    ans=palindrome(P);
    
    if(ans==1)
    {
        printf("\nThe given string is a palindrome");
        
    }
    else
    printf("\n The given string is not a palindrome");
}


int palindrome(char p[])
{
    int i,n=strlen(p),sol=0;   
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]!=p[(n-1)-i])
        sol +=1;
        
    }
    if(sol==0)
    return 1;
    else
    return 0;
}




// A2Q2
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void alter(char*);

int main()
{
    char str[30];
    printf("Enter the sentence:");
    scanf("%s",str);
    
    alter(str);
    printf("\n the altered string is:");
    return 0;
}

void alter(char *st)
{
    int i;
    for(i=0;i<strlen(st);i++)

    {
        
        if(st[i]==' ')
        {
            st[i]='*';
        }
        if(isupper(st[i]))
        {
            st[i]=tolower(st[i]);
        }
        if(islower(st[i]))
        {
            st[i]=toupper(st[i]);
        }
        if(isdigit(st[i]))
        {
            st[i]='?';
        }

    }

}

// A2Q3
#include<stdio.h>
#include<string.h>

int main()
    char *str;
{
    printf("Enter the string:");
    gets(str);

    for(i=0;i<strlen(str);i++)
    {
        printf("success");
    }


}

// find power of a number 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,p,u=1;
    printf("\nEnter the number:");
    scanf("%d",&n);
    printf("Enter the power :");
    scanf("%d",&p);

    for(int i=0;i<p;i++);
    {
        n*=n;
        
        
    }
    printf("the answer is:%d",n);
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,*p,i,*p2,t=0;
    printf("enter the no of elements you want to enter in the array:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter %d element \n ",i);
        scanf("%d",p+i);
    }
    printf("the numbers inputed are:");
    for(i=0;i<n;i++)
    {
        printf("\n %d \t",*(p+i));
    }
     
    p2=(int*)malloc(sizeof(int));
    for(i=0;i<n;i++)
    {
        if(*(p+i)!=0)
        {
            *(p2+t)=*(p+i);
            t++;
        }
    }
    
    printf("\nThe non zero elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("\n %d \t  \n \n",*(p2+i));
        
    }
}

/* Accept n integer in array A .Pass this array and two counter variables to a function which will set the 
  first counter to the total number of even values in the array and the other to the number of odd values.
   Display these counts in main.(hint : pass the addreses of the counter to the function )  */



#include<stdio.h>

void Count(int A[], int n, int *even, int *odd);

int main()
{
    int odd = 0, even = 0, n;
    printf("\nEnter the number of elements you want in array : ");
    scanf("%d", &n);
    
    printf("\nEnter %d elements :",n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        
	    scanf("%d", &A[i]);
    }
    Count(A, n, &even, &odd);
    printf("\nEven:- %d \n Odd:- %d", even, odd);
    return 0;
}

void Count(int A[], int n, int *even, int *odd)
{
    for (int i = 0; i < n; i++)
    {

        if (A[i] % 2 == 0)
        {
            *even +=1;
        }
        else
        {
            *odd += 1;
            
        }
    }
}

//Falcon

 #include<stdio.h>

int count(int a[], int );
int main()
  {
    int a[50],i,n,sum;
    printf("Enter size of the array : ");
    scanf("%d", &n);
   

    for(i=0; i<n; i++)
     {
     	printf("\n Enter element no.%d in array : ",i+1);

       scanf("%d",&a[i]);
     }
    count(a,n);
  }

int count(int a[],int n )
  {
    int i,even=0,odd=0;
    for(i=0; i<n; i++)
      {
	    if(a[i]%2==0)
		  even++;
		
		else                             
		  odd++;
      }       
    printf("\n even numbers in array: %d",even);
    printf("\n odd numbers in array: %d",odd);
      }
