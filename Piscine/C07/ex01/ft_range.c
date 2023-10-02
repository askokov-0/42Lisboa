/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:29:10 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/18 19:05:21 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	i = 0;
	if (min >= max)
		return (0);
	range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*int	main(void)
{
	int	i = 0;
	int	max = 8;
	int	*num = ft_range(0,max);

	while (num[i] <= max - 1)
	{
		printf("%d\n", num[i]);
		i++;
	}
}*/
