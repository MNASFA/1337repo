/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmnasfa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:34:19 by hmnasfa           #+#    #+#             */
/*   Updated: 2024/07/06 21:03:29 by hmnasfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return 1;
	else if (nb < 0)
		return 0;
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
