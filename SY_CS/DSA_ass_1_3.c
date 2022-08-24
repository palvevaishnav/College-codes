/*
3) Read the data from file 'cities.txt' containing names of 100 cities and their STD codes.
Accept a name of the city from user and use linear search algorithm to check whether the 
name is present in the file and output the STD code, otherwise output “city not in the list”.

steps:
-> read file cities.txt....100 cities and std code.
-> input a city name 
-> use linear search to check if city name exist.
-> if yes output-- std code
-> other wise print not exist. 

*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *city;
    city=fopen("cities.txt","r");
    char *cityname;
    printf("Enter the name of city:");
    scanf("%[^\n]",cityname);
    // printf("%s",cityname);
    if(city == NULL){
        puts("Cannot open source file");
        exit(1);
    }



    return 0;
}