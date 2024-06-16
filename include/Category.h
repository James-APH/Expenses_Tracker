/**
 * @author James Huston | huston@uleth.ca
 * @date 16/06/2024
 * @copyright
 * 2024 Your Name or Your Company. All rights reserved.
 *
 * Licensed Under The GNU General Public License v3.0
 */



#ifndef INCLUDED_CATEGORY_H
#define INCLUDED_CATEGORY_H

#include <string>
#include "Exception.h"
/**
 *
 *
 *
 *
 */

class Category {
 public:
  /**
   * @brief default constructor
   *
   *
   */
  Category() {
    type = "undetermined";
    identity = 00000;
  }

  Category(std::string type, int identity) {
    if (type == "" || identity == 0) {
      throw(empty_var("Empty String"));
    } else {
      this->type = type;
      this->identity = identity;
    } 
  };


 private:
  std::string type;
  int identity;
};








#endif // INCLUDED_CATEGORY_H
