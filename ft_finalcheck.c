/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finalcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:49:56 by khuynh            #+#    #+#             */
/*   Updated: 2022/02/13 12:00:56 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_dbl(int nb, int skyscrap[4][4], int col, int row)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (skyscraper[row][i] == nb)
			return (0);
		i++;
	}
	while (j < 4)
	{
		if (skyscraper[j][col] == nb)
			return (0);
		j++;
	}
	return (1);
}
