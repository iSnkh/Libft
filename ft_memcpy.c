/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: amonteli <amonteli@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/12 13:56:35 by amonteli     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/12 15:32:46 by amonteli    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*source;
	char	*d;

	count = 0;
	source = (char *)src;
	d = (char *)dest;
	if (n == 0)
		return ((void *)d);
	while (count < n)
	{
		d[count] = source[count];
		count++;
	}
	return ((void *)d);
}