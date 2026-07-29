#include <unistd.h>

static const char	*g_letters[26][5] =
{
	{
		" !   ",
		" !   ",
		" !   ",
		"     ",
		" !   ",
	},
	{
		"\"\"   ",
		"\"\"   ",
		"       ",
		"       ",
		"       ",
	},
	{
		"AAAA ",
		"A  A ",
		"AAAA ",
		"A  A ",
		"A  A "
	},
	{
		"BBBB ",
		"B   B",
		"BBBB ",
		"B   B",
		"BBBB "
	},
	{
		"CCCC ",
		"C    ",
		"C    ",
		"C    ",
		"CCCC "
	}
};

void	print_ascii(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
    			str[index] -= 32;
		index++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	print_ascii(argv[1]);
	return (0);
}
