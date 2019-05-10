#ifndef STACK_H
#define STACK_H

#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Stack {
  public:
    bool push(const string&);
    bool pop(string&);
    bool peek(string&);

    bool empty();
    bool full();
    int size() { 
      return _stack.size(); 
    }

    void test();

  private:
    vector<string> _stack;
};

#endif



