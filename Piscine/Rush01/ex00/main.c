/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askokov- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:32:14 by askokov-          #+#    #+#             */
/*   Updated: 2023/09/09 17:30:50 by askokov-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "ERROR!", 6);
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		write(1, "Thank you for the input but we give up :)", 41);
		write(1, "\n", 1);
	}
}
