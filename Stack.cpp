#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

/*
ostream& operator<<(ostream& os, const MyInfo* info){
  return os << "Symbol: " << info->symbol << endl
              << "Number: " << info->number << endl
              << "Result: " << info->result << endl;
}
/**/

// Initializes the Stack
void Stack::init(){
  Node* head = NULL;
  nodecount = 0;
}

Stack::Stack(){
  Stack::init();
}

void Stack::push(int x){
  Node* newnode = new Node{x}; 
  newnode->next = head; 
  head = newnode;
  nodecount += 1;
}

void Stack::push(char s, int n, int r){
  Node* newnode = new Node{s,n,r}; 
  newnode->next = head; 
  head = newnode;
  nodecount += 1;
}

void Stack::push(MyInfo* info){
  Node* newnode = new Node{info}; 
  newnode->next = head; 
  head = newnode;
  nodecount += 1;
} 

MyInfo* Stack::pop(){
  Node *temp = head;
  MyInfo* value = temp->info;
  delete temp;
  head = head->next;
  nodecount -= 1;
  return value;
}

MyInfo* Stack::top(){
  return head->info;
}

bool Stack::isEmpty(){
  //cout << head->info->number;
  return nodecount == 0;
}

void Stack::clear(){
  while(!isEmpty()){
      Stack::pop();
    }
}


/*


Stack::~Stack(){
  while(!isEmpty()){
    Stack::pop();
  }
  //Stack::clear();
  delete head;
}
/**/

/*
Stack::Stack(const Stack & rhs){
  Stack copy = rhs;
  std::swap( *this, copy);
}
/**/


/*

/**/

/*
Stack& Stack::operator= (const Stack & rhs){
  Stack copy = rhs;
  swap(*this, copy);
  return *this;
}
/**/


// Checks to see if the Stack is empty

/*
int main(int argc, char const *argv[]) {
  //NOTE: head starts initialized as null, but as soon as it leaves the scope of that function, it gets initialized to garbage. Doesn't matter what I set it too

  Stack x;

  cout << x.isEmpty();

  
  x.push(4);
  x.push(5);
  x.push('s',6,6);
  cout << x.pop();
  cout << x.pop();
  x.clear();
  cout << x.isEmpty();


  //x.clear();
  //x.isEmpty();

  //x.pop();

  //cout << x.pop();
  //cout << x.pop();

  
  //cout << testThis.pop();
  // Node * MyInfo;
  //
  // MyInfo = (myInfo('+', 5, 5), nullptr);

  // testThis.push(MyInfo);
  //testThis.top();

  return 0;
}
/**/