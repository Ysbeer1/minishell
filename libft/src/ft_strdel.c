/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 15:57:38 by jerasmus          #+#    #+#             */
/*   Updated: 2016/08/09 16:08:01 by jerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(void **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
