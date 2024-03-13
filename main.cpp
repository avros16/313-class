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


 // int test_var=5;


  // condition goes in "do," and it will execute the condition once even if the condition is false. if the condition is false, it will leave the loop and not execute again. 
 // do{
  //  cout<< "we are inside the loop." << endl;
  //  test_var++;
 // } while(test_var<10);





  // exmaple 


  // int grade{0};
  // int total {0};
  // std::string choice;
  
  // while (true){

  //   cout <<"Do you wish to enter a grade y/n";
  //   cin >> choice;

  //   if(choice == "y") {
  //     cout << "Go ahead enter your grade: ";
  //     cin >> grade;
  //     total = total + grade;
      
  //   }
  //   cout<<"Enter a grade: ";
  //   cin >> grade; 

  //   if(grade>0) {
  //     total = total + grade;
  //   } else {
  //     break;
  //   }
    
  // } cout << "Your total is " << total;



  // example 2


  // int number{0};

  // while (true) {
  //   cout << "enter a number: ";
  //   cin >> number;

  //   if (number%2 ==1){
  //     cout << "Your number is odd" << endl;
      
  //   } else if (number%2 == 0) {
  //     cout << "Your number is even" << endl;
  //   }
    
  // }

  int total{0};
  int grade{1};

  while (grade <= 10){
    cout << "please enter your grade: ";
    cin >> total;

    total = total + total;
    grade++;
    cout << total;
  }
 
 
}