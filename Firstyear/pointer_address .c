#include<stdio.h>

int main ()
{
	int age =22;
	int *ptr=&age;
	//address 
	printf("%p \n",&age);
	
	printf("%p\n",&age);
	printf("%u\n",&age);
	printf("%u\n",&ptr);
	printf("%u\n",ptr);
	
	// values
	printf("%d\n",age);
	printf("%d\n",*ptr);
	printf("%d\n",*(&age));
	return 0;
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

