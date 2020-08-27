/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 18:20:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 10:42:17 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main(void)
{
    srand((unsigned) time(0));
    FragTrap fraggy("fraggy");
    FragTrap paddy("paddy");
    fraggy.rangedAttack("hola");
    fraggy.meleeAttack("hola");
    paddy.takeDamage(2);
    fraggy.meleeAttack("hola");
    fraggy.meleeAttack("hola");
    fraggy.meleeAttack("hola");
    fraggy.beRepaired(10);
    fraggy.meleeAttack("hola");
    paddy.vaulthunter_dot_exe("wassup");
    paddy.vaulthunter_dot_exe("wassup");
    paddy.vaulthunter_dot_exe("wassup");
    paddy.vaulthunter_dot_exe("wassup");
    paddy.beRepaired(25);
    paddy.beRepaired(100);
    paddy.vaulthunter_dot_exe("wassup");
    return 0;
}
