/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <uahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:22:24 by uahmed            #+#    #+#             */
/*   Updated: 2023/10/31 20:09:15 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	char	alpha;

	if (c >= 'A' || (c <= 'Z' && c >= 'a') || c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
		{
			alpha = c + 32;
			return (alpha);
		}
	}
	return (c);
}
