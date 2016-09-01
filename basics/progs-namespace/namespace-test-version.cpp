#include <iostream>

namespace A {

   // There is no issues with calling this one because we
   // are creating the object of class "Func"
   void print() { std::cout << "Inside A" << std::endl; }

   namespace v10 {

      template <typename T>
      class Func {
         public:
            void print() { std::cout << "Version 10" << std::endl; }
      };
   } 

   // Note the inline. The latest version is always attached the inline qualifier
   // This ensures that all clients by DEFAULT use the latest version
   // Clients which want to access the older version can do so by 
   // completely qualifying the namespace.

   inline namespace v11 {
             
      template <typename T>
      class Func {
         public:
         void print() { std::cout << "Version 11 - Latest" << std::endl; }
      };
   }

}

int main() {
   A::Func<int> *f = new A::Func<int>();

   f->print();
   return 0;
}
