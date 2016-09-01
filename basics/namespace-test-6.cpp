#include <iostream>

namespace A {

   void print() { std::cout << "This is inside namespace A" << std::endl; }

   inline namespace B {
      void print() { std::cout << "This is inside namespace B" << std::endl; }
   } 

   namespace C {
      void print() { std::cout << "This is inside namespace C" << std::endl; }
   }

}

int main() {

   using namespace A;
   print();
   return 0;
}


/*****************************************************************
OUTPUT:

barun@barun-Inspiron-3442:~/project/02-cpp-dev/basics$ g++ namespace-test-6.cpp -o namespace-test-6
namespace-test-6.cpp: In function ‘int main()’:
namespace-test-6.cpp:20:10: error: call of overloaded ‘print()’ is ambiguous
    print();
          ^
namespace-test-6.cpp:20:10: note: candidates are:
namespace-test-6.cpp:8:12: note: void A::B::print()
       void print() { std::cout << "This is inside namespace B" << std::endl; }
            ^
namespace-test-6.cpp:5:9: note: void A::print()
    void print() { std::cout << "This is inside namespace A" << std::endl; }



*****************************************************************/
