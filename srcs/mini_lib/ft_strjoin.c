/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyrode <atyrode@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:06:47 by atyrode           #+#    #+#             */
/*   Updated: 2017/10/19 18:59:54 by atyrode          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/ft_printf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*temp_ret;
	int		spe;

	spe = 0;
	//printf("s2 = [%s]\n", s2);
	if (s1 == NULL/* || s2 == NULL*/)
		return (NULL);
	if (s2 == NULL || s2[0] == 0 || s2[0] == '\0')
		spe = 1;
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ret == NULL)
		return (NULL);
	temp_ret = ret;
	while (*s1 != '\0')
		*temp_ret++ = *s1++;
	if (spe == 0)
	{
		while (*s2 != '\0')
			*temp_ret++ = *s2++;
	}
	else
	{
		*temp_ret++ = 0;
	}
	*temp_ret = '\0';
	return (ret);
}
