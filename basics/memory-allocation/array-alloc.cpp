#include <iostream>

int main() {

   int size = 0;

   std::cout << "Enter the size of the array to be created"
             << std::endl;
   std::cin >> size;  

   // Dynamic allocation of the array based on the input from the user
   int *arr = new (std::nothrow) int[size]; 
   if (arr != NULL) {
      delete[] arr;
   }

   return 0;
}
