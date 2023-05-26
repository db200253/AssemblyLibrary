#include "math.h"
/*
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
}*/

void ft_check_min(void) {

  int norm = 4.0;
  int neg = -2.0;
  int zero = 0.0;

  printf("============================================\n");
	printf("================ Ft_min ===================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_min(norm, neg));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", fmin(norm, neg));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_min(3, neg));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", fmin(3, neg));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_min(norm, zero));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", fmin(norm, zero));
}

void ft_check_max(void) {

  int norm = 4.0;
  int neg = -2.0;
  int zero = 0.0;

  printf("============================================\n");
	printf("================ Ft_max ===================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_max(neg, norm));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", fmax(neg, norm));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_max(3, neg));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", fmax(3, neg));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%f|\n", ft_max(zero, norm));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%f|\n\n", fmax(zero, norm));
}

int main(void) {

  //ft_check_pow();
  ft_check_min();
  ft_check_max();
  
  return 0;
}
