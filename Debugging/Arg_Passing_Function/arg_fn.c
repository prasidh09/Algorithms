#include <stdio.h>

int get()
{
    static i = 1;
    return i++;
}

int main(int argc, char *argv[])
{
    printf("%d %d %d\n", get(), get(), get());
    return 0;
}
