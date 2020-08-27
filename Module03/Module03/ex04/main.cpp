/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 13:54:26 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/20 10:46:34 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    srand((unsigned) time(0));
    ScavTrap    scavy("scavy");
    SuperTrap   super("Super");
    FragTrap    fraggy("fraggy");
    NinjaTrap   Ninja("Ninja");
    std::cout << "My ranged attack on supertrap goes like this " << std::endl;
    super.rangedAttack("target");
    std::cout << "This should be the same as my ranged attack on fragtrap, which goes like this " <<std::endl;
    fraggy.rangedAttack("target");
    //so we can see super staring with the same hitpoints as ninja
    super.rangedAttack("target");
    std::cout << "My MELE attack on supertrap goes like this " << std::endl;
    super.meleeAttack("target");
    std::cout << "This should be have the same effect as my MELE attack on NinjaTrap, which goes like this " <<std::endl;
    Ninja.meleeAttack("target");
    std::cout << "This is my vaulthunter_dot_exe on my SuperTrap " << std::endl;
    super.vaulthunter_dot_exe("target");
    std::cout << "Although it is the same as on my FragTrap it might be different becuase the vaulthunter_dot_exe is random. This is it on my FragTrap " <<std::endl;
    fraggy.vaulthunter_dot_exe("target");
    
    std::cout << "Ninjashoe box on my NinjaTrap with a scav trap: " << std::endl;
    Ninja.ninjaShoebox(scavy);
    std::cout << "Ninjashoe box on my SuperTrap with a scav trap: " << std::endl;
    super.ninjaShoebox(scavy);
    std::cout << "Ninjashoe box on my NinjaTrap with a FragTrap trap: " << std::endl;
    Ninja.ninjaShoebox(fraggy);
    std::cout << "Ninjashoe box on my SuperTrap with a FragTrap trap: " << std::endl;
    super.ninjaShoebox(fraggy);
    std::cout << "Ninjashoe box on my NinjaTrap with a NinjaTrap trap: " << std::endl;
    Ninja.ninjaShoebox(Ninja);
    std::cout << "Ninjashoe box on my SuperTrap with a NinjaTrap trap: " << std::endl;
    super.ninjaShoebox(Ninja);
    // ninjaShoebox(const FragTrap& target);
    // ninjaShoebox(const NinjaTrap& target);
}
