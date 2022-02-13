/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finalcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:49:56 by khuynh            #+#    #+#             */
/*   Updated: 2022/02/13 13:04:32 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chk_raw_l_val(int skyscraper[4][4], int line, int input[16]);
int	ft_chk_raw_r_val(int skyscraper[4][4], int line, int input[16]);
int	ft_chk_col_u_val(int skyscraper[4][4], int col, int input[16]);
int	ft_chk_col_d_val(int skyscraper[4][4], int col, int input[16]);

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

int	ft_ultimate_check(int tab[4][4], int line, int col, int input[16])
{
	if (ft_chk_raw_l_val(int skyscraper[4][4], int line, int input[16]));
		return (1);
	if (ft_chk_raw_r_val(int skyscraper[4][4], int line, int input[16]));
		return (1);
	if (ft_chk_col_u_val(int skyscraper[4][4], int col, int input[16]));
		return (1);
	if (ft_chk_col_d_val(int skyscraper[4][4], int col, int input[16]));
		return (1);
	if (check_dbl(int nb, int skyscrap[4][4], int col, int row));
		return (1);
	return (0);
}
