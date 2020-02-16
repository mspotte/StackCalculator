#ifndef Stack_H
#define Stack_H


struct MyInfo{
  char symbol;
  int number;
  int result;

  MyInfo();

  MyInfo(int n){
    symbol = 'a';
    number = n;
    result = 0;
  }

  MyInfo(char s, int n, int r){
    symbol = s;
    number = n;
    result = r;
  }
};


class Stack{

  struct Node { 
    MyInfo* info; 
    Node* next; 
    Node(int x){
      info = new MyInfo(x);
    }
    Node(char s, int n, int r){
      info = new MyInfo(s,n,r);
    }
    Node(MyInfo* i){
      info = i;
    }
  }; 


  public:
    Stack ();
    void init();
    void push(int x);
    void push(char s, int n, int r);
    void push(MyInfo* info);
    MyInfo* pop();
    MyInfo* top();
    bool isEmpty();
    void clear();
    Node *head;
    int nodecount;
    /*
    ~Stack ();
    bool isEmpty();
    void clear();

    Stack (const Stack & rhs);
    Stack & operator=(const Stack & rhs);
    

    
    
    void clear();
    
    
    /**/
};

#endif
