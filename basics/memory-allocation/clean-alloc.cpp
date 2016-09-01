#include <iostream>

int main() {

   int *value = new int; // This might throw "bad_alloc" exception
   int *value2 = new(std::nothrow) int; // This will not throw exception.
   if (value2 == NULL) {
      std::cout << "Value2 alloc failed." << std::endl;
   }
 
   return 0;
}
