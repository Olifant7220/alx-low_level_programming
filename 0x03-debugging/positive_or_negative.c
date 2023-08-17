#include "main.h"
/**
 * positive_or_negative -  determine if the number is positive
 * or negetive or zero.
 * 0:is the number to be checked
 * @i: on success
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "negative");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
