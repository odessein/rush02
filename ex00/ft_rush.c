/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:41:17 by odessein          #+#    #+#             */
/*   Updated: 2022/02/12 20:40:03 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_obvious(int skyscraper[4][4], int browser)
{
	int	j;

	if (browser < 4 || (browser < 12 && browser > 7))
		j = 1;
	else
		j = 4;
	while (j < 5)
	{
		if (browser < 4)
			skyscraper[j - 1][browser] = j;
		else if (browser > 7 && browser < 12)
			skyscraper[browser % 4][j - 1] = j;
		j++;
	}
	while (j > 0)
	{
		if (browser < 8 && browser > 3)
			skyscraper[j - 1][browser % 4] = j;
		else if (browser < 16 && browser > 11)
			skyscraper[browser % 4][j - 1] = j;
		j--;
	}
}

void	ft_obvious(int skyscraper[4][4], int input[16])
{
	int	browser;

	browser = 0;
	while (browser < 16)
	{
		if (input[browser] == 4)
			ft_ultimate_obvious(skyscraper, browser);
		browser++;
	}	
}
