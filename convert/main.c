#include "convert.h"

void ft_check_atoi(void) {

	char norm[] = "8948745";
	char neg[] = "-819848";
	char zero[] = "0";
	char vide[] = "";

	printf("============================================\n");
	printf("================ Ft_atoi ===================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%d|\n", ft_atoi(norm));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%d|\n\n", atoi(norm));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%d|\n", ft_atoi(neg));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%d|\n\n", atoi(neg));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%d|\n", ft_atoi(zero));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%d|\n\n", atoi(zero));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%d|\n", ft_atoi(vide));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%d|\n\n", atoi(vide));
}

int main(void) {

  ft_check_atoi();

  return 0;
}
