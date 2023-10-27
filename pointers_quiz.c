#include <stdio.h>

int main(void)
{
    int score = 0;
    int answer;
    int x = 0;
    int y = x;
    // what do x and y equal?
    printf("int x = 0;\nint y = x;\nQ: What is the value of y?\n");
    scanf("%d", &answer);
    if (answer == y)
    {
        printf("correct ++\n\n");
        score++;
    }
    else 
    {
        printf("incorrect :( y = %d\n\n", y);
    }
    // printf("x = %d;    y = %d;\nThe address of x = %p, y = %p\n\n", x, y, &x, &y);

    x = 5;
    // what do x and y equal?
    // printf("x = %d;    y = %d;\nThe address of x = %p, y = %p\n\n",x,y,&x,&y);
    printf("int x = 0;\nint y = x;\nx = 5\nQ: What is the value of y?\n");
    scanf("%d",&answer);
    if (answer == y)
    {
        printf("correct ++\n\n");
        score++;
    }
    else 
    {
        printf("incorrect :( y = %d\n\n", y);
    }

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