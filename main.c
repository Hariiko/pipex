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
	int i;
	int fd1;
	int fd2;

	i = 0;
	fd1 = 0;
	fd2 = 0;
	if (argc != 5)
		return(ft_puterror());
	
	//fd1 = open(argv[1], O_RDONLY);

	//fd2 = open(argv[4], O_RDONLY);
	while(!argv[i])
	{
		printf("%s",argv[i]);
		i++;
	}
	 


	return (0);
}