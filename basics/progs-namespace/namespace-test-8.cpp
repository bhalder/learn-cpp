#include <iostream>

namespace A {

   inline namespace B {
      void print() { std::cout << "This is inside namespace B" << std::endl; }
   } 

   namespace C {
      void print() { std::cout << "This is inside namespace C" << std::endl; }
   }

}

int main() {

   using namespace A;
   C::print();
   return 0;
}

