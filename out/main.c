#include "out.h"

void		ft_check_write(void)
{
	printf("============================================\n");
	printf("================ Ft_write ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%d]\n", ft_write(1, "Hello World !", 13));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "Hello World !", 13));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%d]\n", ft_write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%d]\n", ft_write(1, "", 1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "", 1));

}

void		ft_check_read(void)
{
	ssize_t		ret_read;
	int			fd;	
	char		buf[5000];

	fd = open("ft_write.s", O_RDONLY);
	printf("============================================\n");
	printf("================= Ft_read ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = ft_read(0, buf, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = read(0, buf, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = 0;
	ret_read = ft_read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
	close(fd);
	fd = open("ft_write.s", O_RDONLY);
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = 0;
	ret_read = read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
	close(fd);
}

int main(void) {

  ft_check_write();
  ft_check_read();

  return 0;
}
