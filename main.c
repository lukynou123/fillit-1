/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:09:54 by xgilbert          #+#    #+#             */
/*   Updated: 2017/11/22 12:27:19 by xgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_print_words_table(pieces_in_tab(liste_tetri_to_str(argv[1]))[0]);
	return (0);
}
