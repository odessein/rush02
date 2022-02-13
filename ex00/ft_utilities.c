/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:48:08 by odessein          #+#    #+#             */
/*   Updated: 2022/02/13 17:36:21 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ulti_init1(int skyscraper[4][4], int i)
{
	int	brow;
	int	trois;

	trois = 3;
	brow = 0;
	while (brow < 4)
	{
		if (brow == 0)
			skyscraper[i][brow] = trois;
		else if (brow == 1)
			skyscraper[i][brow] = trois - 2;
		else if (brow == 2)
			skyscraper[i][brow] = trois + 1;
		else
			skyscraper[i][brow] = trois - 1; 
		brow++;
	}
}

void	ft_ulti_init(int skyscraper[4][4], int i)
{
	int	brow;
	int	trois;

	trois = 3;
	brow = 0;
	while (brow < 4)
	{
		if (brow == 0)
			skyscraper[i][brow] = trois - 1;
		else if (brow == 1)
			skyscraper[i][brow] = trois + 1;
		else if (brow == 2)
			skyscraper[i][brow] = trois - 2;
		else
			skyscraper[i][brow] = trois; 
		brow++;
	}
}

void	ft_init(int skyscraper[4][4])
{
	int		i;
	int		j;
	int		inverse_fill;

	i = 0;
	inverse_fill = 5;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i == 0)
				skyscraper[i][j] = (j + 1);
			else if (i == 1)
				skyscraper[i][j] = --inverse_fill;
			else if (i == 2) 
				ft_ulti_init1(skyscraper, i);
			else if (i > 2)
				ft_ulti_init(skyscraper, i);
			j++;
		}
		i++;
	}
}

void	ft_display(int skyscraper[4][4])
{
	int		i;
	int		j;
	char	value;

	i = 0;
	while (i < 4)
	{
		j = 0;
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

int	ft_split_arg(char *str, int tab[16])
{
	int	i;
	int	j;
	int	ref;

	i = 0;
	j = 0;
	ref = 0;
	while (str[i])
	{
		if ((str[i] >= '1') && (str[i] <= '4') && (ref == 0))
		{
			tab[j] = str[i] - '0'; //tab = malloc(sizeof(int)*j); if tab == NULL, return (0); 
			ref = 1;
			j++;
		}
		else if ((str[i] == ' ') && (ref == 1))
			ref = 0;
		else
			return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}
