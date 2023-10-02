/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:23:09 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/09 18:38:10 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = i - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (!(str[x] >= 97 && str[x] <= 122))
			{
				if (!(str[x] >= 65 && str[x] <= 90))
				{
					if (!(str[x] >= 48 && str[x] <= 57))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
		x = i - 1;
	}
	return (str);
}

/*int   main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strupcase(str));
}*/
