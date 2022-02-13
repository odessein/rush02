/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 09:45:11 by khuynh            #+#    #+#             */
/*   Updated: 2022/02/13 11:48:28 by khuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_colup(int skyscraper[4][4], int *arg, int place) //arg = int arg colup1 for ex, skysraper = valeur case
{ 
	int	i;
	int	tall; //skyscraper le + haut que l'on voit
	int	count; // compte le nb de skyscrap vu

	i = 0;
	tall = 0;
	count = 0; 

	while (i < 4) 
	{
		if [skyscraper[i][place % 4] == 0}
		
		if (skyscraper[i][place % 4] > tall) 
		{
			tall = skyscraper[i][place % 4];
			count++;
		}
		i++;
		if (arg[i] = count) 
			return(1); 
	}
	return (0); 
}

int	check_coldown(int *skyscraper[], int *arg)
{
	int	i;
	int	tall; 
	int	count;

	i = 0;
	tall = 0;
	count = 0;

	while (i < 4)
	{
		if(skyscraper[i][place % 4] > tall)
		{
			tall = skyscraper[i][place % 4];
			count ++;
		}
		i++;
		if (arg[i] = count)
			return(1);
	}
	return(0);
}

int	check_rowleft(int *skyscraper[], int *arg)
{
	int	i;
	int	tall;
	int	count; 

	i = 0;
	tall = 0;
	count = 0;


