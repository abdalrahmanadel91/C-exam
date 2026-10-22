/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arawashd <arawashd@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:46:55 by arawashd          #+#    #+#             */
/*   Updated: 2026/09/30 22:48:26 by arawashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int count;

	if (ac  == 2)
	{
			while(av[1][i])
			{
					count = 1;
					if (av[1][i] >= 'a' && av[1][i] <= 'z')
						count = av[1][i] - 'a' + 1;
					else if (av[1][i] >= 'A' && av[1][i] <= 'Z') 
						count = av[1][i] - 'A' + 1;
					while (count--)
						write(1,&av[1][i],1);
					i++;
			}
	}
	write(1, "\n", 1);
	return (0);
}
