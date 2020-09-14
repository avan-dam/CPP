/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 18:20:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 10:43:05 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    srand((unsigned) time(0));
    FragTrap fraggy("fraggy");
    ScavTrap paddy("paddy");
    fraggy.rangedAttack("hola");
    paddy.rangedAttack("hola");

    fraggy.meleeAttack("hola");
    paddy.meleeAttack("hola");

    paddy.takeDamage(2);
    fraggy.takeDamage(2);

    fraggy.meleeAttack("hola");
    fraggy.meleeAttack("hola");
    fraggy.meleeAttack("hola");

    paddy.meleeAttack("hola");
    paddy.meleeAttack("hola");
    paddy.meleeAttack("hola");
    
    fraggy.beRepaired(10);
    paddy.beRepaired(10);

    fraggy.meleeAttack("hola");
    paddy.meleeAttack("hola");

    fraggy.vaulthunter_dot_exe("wassup");
    fraggy.vaulthunter_dot_exe("wassup");
    fraggy.vaulthunter_dot_exe("wassup");
    fraggy.vaulthunter_dot_exe("wassup");
    fraggy.beRepaired(25);
    fraggy.beRepaired(100);
    fraggy.vaulthunter_dot_exe("wassup");

    paddy.challengeNewcomer();
    paddy.challengeNewcomer();
    paddy.challengeNewcomer();
    paddy.challengeNewcomer();

    return 0;
}
