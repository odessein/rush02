/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduleme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:49:19 by mduleme           #+#    #+#             */
/*   Updated: 2022/02/12 16:40:29 by mduleme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (len != 31)
		return (-1);
	return (len);
}

int	*ft_split_arg(char *str)
{
	int	i;
	int	j;
	int	ref;
	int	tab[16];

	i = 0;
	j = 0;
	ref = 0;
	while (str[i])
	{
		if ((str[i] >= '1') && (str[i] <= '4') && (ref == 0))
		{
			tab[j] = str[i] - '0';
			ref = 1;
			j++;
		}
		else if ((str[i] == ' ') && (ref == 1))
			ref = 0;
		else
			return (-1);
		i++;
	}
	return (tab);
}

/*int	main(void)
{
	int	*str;
	int	tab[16];
	
	str = "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4";
	tab = ft_split_arg(str);
	if (tab != -1)
		write(1, &tab, 16);

}*/
