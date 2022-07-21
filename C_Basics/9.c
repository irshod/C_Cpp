/* Write a C program that accepts two integers from the user
and calculate the sum of the two integers.
Test Data:
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63 */

#include <stdio.h>

int main()
{
    int first, second;
    int sum;

    printf("Input the first input: ");
    scanf("%d", &first);
    printf("Inout the second integer: ");
    scanf("%d", &second);

    sum = first + second;

    printf("Sum of the above two integers = %d\n", sum);
    return 0;
}