/* Write a C program to convert specified days into years, 
weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3 */

#include <stdio.h>

int main()
{
    int ndays = 1329;
    int years, weeks, days;
    
    years = ndays / 365;
    weeks = (ndays % 365) / 7;
    days = (ndays % 365) % 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    return 0;
}