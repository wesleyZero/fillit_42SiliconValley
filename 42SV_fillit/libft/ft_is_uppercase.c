/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjohanso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:40:13 by wjohanso          #+#    #+#             */
/*   Updated: 2020/02/25 12:41:37 by wjohanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (0);
	return (-1);
}