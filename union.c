/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arawashd <arawashd@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:38:26 by arawashd          #+#    #+#             */
/*   Updated: 2026/10/21 11:06:42 by arawashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int seen[256] = {0};
	int i = 1;
	int j;

	if (argc == 3)
	{
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				if (seen[(int)argv[i][j]] == 0)
				{
					seen[(int)argv[i][j]] = 1;
					write(1,&argv[i][j],1);
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
}
