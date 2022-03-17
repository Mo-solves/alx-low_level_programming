#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
number = 48;
while (number < 58)
{
putchar(number);
if (number < 57)
{
putchar(',');
putchar(' ');
}
number++;
}
putchar('\n');
return (0);
}
