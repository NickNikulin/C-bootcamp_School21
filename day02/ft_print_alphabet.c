/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaquand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 18:36:02 by mlaquand          #+#    #+#             */
/*   Updated: 2019/07/04 21:33:17 by mlaquand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar (char ch);

void	ft_print_alphabet(void)
{
	int i = 97;
	while (i < 123)
	{
		ft_putchar(i);
		i=i+1;
	}	
}
