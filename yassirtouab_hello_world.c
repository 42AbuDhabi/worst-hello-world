#include <stdio.h>

char x[8] = {0};

void    print_H()
{
    	while(x[0] != 72 )
		x[0] = x[0] + 1;

	printf("%c",x[0]);
}

void    print_e()
{
    	while(x[1] != 101)
	    x[1] = x[1] + 1;
			
	printf("%c",x[1]);
}

void    print_l()
{
	while(x[2] != 108)
		x[2] = x[2] + 1;

	printf("%c",x[2]);
}

void    print_o()
{
	while(x[3] != 111)
		x[3] = x[3] + 1;

	printf("%c",x[3]);
}

void    print_space()
{
	while(x[4] != 32)
		x[4] = x[4] + 1;

	printf("%c",x[4]);
}

void    print_W()
{
	while(x[5] != 87)
		x[5] = x[5] + 1;

	printf("%c",x[5]);
}

void    print_r()
{
	while(x[6] != 114)
		x[6] = x[6] + 1;

	printf("%c",x[6]);
}

void    print_d()
{
	while(x[7] != 100)
		x[7] = x[7] + 1;

	printf("%c",x[7]);
}

int	main()
{

    int i = 0;
    void (*func_ptr[8])() = {print_H, print_e, print_l, print_o,print_space, print_W, print_r, print_d};

    while(i != 8)
    {
            func_ptr[i]();
            if ( i == 2)
                func_ptr[i]();
            else if (i == 5)
                func_ptr[i - 2]();
            else if (i == 6)
                func_ptr[i - 4]();
            i++;
    }

	return 0;
}
