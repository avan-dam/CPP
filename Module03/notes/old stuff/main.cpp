/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 18:20:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/10 11:35:01 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int     main(void)
{
    ScavTrap sg("sg");
    sg.rangedAttack("hola");
    return 0;
}
// srand((unsigned) time(0));
//     FragTrap fraggy("fraggy");
//     FragTrap paddy("paddy");
//     fraggy.rangedAttack("hola");
//     fraggy.meleeAttack("hola");
//     paddy.takeDamage(2);
//     fraggy.meleeAttack("hola");
//     fraggy.meleeAttack("hola");
//     fraggy.meleeAttack("hola");
//     fraggy.beRepaired(10);
//     fraggy.meleeAttack("hola");
//     paddy.vaulthunter_dot_exe("wassup");
//     paddy.vaulthunter_dot_exe("wassup");
//     paddy.vaulthunter_dot_exe("wassup");
//     paddy.vaulthunter_dot_exe("wassup");
//     paddy.beRepaired(25);
//     paddy.beRepaired(100);
//     paddy.vaulthunter_dot_exe("wassup");
//     return 0;