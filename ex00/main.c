/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:11:37 by odessein          #+#    #+#             */
/*   Updated: 2022/02/13 12:23:58 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	ft_init(int skyscraper[4][4]);
void	ft_display(int skyscraper[4][4]);
int		ft_split_arg(char *str, int tab[16]);
int		ft_strlen(char *str);
void	ft_obvious(int skyscraper[4][4], int input[16]);

void	ft_solve(int to_fill[4][4], int line, int column, int tabs[16])
{
	//if (check 0) fAUX RETURN
	if (line == 4)
		return (ft_solve(to_fill, 0, 0, tabs));
	if (column == 4)
		return (ft_solve(to_fill, ++line, (column - 4), tabs));
	
}

int	main(int argc, char *argv[])
{
	char	*input_str;
	int		skyscraper[4][4];
	int		input[16];

	input_str = argv[1];
	if (argc != 2)
		return (-1);
	ft_init(skyscraper);
	if (ft_split_arg(input_str, input) == 1)
		return (-1);
	ft_obvious(skyscraper, input);
	ft_display(skyscraper);
	return (0);
}
