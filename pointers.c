#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = x;
    // what do x and y equal?
    printf("x = %d;    y = %d;\nThe address of x = %p, y = %p\n\n", x, y, &x, &y);
    x = 5;

    // what do x and y equal?
    printf("x = %d;    y = %d;\nThe address of x = %p, y = %p\n\n",x,y,&x,&y);

    int* p = &x;
    // what do x and p equal?
    printf("x = %d;    p = %d;\nThe address of x = %p, p is pointing to = %p\n\n",x, *p,&x,p);
    
    x = 10;
    // what do x and p equal?
    printf("x = %d;    p = %d;\nThe address of x = %p, p is pointing to = %p\n\n", x, *p, &x, p);

    x = 1;
    // what do x and p equal?
    printf("x = %d;    p = %d;\nThe address of x = %p, p is pointing to =  %p\n\n", x, *p, &x, p);

    *p = 2;
    // what do x and p equal?
    printf("x = %d;    p = %d;\nThe address of x = %p, p is pointing to = %p\n\n", x, *p, &x, p);

    return 0;
}