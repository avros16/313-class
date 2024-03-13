#include <iostream>

// class website: bit.ly/csci271
// online terminal: onlinegdb.com

using std::cout;
using std::cin;
using std::endl;

int main() {

  //int count =0;

  // while(count <=5) {
  //   cout << "Hello" << std::endl;
  //   count ++;
  // }


  // for (int cnt=0;cnt<=5; cnt++) {
  //   cout << "Hello" << std::endl;
    
  // }


  int test_var=5;


  // condition goes in "do," and it will execute the condition once even if the condition is false. if the condition is false, it will leave the loop and not execute again. 
  do{
    cout<< "we are inside the loop." << endl;
    test_var++;
  } while(test_var<10);
 
}