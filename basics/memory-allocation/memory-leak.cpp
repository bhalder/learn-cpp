int main() {

   int *ptr = new int; // Alloc 1
   ptr = new int; // Alloc 1 lost, new address allocated

   delete ptr; // Only Alloc 2 freed
   return 0;
}
