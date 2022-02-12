/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:48:08 by odessein          #+#    #+#             */
/*   Updated: 2022/02/12 15:55:46 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_display(int **skyscraper)
{
	int		i;
	int		j;
	char	value;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			value = skyscraper[i][j] + 48;
			write (STDOUT_FILENO, &value, 1);
			if (j < 3)
				write (STDOUT_FILENO, " ", 1);
			j++;
		}
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
