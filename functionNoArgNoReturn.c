#include <stdio.h>
void add();

int main()
{
    add();

    return 0;
}

void add()
{
    int a, b, add;
    a = 100;
    b = 100;
    add = a + b;
    printf("the result is: %d", add);
}