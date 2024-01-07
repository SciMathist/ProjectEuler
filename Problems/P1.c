/*
PROJECT EULER
PROBLEM - 1
MULTIPLES OF 3 0R 5
*/

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    do
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
        i++;
    } while (i < 1000);

    printf("Sum of the multiples = %d", sum);
    return 0;
}