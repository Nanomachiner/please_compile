#include <stdio.h>

int a;
int sum;

int main (void)
{
    int a = 0;
    int sum = 0;
    
    while (a < 100) //change this number to find sum of all odd numbers less than whatever you enter
    {
        if (a % 2 == 1) // modulo remiainder 1 for odd, 0 for even
        {
            sum = sum + a;
        }
        a = a + 1;
    }
    printf("%d\n", sum);
    return 0;
}