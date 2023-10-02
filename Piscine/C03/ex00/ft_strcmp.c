/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:01:18 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/08 12:39:20 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "ABcd";
	char	str2[] = "ABcd";
	char	str3[] = "ABCD";
	char	str4[] = "abcd";
	char	str5[] = "ABcde";

	printf("%d\n", ft_strcmp(str, str2));
	printf("%d\n", ft_strcmp(str, str3));
	printf("%d\n", ft_strcmp(str, str4));
	printf("%d\n", ft_strcmp(str, str5));
}*/
