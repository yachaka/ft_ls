/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihermell <ihermell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/03 14:14:43 by ihermell          #+#    #+#             */
/*   Updated: 2014/12/03 14:27:20 by ihermell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int				main()
{
	dprintf(1, "%d VS %d\n", ft_atoi("9223372036854775808"), atoi("9223372036854775808"));
	return (0);
}
