#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

ostream& operator<<(ostream& os, const MyInfo* info){
  return os << "Symbol: " << info->symbol << endl
              << "Number: " << info->number << endl
              << "Result: " << info->result << endl;
}


/*
string input;
Stack undoStack;
Stack redoStack;
char in1;
int in2;
int currentValue;
/**/

// class Calculator{
// public:
//
//   void quitProgram(){
//     std::cout << "Thank you for using this program" << endl;
//     std::cout << "Quit has been run." << endl;
//   }
//
//   void clear(){
//     undoStack.clear();
//     redoStack.clear();
//     std::cout << "Clear has been run." << endl;
//   }
//
//   void undo(){
//     redoStack.push();
//   }
//
//   void redo(){
//
//   }
//
//   int doMath(string input){
//     breakUp(input);
//     switch (in1) {
//     case '*': currentValue = in2 * currentValue; break;
//     case '/': currentValue = in2 / currentValue; break;
//     case '+': currentValue = in2 + currentValue; break;
//     case '-': currentValue = in2 - currentValue; break;
//     case '%': currentValue = in2 % currentValue; break;
//     default:
//       return 0;
//   }
//     return 0;
//   }
//
//   void userInput(string input){
//     std::cout << ">" << input << endl;
//     if(input[0] == 'Q'){
//       quitProgram();
//     }
//     else if(input[0] == 'C'){
//       clear();
//     }
//     else if(input[0] == 'U'){
//       undo();
//     }
//     else if(input[0] == 'R'){
//       redo();
//     }
//     else{
//       doMath(input);
//     }
//   }
//
//   void breakUp(string input){
//     undoStack.push();
//     in1 = input[0];
//     if(in1 == '*'||in1 == '/'||in1 == '+'||in1 == '-'||in1 == '%'){
//       in2 = std::stoi(input.substr(1, input.length() - 1));
//     }
//     else{
//       std::cout << "That doesn't work.  Please try again!" << endl;
//     }
//   }
// };
//

int main(int argc, char const *argv[]) {

  Stack x;

  cout << x.isEmpty();

  
  x.push(4);
  x.push(5);
  x.push('s',6,6);
  cout << x.pop();
  cout << x.pop();
  x.clear();
  cout << x.isEmpty();

  return 0;
}
