
#include <stdio.h>
void ft_putstr_non_printable(char *str);
int main(void)
{
    char text1[] = "salut, comment tu vas ? \x24\x42\x28\n\t\x7f\x8e 42mots quarante-deux; cinquante+et+un";
	ft_putstr_non_printable(text1);
    char text2[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(text2);

	putchar(0x0a);

    return 0;
}
#include <unistd.h>

unsigned char	*offset_arr(unsigned char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

unsigned char	*hex_str(char *str, int i, unsigned char *temp_arr)
{
	int				temp;
	unsigned char	c;

	c = str[i];
	temp = c / 16;
	if (temp < 10)
		temp_arr[0] = temp + '0';
	else
		temp_arr[0] = 'a' + (temp - 10);
	temp = c % 16;
	if (temp < 10)
		temp_arr[1] = temp + '0';
	else
		temp_arr[1] = 'a' + (temp - 10);
	return (temp_arr);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	temp_arr[3];

	i = 0;
	offset_arr(temp_arr, 3);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			offset_arr(temp_arr, 3);
			hex_str(str, i, temp_arr);
			write (1, "\\", 1);
			write (1, &temp_arr[0], 1);
			write (1, &temp_arr[1], 1);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
