#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{   
    int stv = 1, edv = 100, x, y, z;
    printf("The absolute value of the function is : ");
    for (int i = stv; i <= edv; i++)
    { 
        int x = rand() % 40+1;
        y = x-30;
        if (y < 0)
        { 
            y = (-1)*y; 
        } 
        else 
        { 
            y = y;
        }

        z = x-5;
        if (z < 0)
        { 
            z = (-1)*z; 
        } 
        else 
        { 
            z = z;
        }

         int value = y+z;
    printf("%d\n",value);
    }
}