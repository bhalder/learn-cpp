#include <iostream>
#include "constants.h"

int main() {
   double height {0};
   int i {0} ;
   double current_travelled {0};

   std::cout << "Enter the height of building :" << std::endl;
   std::cin >> height;
   std::cout << "The height you entered is : "<< height << std::endl;

   for (i = 0; i < 5; i++) {
      std::cout << "At second "<< i << "height left is "
                << height - current_travelled
                << std::endl; 
      current_travelled += myConstants::gravity;
   }
}

