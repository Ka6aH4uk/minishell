/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:26:42 by kilchenk          #+#    #+#             */
/*   Updated: 2023/09/04 12:53:10 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	quote_error(char *s)
{
	ft_putstr_fd(s, 2);
	free_tokens(&(g_shell->var));
	return (1);
}

void	free_tokens(t_vars **token)
{
	t_vars	*tmp;
	t_vars	*next;

	if (!(*token))
		return ;
	tmp = *token;
	while (tmp)
	{
		next = tmp->next;
		free(tmp->tokens);
		free(tmp);
		tmp = next;
	}
	*token = NULL;
}

int	error(char *err)
{
	ft_putstr_fd(err, 2);
	free_tokens(&(g_shell->var));
	return (1);
}
