#include <iostream>

int main() {

   int size = 0;

   std::cout << "Enter the size of the array to be created"
             << std::endl;

   // Enter a substantially huge number to see some effect.
   std::cin >> size;  

   // Dynamic allocation of the array based on the input from the user
   int *arr = new (std::nothrow) int[size]; 
 
   // Declaring it as volatile so the the compiler does not optimize it out.
   volatile int test = 1; 

   // Adding an infinte loop to check the memory usage using top 
   while (test) {;}

      if (arr != NULL) {
      delete[] arr;
   }

   return 0;
}
