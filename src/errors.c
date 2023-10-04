/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:26:42 by kilchenk          #+#    #+#             */
/*   Updated: 2023/10/04 16:39:43 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	quote_error(char *s)
{
	ft_putstr_fd(s, 2);
	free_tokens(&(g_shell->var));
	//free_pipe(&(g_shell->pipes));
	return (1);
}
