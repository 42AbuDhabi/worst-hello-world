#include <unistd.h>
#include <stdlib.h>

struct		s_hello_world
{
	char	h[0110];
	char	e[0145];
	char	first_l[0154];
	char	second_l[0154];
	char	first_o[0157];
	char	space[040];
	char	w[0127];
	char	second_o[0157];
	char	r[0162];
	char	third_l[0154];
	char	d[0144];
	char	nl[012];
};

int			main(void)
{
	size_t					i;
	struct s_hello_world	hw;
	char					awesome_array[12];

	awesome_array[0] = (char)(((size_t)&hw.e) - ((size_t)&hw.h));
	awesome_array[1] = (char)(((size_t)&hw.first_l) - ((size_t)&hw.e));
	awesome_array[2] = (char)(((size_t)&hw.second_l) - ((size_t)&hw.first_l));
	awesome_array[3] = (char)(((size_t)&hw.first_o) - ((size_t)&hw.second_l));
	awesome_array[4] = (char)(((size_t)&hw.space) - ((size_t)&hw.first_o));
	awesome_array[5] = (char)(((size_t)&hw.w) - ((size_t)&hw.space));
	awesome_array[6] = (char)(((size_t)&hw.second_o) - ((size_t)&hw.w));
	awesome_array[7] = (char)(((size_t)&hw.r) - ((size_t)&hw.second_o));
	awesome_array[8] = (char)(((size_t)&hw.third_l) - ((size_t)&hw.r));
	awesome_array[9] = (char)(((size_t)&hw.d) - ((size_t)&hw.third_l));
	awesome_array[10] = (char)(((size_t)&hw.nl) - ((size_t)&hw.d));
	awesome_array[11] = (char)(sizeof(hw) - (sizeof(hw) - sizeof(hw.nl)));
	i = 0;
	while (i < sizeof(awesome_array))
	{
		write(STDOUT_FILENO, &awesome_array[i], sizeof(char));
		++i;
	}
	return (EXIT_SUCCESS);
}
