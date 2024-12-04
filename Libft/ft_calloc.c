/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboutaib <tahayssirboutaib12@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:02:26 by tboutaib          #+#    #+#             */
/*   Updated: 2024/11/10 09:02:26 by tboutaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*  int main()
  {
       int *i;
       int j;

       i = ft_calloc(5, sizeof(int));
       j = 0;
       while (j < 5)
       {
               printf("%d", i[j]);
               j++;
      }
      free (i);
      return (0);
 }
 */
