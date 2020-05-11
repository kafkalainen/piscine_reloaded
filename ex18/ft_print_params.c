/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnivala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 21:29:37 by jnivala           #+#    #+#             */
/*   Updated: 2020/05/11 21:57:25 by jnivala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		length;

	length = 0;
	while (str[length] != '\0')
	{
		ft_putchar(str[length]);
		length++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
