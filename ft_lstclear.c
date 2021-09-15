#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr->next)
	{
		next = curr->next;
		(*del)(curr);
		curr = next;
	}
}
