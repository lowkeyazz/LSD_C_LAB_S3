#include "bittts.h"

int main()
{
    int num;
    int bit;
    printf("Enter a number ");
    scanf("%d\n", &num);
    scanf("%d", &bit);
    check_msb(num);
    //print_bits(num);
    printf("\n");
    print_nth_byte(bit, num);
    return 0;
}
