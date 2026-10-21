/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arawashd </var/spool/mail/arawashd>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:44:32 by arawashd          #+#    #+#             */
/*   Updated: 2026/10/21 16:49:17 by arawashd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	printf("%d %d\n",a,b);
	ft_swap(&a, &b);
	printf("after: %d %d\n", a, b);
	return (0);
}
