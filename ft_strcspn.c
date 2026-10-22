/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arawashd <arawashd@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:55:29 by arawashd          #+#    #+#             */
/*   Updated: 2026/10/20 21:21:53 by arawashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0, k;
	while(s[i])
	{
		k = 0;
		while (reject[k])
			if (reject[k++] == s[i])
				return (i);
		i++;
	}
	return (i);
}
