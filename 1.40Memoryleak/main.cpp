#include <iostream>

int main(){
  /*
    
  int * p_number { new int {67}} ;  //points to some address, let's call that address

  //should delete and reset here
  

  int number{55};  //lives at address2

  p_number = &number;  //Now p_number points to adress2 . but adress1 is still in use by
                       // our program. But our program has lost access to that memory location
                       //Memory has been leaked
    */

    //Double allocation
    /*
    int *p_number1 {new int {55}};

    // use the pointer

    //Should delete and reset here.

    p_number1 = new int{44};  //memory with int {55} leaked.

    delete p_number1;
    p_number1 = nullptr;
    */

    //nested scopes with dynamically allocated memory
    {

      int *p_number2 {new int {57}};

      // Use the dynamic memory

    }

    //Memory with int{57} leaked.

    std::cout << " Program ending well " << std::endl;

    return 0;
}