/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liste_tetri_to_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:20:44 by xgilbert          #+#    #+#             */
/*   Updated: 2017/11/22 12:20:58 by xgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris.h"

char	*liste_tetri_to_str(const char *liste_tetri)
{
	int		k;
	char	buffer[1];
	int		filein;
	char	*str;

	k = 0;
	filein = open((liste_tetri), O_RDONLY);
	if (!(str = (char*)malloc(sizeof(*str) * 1000)))
		return (0);
	while (read(filein, buffer, 1) > 0)
	{
		str[k] = read(filein, buffer, 1);
		k++;
	}
	close(filein);
	return (str);
}
