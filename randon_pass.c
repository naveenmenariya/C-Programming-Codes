#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int password_length;
    printf("enter the password length");
    scanf("%d",&password_length);
    char password_data[]="abcdefghijklmnopqrstuvwxyz"
                         "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                         "`~!@#$%^&*()_-+=;'[]{}:,.<>?/";
    srand(time(NULL));
    printf("password : ");
    for(int i=0;i<password_length;i++)
       printf("%c",password_data[rand()%sizeof(password_data)-1]);
    return 0;   
}

