#include<stdio.h>
#include <string.h>
union Data
{
    int i;
    float f;
    char str[20];
};
int main()
{
    union Data data;
    data.i=10;
    printf("data.i: %d\n",data.i);
    data.f = 3.14;
    printf("data.f: %.2f\n", data.f);
    strcpy(data.str,"Hello World!");
    printf("data.str: %s\n",data.str);
    printf("Memory size occupied by data: %lu bytes\n",sizeof(data));
    return 0;
}
