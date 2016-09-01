#include <iostream>

namespace A {

   namespace B {
      void print() { std::cout << "This is inside namespace B" << std::endl; }
   } 

   inline namespace {
      void print() { std::cout << "Anonymous namespace inside A" << std::endl; }
   }

}

int main() {

   using namespace A;
   print();
   return 0;
}
