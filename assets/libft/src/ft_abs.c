/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbredykh <dbredykh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:44:12 by dbredykh          #+#    #+#             */
/*   Updated: 2023/09/05 12:45:10 by dbredykh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
