/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbredykh <dbredykh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:54:32 by dbredykh          #+#    #+#             */
/*   Updated: 2023/08/30 18:02:18 by dbredykh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **stack_a, t_list **stack_b, int oper)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	if ((oper == 'a' || oper == 's') && ft_lstsize(*stack_a) > 1)
	{
		tmp_a = *stack_a;
		tmp_b = tmp_a->next;
		*stack_a = tmp_b;
		tmp_a->next = tmp_b->next;
		tmp_b->next = tmp_a;
	}
	else if ((oper == 'b' || oper == 's') && ft_lstsize(*stack_b) > 1)
	{
		tmp_a = *stack_b;
		tmp_b = tmp_a->next;
		*stack_b = tmp_b;
		tmp_a->next = tmp_b->next;
		tmp_b->next = tmp_a;
	}
	ft_printf ("s%c\n", oper);
}

void	ft_push(t_list **stack_a, t_list **stack_b, int oper)
{
	t_list	*tmp_a;
	t_list	*tmp_b;
	t_list	*tmp;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	if ((oper == 'a') && ft_lstsize(*stack_b) >= 1)
	{
		tmp = *stack_b;
		*stack_b = tmp_b->next;
		tmp->next = tmp_a;
		*stack_a = tmp;
	}
	else if ((oper == 'b') && ft_lstsize(*stack_a) >= 1)
	{
		tmp = *stack_a;
		*stack_a = tmp_a->next;
		tmp->next = tmp_b;
		*stack_b = tmp;
	}
	ft_printf ("p%c\n", oper);
}

void	ft_rotate(t_list **stack_a, t_list **stack_b, int oper)
{
	t_list	*tmp;
	t_list	*last;

	(void)stack_b;
	if ((oper == 'a' || oper == 'r') && ft_lstsize(*stack_a) > 1)
	{
		tmp = *stack_a;
		last = *stack_a;
		*stack_a = tmp->next;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
	}
	else if ((oper == 'b' || oper == 'r') && ft_lstsize(*stack_a) > 1)
	{
		tmp = *stack_b;
		last = *stack_b;
		*stack_b = tmp->next;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
	}
	ft_printf ("r%c\n", oper);
}
