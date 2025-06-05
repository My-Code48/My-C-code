#include <iostream>

int main(){

  //how we have used pointers so far
  /*
  int number {22}; //stack
  int *p_number = &number;

  std::cout << std::endl;
  std::cout << " Declaring pointrt and assigning adress :" <<std::endl;
  std::cout << " number :" << number <<std::endl;
  std::cout << "p_number :" << p_number << std::endl;
  std::cout << "&number :" << &number <<std::endl;
  std::cout << "*p_number :"  << *p_number << std::endl;

  int * p_number1; //
  int number1 {12};
  p_number1 = &number1; //
  std::cout  << std::endl;
  std::cout <<"uninitialized pointer : " << std::endl;
  std::cout << "*p_number1 :" << *p_number1<< std::endl;

  //BAD 
  //writing into uninitialized pointer through dereference
  int *p_number2; //
  std::cout << "writting in the 55" << std::endl;
  *p_number2 = 55; //
  std::cout << std::endl;
  std::cout << "writting into uninitialized pointer through dereference" << std::endl;
  std::cout << "p_number2 : " << p_number2 << std::endl;
  std::cout << "*p_number2 :" << *p_number2 << std::endl;

  //initializing pointer to null
  //int *p_number3{nullptr}; // also works
  int * p_number3 {};
std::cout << " writting into nullptr mmemory " << std::endl;
//  *p_number = 33;
std::cout << "done writting " << std::endl;

  std::cout << std::endl;
  std::cout << "Reading and writting through nullptr :" << std::endl;
*/

//dynamic heap memory
/*
int *p_number4{nullptr};
p_number4 = new int; //Dynamically allocate space for a single int on the heap
                     //this memory be;ongs to our program from now on . The system
                     //can't use it for anything else, untill we return it.
                     //After this line executes,we will have a valid memory location
                     //allocated. The size of the allocated memory will be such that it
                     // can store the type pointed to by the pointer 



*p_number4 = 77 ; // writting into dyanamic allocated memory
std::cout << std::endl;
std::cout << " Dynamically allocating memory :"<<std::endl;
std::cout << "*p_number4 :" << *p_number4 << std::endl;

//Return memory to the os
delete p_number4;
p_number4 = nullptr;
*/

//It is also possible to initalize the pointer with a valid
//Address up on declaration. not with a nullptr
int*p_number5{ new int};
int*p_number6{ new int (22)}; 
int*p_number7{ new int {23} }; 

std::cout << std::endl;
std::cout << " Initialize with valid memory adress at declaration :" << std::endl;
std::cout << "p_number5 :" <<p_number5 << std::endl;
std::cout << "*p_number5 :" <<*p_number5 << std::endl;

std::cout << "p_number6 :" <<p_number6 << std::endl;
std::cout << "*p_number6 :" <<*p_number6 << std::endl;

std::cout << "p_number7 :" <<p_number7 << std::endl;
std::cout << "*p_number7 :" <<*p_number7 << std::endl;

//Remember to release the memory
delete p_number5;
p_number5 = nullptr;

delete p_number6;
p_number6 = nullptr;

delete p_number7;
p_number7 = nullptr;

//can reuse pointers
p_number5 = new int(81);
std::cout << "*p_number :" << *p_number5 << std::endl;


delete p_number5;
p_number5 = nullptr;

//calling delete twice on a pointer : BAD!
p_number5 = new int(99);
std::cout << "*p_number5 :" <<*p_number5 << std::endl;
 
delete p_number5;
delete p_number5;


std::cout << " program is ending well " << std::endl;








    
    return 0;
}