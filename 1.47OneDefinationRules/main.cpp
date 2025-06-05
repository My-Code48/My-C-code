#include <iostream>
#include  "person.h"

//Variables : declaration and definition

double weight{};

double add ( double a , double b);


struct point 
{
  double m_x{};
  double m_y{};
};



int main(){

  person p1("John snow",35);
  p1.print_info();


  
    return 0;
}
/*
double add(double a, double b){
  return a+b ;
}
  */
