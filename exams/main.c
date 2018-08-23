#include "ft_bits.h"

int main(int ac, char **av)
{

  if (ac == 2)
    {
      printf("octet : \n");
      print_bits((unsigned char)atoi(av[1]));
      write(1, "\n", 1);
      printf("reverse : \n");
      print_bits(reverse_bits((unsigned char)atoi(av[1])));
      write(1, "\n", 1);
      printf("swap : \n");
      print_bits(swap_bits((unsigned char)atoi(av[1])));
    }
  return (0);
}
