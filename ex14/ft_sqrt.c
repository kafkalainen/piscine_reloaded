int		ft_sqrt(int nb)
{
	int		test;
	int		i;
	
	i = 0;
	test = nb / 2;
	while (i < test && nb > 0)
	{
		if (i * i == nb)
			return i;
		else
			i++;	
	}
	return (0);
}
