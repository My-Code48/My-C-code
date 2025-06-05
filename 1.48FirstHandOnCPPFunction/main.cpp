#include <iostream>


//Function that takes a single parameter, and doesn't
  //give back the result explicity

  void enter_bar(size_t age){  //Functions parameters

    if(age > 18){
      std::cout << " You are"  << age << "Years old.please proceed ." << std::endl; 
    }else{
      std::cout << " sorry, you're too young for this. No offense!" << std::endl;
    }
    return;

  }

  //Function that takes multiple parameters and returns the result of the computation
  int max(int a, int b){
    if(a>b)
    return a;
    else
        return b;
  }

  //Functions that doesn't take parameters and returns nothing
  void say_hello(){
    std::cout << "Hello there" << std::endl;
    return; // you could omit this return statement for functions returning void
  }

  //function that takes no parameters and return something
  int lucky_number(){
    return 99;
  }

  //parameters passed this way are scoped localy in the function
  //Changes to there are not visible outside the function what we
  //have inside the function are actually COPIES of the arguments
  //passes to the function.
  double increment_multiply(double a , double b){

    std::cout << " Inside function , before increment:" << std::endl;
    std::cout << " a :" << a << std::endl;
    std::cout << " b : " << b << std::endl;
    
    double result = (++a)  * (++b);

 std::cout << " Inside function , after increment :" << std::endl;
    std::cout << " a :" << a << std::endl;
    std::cout << " b : " << b << std::endl;    

    //returning the result
    return result;

  }

int main(){
  //calling enter_bar
  /*  
// enter_bar(22);  //Function arguments
//enter_bar(15);

for(size_t i{i} ; i < 20 ; ++i){
  enter_bar(i);
}
*/

//calling max
/*
int x{22};
int y{44};

int result = max(100,20);  //Arguments
result = max(x,y);
std::cout << "max :" << result << std::endl;
*/

//calling say_hello
/*
say_hello();
*/

//calling lucky number
/*
int result{};
result = lucky_number();
std::cout << " result:" << result << std::endl;
*/

double h{3.00};
double i{4.00};

 std::cout << " outside function , before increment:" << std::endl;
    std::cout << " h :" << h << std::endl;
    std::cout << " i : " << i << std::endl;

    double incr_mult_result = increment_multiply(h,i);

     std::cout << " outside function , before increment:" << std::endl;
    std::cout << " h :" << h << std::endl;
    std::cout << " i : " << i << std::endl;

    return 0;
}