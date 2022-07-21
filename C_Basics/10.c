/* Write a C program that accepts two integers from the user 
and calculate the product of the two integers. 
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375 */

#include <stdio.h>

int main()
{
    int first, second;
    int product;

    printf("Input the first input: ");
    scanf("%d", &first);
    printf("Inout the second integer: ");
    scanf("%d", &second);

    product = first * second;

    printf("Sum of the above two integers = %d\n", product);
    return 0;
}