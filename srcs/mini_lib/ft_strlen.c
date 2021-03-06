/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyrode <atyrode@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:07:14 by atyrode           #+#    #+#             */
/*   Updated: 2017/10/19 00:02:15 by atyrode          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/ft_printf.h"

size_t	ft_strlen(char const *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
