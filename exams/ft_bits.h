#ifndef FT_BITS_H
# define FT_BITS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

unsigned char reverse_bits(unsigned char octet);
unsigned char swap_bits(unsigned char octet);
void print_bits(unsigned char octet);

#endif
