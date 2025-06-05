#include <iostream>

template <typename T> const T& maximum( const T& a , T& b);  //declaration

int main(){

  double a {23.5};
  double b {51.2};

  std::cout << "out - &a :" << &a << std::endl;  //0x111abc
  auto result = maximum(a,b);
  std::cout << "out - &a :" << std::endl;    //0x111abc

    
    return 0;
}

//Definition
template <typename T> const T& maximum(const T& a , const T& b){
  std::cout << " In - &a :" << &a << std::endl; //  //0x111abc
  return ( a > b) ? a:b ;
}
