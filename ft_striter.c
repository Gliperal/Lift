/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwhitlow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:42:48 by nwhitlow          #+#    #+#             */
/*   Updated: 2019/05/01 23:45:22 by nwhitlow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == 0)
		return ;
	if (f == 0)
		return ;
	while (*s != 0)
	{
		(*f)(s);
		s++;
	}
}