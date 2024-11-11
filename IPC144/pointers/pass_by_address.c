/* Internal swap
 *  internal_swap.c
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void internal_swap(int* x, int* y)
{
    int c;

    // user gave will be printed here
    printf("a is %d, b is %d\n", *x, *y);
    printf("Address of x = a : %x\n", &x);
    printf("Address of y = b: %x\n", &y);

    c = *x;  //c = a
    *x = *y; // x = b
    *y = c; // y = a

    printf("new values in function is a is %d, b is %d\n", *x, *y);
}

int main(void)
{
    int a, b;

    printf("a is ");

    //user give a
    scanf("%d", &a);
    printf("ADDRESS OF A: %x\n", &a);

    printf("b is ");

    // user gives b

    scanf("%d", &b);
    printf("Address of b: %x\n", &b);

    // pass by address 
    internal_swap(&a, &b);

    printf("After internal_swap:\n"
        "a is %d\n"
        "b is %d\n", a, b);

    return 0;
}
