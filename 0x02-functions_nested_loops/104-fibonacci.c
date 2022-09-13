#include <stdio.h>
#include <stdlib.h>
/**
 *  * print_to_98 - Prints all natural numbers from input to 98,
 *   *               in order separated by a comma followed by a space.
 *    * @n: The number to begin counting at.
 *     */

void printFibonacciNumbers(int n)
{
    int f1 = 1, f2 = 2, i;

    if (n < 1)
        return;
    printf("%d, ", f1);
    for (i = 1; i < n; i++) {
        printf("%d, ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}


int main()
{
    printFibonacciNumbers(98);
    return 0;
}
