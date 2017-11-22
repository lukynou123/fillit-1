/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetris.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgilbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:11:06 by xgilbert          #+#    #+#             */
/*   Updated: 2017/11/22 12:19:29 by xgilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRIS_H
# define TETRIS_H

# include "libft.h"
# include <fcntl.h>

char	***pieces_in_tab(char *str);
char	*liste_tetri_to_str(const char *liste_tetri);

#endif
