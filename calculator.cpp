#include <cstdio>

int main()
{
    bool a = 1, b = 1, c = 1;
    bool r = ~a & ~b | ~a & b & ~c | ~(a | ~c);
    printf("%u", r);
    return 0;
}