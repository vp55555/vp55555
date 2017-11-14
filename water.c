#include <stdio.h>
#include <cs50.h>
int main(void)
{
   printf("Minutes: ");
   int a = get_int();
   printf("Bottles: %i\n", a*12);
}