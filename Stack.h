#ifndef STACK_H
#define STACK_H

#include<string>
#include<vector>

class Stack {
  public:
    bool push(const string&);
    bool pop(string&);
    bool peek(string&);

    bool empty();
    bool full();
    int size() {return _stack.size();}

  private
    vector<string> _stack;
};

#endif
