/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stockage_piece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:33:52 by xgilbert          #+#    #+#             */
/*   Updated: 2017/11/22 12:20:00 by xgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris.h"

// lire fichier liste_tetri
// on parcours tant qu'on est pas sur un #
// creation tableau de 4*4
// stockage des elements dans le tableau
//
// quand saut de ligne => tableau suivant.
//
char	***pieces_in_tab(char *str)
{
	char	***tetri;
	int		k;
	int		i;
	int		j;
	int		n;

	n = 0;
	k = 0;
	if (!(tetri = (char***)malloc(sizeof(***tetri) * 18)))
		return (0);
	while (str[k])
	{
		if (!(tetri[n] = (char**)malloc(sizeof(**tetri) * 5)))
			return (0);
		while (str[k] != '\n' && str[k + 1] != '\n')
		{
			i = 0;
			j = 0;
			if (!(tetri[n][i] = (char*)malloc(sizeof(*tetri) * 5)))
				return (0);
			while (str[k] != '\n')
			{
				tetri[n][i][j] = str[k];
				k++;
				j++;
			}
			if (str[k] == '\n')
			{
				tetri[n][i][j] = '\0';
				j = 0;
				i++;
			}
		}
		k++;
		n++;
	}
	return (tetri);
}

