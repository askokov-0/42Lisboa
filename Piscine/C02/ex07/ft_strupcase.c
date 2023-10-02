/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:13:59 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/06 12:41:45 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "TestCode";
	char	str1[] = "test2";
	char	str2[] = "aNOTHERtEST";

	printf("%s\n", ft_strupcase(str));
	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
}*/
