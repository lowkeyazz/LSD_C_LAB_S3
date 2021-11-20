#include "bittts.h"

void check_msb(int num)
{

    int msb = 1 << (B - 1);
    if (num & msb)
        printf("msb is set");
    else
        printf("msb is not set");
    return;
}
