#include<stdio.h>
int main()
{
	free(marks);
//	int marks1=97 ,marks2=98 ,marks3=99 ;
	
//	int marks[3];
//	marks[3]={97,98,99};
//	scanf("%d",&marks[3])
//	printf("the array  stored is %d",marks[3]);

//int marks [3];
//printf("enter the marks=");

/*scanf("%d%d%d",&marks[0],&marks[1],&marks[2]);
printf("the marks= %d \n %d \n %d\n",marks[0],marks[1],marks[2]);

*/
/*
int age=22,*ptr=&age;
printf("%u\n",ptr);
ptr++;
printf("%u\n",ptr);
ptr--;
printf("%u\n",ptr);
#size of int changes by 4 whereas in case of character it changes by  1 only*/

}

#include<stdio.h>
int main()
{
/*	int age =22,ug =29,jkl=39;
	
	int *ptr=&age;
	int *pr=&ug;
	int *pt=&jkl;
	printf("difference = %u",ptr-pt);
diff is the distance betn locations

*/
int aadhar[5];
free(addhar);

//input
int*ptr=&aadhar[0];
for(int i=0;i<5;i++)
{
	printf("%d index : ",i);
	scanf("%d",&aadhar[i]);
}
// output
for(int i=0;i<5;i++)
{
printf("%d index =%d \n",i,aadhar[i]);
}
return 0;

	
}

// call by reference

#include<stdio.h>

void square(int n);
void _square(int *n);

int main()
{
	int number=4;
	square(number);
    printf("value of number=%d\n",number);
	_square(&number);
	printf("value of number=%d\n",number);
	return 0;
}

void square(int n)
{
	n=n*n;
	printf("value of n=%d\n",n);
    
}

void _square(int *n)
{
	(*n)=(*n)*(*n);
	printf("value of n=%d\n",*n);
	
}


// PROBLEM QUESTIONS 
// 40

#include<stdio.h>

void fn(int a,int b,int *sum,int *pro,float *avg);

int main()
{
	int a,b,sum,pro;
	float avg;
	printf("enter the value of a and b :");
	scanf("%d%d",&a,&b);
	
	fn(a,b,&sum,&pro,&avg);
	printf("the sum is =%d,product is %d, average is %f",sum,pro,avg);
	return 0;
}

 void fn(int a,int b,int *sum,int *pro,float *avg)
 {
 	*sum=a+b;
 	*pro=a*b;
 	*avg =(a/2+b/2);
 }

// 36
#include<stdio.h>
int main()
{
	int x,*ptr;
	ptr=&x;
	*ptr=0;
	
	printf("x=%d\n",x);
	printf("*ptr=%d\n",*ptr);//0
	
	*ptr +=5;
	printf("x=%d\n",x);
	printf("*ptr=%d\n",*ptr);//5
    
    (*ptr)++;
    printf("x=%d\n",x);
	printf("*ptr=%d\n",*ptr);//6
	return 0;
} 
// 40

#include<stdio.h>

void dowork(int a,int b,int *sum,int *pro,int *avg);

int main()
{
	int a,b,sum,pro,avg;
	printf("enter the value of a and b :");
	scanf("%d%d",&a,&b);
	
	dowork(a,b,&sum,&pro,&avg);
	printf("the sum is =%d,product is %d, average is %d",sum,pro,avg);
	return 0;
}

 void dowork(int a,int b,int *sum,int *pro,int *avg)
 {
 	*sum=a+b;
 	*pro=a*b;
 	*avg =(a+b)/2;
 }

 // print the value of 'i' from its pointer to pointer
#include<stdio.h>
int main()
{
	int i=5;
	int *ptr=&i;
	int **pptr=&ptr;
	printf("%d",**(pptr));
	return 0;
	
}


