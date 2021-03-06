/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobso <jjacobso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 16:11:26 by jjacobso          #+#    #+#             */
/*   Updated: 2018/12/24 13:16:20 by jjacobso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int n)
{
	int i;

	i = 1;
	while (i < n / 3 + 2)
	{
		if (i * i >= n)
		{
			return (i);
		}
		i++;
	}
	return ((n == 1) ? 1 : 0);
}
