#include <stdio.h>
struct structure
    {
        int rollno;
        char name[50];
        float marks;
    };
int main()
{
    struct structure s;
    s.rollno = 101;
    s.name[0] = 'A';
    s.name[1] = 'B';
    s.marks=30;

    printf("%d",s.rollno);
    return 0;

    
}