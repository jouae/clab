#include <stdio.h>

int main()
{
    int x = 523;
    const size_t BIT_SIZE = 8 * sizeof(x);
    char bits[BIT_SIZE + 1];
    unsigned int mask;

    printf("INPUT: %d\n", x);
    printf("BIT SIZE: %ld\n", BIT_SIZE);

    for(unsigned int i = 0; i < BIT_SIZE; i++)
    {
        mask = 1U << (BIT_SIZE - 1 - i);
        bits[i] = (mask & x) ? '1' : '0';
    }

    /* null terminator */
    bits[BIT_SIZE] = '\0';

    printf("%s\n", bits);

    return 0;
}