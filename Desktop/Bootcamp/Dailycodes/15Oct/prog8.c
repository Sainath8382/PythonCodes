//Array of strings

#include<stdio.h>
void main(){
char str1[3][10]={"Amar","Samir","Dev"};

char str2[][10]={
                {'A','m','a','r'},
                {'S','a','m','i','r'},
                {'D','e','v'}
                };

                printf("%p\n",&(str1[1]));
                printf("%p\n",&(str2[1][1]));
}
