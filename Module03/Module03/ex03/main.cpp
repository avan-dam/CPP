/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:54:26 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 10:45:13 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    srand((unsigned) time(0));
    FragTrap fraggy("fraggy");
    ScavTrap paddy("paddy");
    NinjaTrap ginger("ginger");
    fraggy.rangedAttack("hola");
    paddy.rangedAttack("hola");
    ginger.rangedAttack("hola");

    fraggy.meleeAttack("hola");
    paddy.meleeAttack("hola");
    ginger.rangedAttack("hola");


    paddy.takeDamage(2);
    fraggy.takeDamage(2);
    ginger.rangedAttack("hola");


    fraggy.meleeAttack("hola");
    fraggy.meleeAttack("hola");
    fraggy.meleeAttack("hola");

    paddy.meleeAttack("hola");
    paddy.meleeAttack("hola");
    paddy.meleeAttack("hola");

    ginger.meleeAttack("hola");
    ginger.meleeAttack("hola");
    ginger.meleeAttack("hola");
    
    fraggy.beRepaired(10);
    paddy.beRepaired(10);
    ginger.beRepaired(10);

    fraggy.meleeAttack("hola");
    paddy.meleeAttack("hola");
    ginger.meleeAttack("hola");

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

    ginger.ninjaShoebox(paddy);
    ginger.ninjaShoebox(fraggy);
    NinjaTrap woo("woo");
    ginger.ninjaShoebox(woo);
}
