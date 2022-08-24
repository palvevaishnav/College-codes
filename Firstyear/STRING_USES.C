//  use of strings

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[]="VAISHNAV";
    char s2[]="VAISHNAV";

    // printf("%s",strcat(s1,s2));         // concatinate two string 
    // printf("%s",strcpy(s1,s2));         // copy s2 string into s1 
    
    /** Strcmp(s1,s2) returns 0 when the length of both strings are EQUAL 
        when the length of s1 is greater then s2 it returns a +ve value 
        and when the length of s1 is less than s2 it returns a -ve value**/
        // STILL NOT SURE ABOUT SOMETHING 

    if(strcmp(s1,s2)==0)     // COMPARING TWO STRINGS  ,RETURNS 0 IF BOTH ARE EQUAL 
    {
        printf("\nBOTH ARE EQUAL");
    }
    else
        if(strcmp(s1,s2)>0)
        {
           printf("\n s1 IS GREATER THAN s2");
        }
        else
        {
            printf("\ns1 IS LESS THAN s2");
        }
 
 
}

1. strlen(char *str) : returns the length of the string
2. strcpy(char *s1,char *s2) : Copies string s2 into string s1 and returns pointer to s1
3. strcat(char *s1,char *s2) : Appends contents of string s2 to string s1 and returns pointer 
to s1
4. strcmp(char *s1,char *s2): Compares the two strings s1 and s2 and returns a integer as:
    Negative integer : if s1 < s2
    Zero : if s1 = s2
    Positive integer : if s1 > s2 
5. strcmpi(char *s1,char *s2) / strcasecmp(char *s1,char *s2) : Compares the two strings 
without considering the case of the characters
6. strchr(char *str, char ch) – Returns the pointer to the first occurrence of the character ch
in str.
7. strstr(char *str1, char *str2) – Returns the pointer to the first occurrence of the character 
str2 in str1
8. strlwr(char *s) – Converts the string s into lowercase
9. strupr(char *s) - Converts the string s into uppercase
10. atoi(char *s) – Converts the string s into integer