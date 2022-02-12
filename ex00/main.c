/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odessein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:11:37 by odessein          #+#    #+#             */
/*   Updated: 2022/02/12 15:58:45 by odessein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_solve(int **to_fill, int line, int column, int *tabs)
{
	if (line == max)
		return ;
	if (column == 4)
		return (ft_solve(to_fill, ++line, (column - 4), tabs));
}

int	ft_atoi_rush(char c)
{
	return (c - 48);
}

int	main(int argc, char *argv[])
{
	char	*input;

	input = ft_strcpy(argv[1]);
	if (argc != 2)
		return (1);
}
