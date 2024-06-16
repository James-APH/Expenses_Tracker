/**
 * @author James Huston | huston@uleth.ca
 * @date 16/06/2024
 *
 *
 *
 */

#ifndef INCLUDED_EXCEPTION_H
#define INCLUDED_EXCEPTION_H

#include <iostream>
#include <exception>

/**
 * @brief Received empty variable as input
*/
class empty_var: public std::runtime_error {
 public:
    /**
     * @param errMessage An error message
    */
    explicit empty_var(const char* errMessage) :
        std::runtime_error(errMessage) {
    }
};


#endif