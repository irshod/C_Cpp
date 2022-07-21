/* Write a C program to get the C version you are using.

Expected Output:

We are using C18! */

#include <stdio.h>

int main()
{
    printf("%ld\n", __STDC_VERSION__);
    return 0;
}