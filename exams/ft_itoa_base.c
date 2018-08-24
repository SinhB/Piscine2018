#include <stdlib.h>

char *ft_base(int i)
{
	char *str = "0123456789ABCDEF";
	char *strbase;
	int j = 0;

	if (!(strbase = (char*)malloc(sizeof(char) * i)))
		return (0);
	while (j < i)
	{
		strbase[j] = str[j];
		j++;
	}
	strbase[j] = '\0';
	return (strbase);
}

int	malloc_str(int value, int cnt, int base)
{
	while (value / base)
	{
		value = value / base;
		cnt++;
	}
	return (cnt);
}

char *ft_itoa_base(int value, int base)
{
	char *strbase;
	char *res;
	int cnt;
	int i = 0;

	strbase = ft_base(base);
	cnt = malloc_str(value, 1, base);
	if (value < 0 && base == 10)
		cnt++;
	if (!(res = (char*)malloc(sizeof(char) * cnt + 1)))
		return (0);
	if (value < 0)
	{
		if (base == 10)
		{
			res[0] = '-';
			value = -value;
			i++;
		}
		else
			value = -value;
	}
	res[cnt] = '\0';
	while (cnt > i)
	{
		res[cnt - 1] = strbase[value % base];
		if (value / base)
			value = value / base;
		cnt--;
	}
	return (res);
}
