/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   deserialize.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:34:28 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/10 17:20:50 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Data * deserialize(void * raw)
{
    Data* deserialize = new (std::nothrow) Data;
    if (deserialize == NULL)
    {
        std::cout << "allocation failed" << std::endl;
        return (NULL);
    }
    deserialize = reinterpret_cast<Data *>(raw);
    return (deserialize);
}
