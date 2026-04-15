#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what's x?");
    int y = get_int("what's y?");
    int z = get_int("what's z?");

    if (x > y > z)
    {
        printf("x is the greatest integer\n");
    }
    else if (x<y> z)
    {
        printf("y is the greatest  integer\n");
    }
    else if (x < y < z)
    {
        printf("z is the greatest integer\n");
    }
    else
    {
        printf("all integers are equal\n");
    }
}
