/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:03:01 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/07/27 16:03:02 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (argv[i])
	{
		while(argv[i][j])
		{
			putchar(toupper(argv[i][j]));
			j++;
		}
		i++;
	}
	return (0);
}
