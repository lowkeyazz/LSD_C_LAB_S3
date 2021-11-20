#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#define B sizeof(int) * 8

void check_msb(int num);
void print_bits(unsigned char byte);
void print_nth_byte(int n, int m);

#endif