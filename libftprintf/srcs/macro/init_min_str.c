/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_min_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkovsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 11:50:37 by vkovsh            #+#    #+#             */
/*   Updated: 2018/03/09 12:20:52 by vkovsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*init_min_str(int c)
{
	char	*min_str;

	min_str = ft_strnew(1);
	min_str[0] = c;
	return (min_str);
}
