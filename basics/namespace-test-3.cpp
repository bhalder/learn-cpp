#include <iostream>

namespace A {

   void print() { std::cout << "This is inside namespace A" << std::endl; }

   namespace B {
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
