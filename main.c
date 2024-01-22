/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laltarri <laltarri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:37:53 by laltarri          #+#    #+#             */
/*   Updated: 2024/01/22 19:49:28 by laltarri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char** argv)
{
	int i = 0;
	if (argc == 5)
		printf("aa");
	while(!argv[i])
	{
		printf("%s",argv[i]);
		i++;
	}
	return (0);
}

