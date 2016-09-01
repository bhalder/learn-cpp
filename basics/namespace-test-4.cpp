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

   print();
   return 0;
}

/*************************************************************
OUTPUT:

barun@barun-Inspiron-3442:~/project/02-cpp-dev/basics$ g++ namespace-test-4.cpp -o namespace-test-4
namespace-test-4.cpp: In function ‘int main()’:
namespace-test-4.cpp:19:10: error: ‘print’ was not declared in this scope
    print();
          ^
namespace-test-4.cpp:19:10: note: suggested alternatives:
namespace-test-4.cpp:5:9: note:   ‘A::print’
    void print() { std::cout << "This is inside namespace A" << std::endl; }
         ^
namespace-test-4.cpp:8:12: note:   ‘A::B::print’
       void print() { std::cout << "This is inside namespace B" << std::endl; }
            ^
namespace-test-4.cpp:12:12: note:   ‘A::C::print’
       void print() { std::cout << "This is inside namespace C" << std::endl; }

*************************************************************/
