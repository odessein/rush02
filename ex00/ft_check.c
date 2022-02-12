


int	check_colup(int tab[4][4], int *a) //a pointe sur la val de la case 
{ 
	int	i;
	int	tall; //skyscraper le + haut que l'on voit
	int	count; // compte le nb de skyscrap vu

	i = 0;
	tall = 0;
	count = 0; 

	while (i < 4) // 4 pour la longueur de la ligne, jsp si on met 4 ou 3 ?
	{
		if (a[i] > tall) //des que c'est plus le cas 
		{
			tall = a[i];
			count++;
		}
		i++;
		if (tab[0][0] = count) 
			return(1); // ex: si a[i] = 4, count = 1, on regarde si ca fit avec 
						//l'argument donne, si oui, placement valide, retour(1)
	}
	return (0); //sinon, une fois toute la column parcourue, placement non valide, retour (0)
}	
