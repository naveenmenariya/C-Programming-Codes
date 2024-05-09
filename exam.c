#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main ()
{ 
    int stv = 1, edv = 40, y, z;
    int psl = edv - stv + 1;
    srand (time(NULL));
    for (int i = stv; i <= edv; i++)
    { 
        int x = rand() % 100+1;
        int y = x-30;
        if (y < 0)
        { 
            y = (-1)*y; 
        } 
        else 
        { 
            y = y;
        }

        int z = x-5;
        if (z < 0)
        { 
            z = (-1)*z; 
        } 
        else 
        { 
            z = z;
        }
    }
    int value = y+z;
    printf("The absolute value of the function is :%d",value);
}