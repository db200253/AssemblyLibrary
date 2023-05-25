#include "math.h"

void ft_check_pow(void) {

  int norm = 4;
  int neg = -2;
  int zero = 0;

  printf("============================================\n");
	printf("================ Ft_pow ===================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_pow(norm, 4));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", pow(norm, 4));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_pow(neg, 3));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", pow(neg, 3));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_pow(zero, 10));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", pow(zero, 10));
}

int main(void) {

  ft_check_pow();
  
  return 0;
}
