#include<iostream>

using namespace std;

class LibMat{
  public:
    LibMat() {
      cout << "LibMat::LibMat() default constructor" << endl;
    };

    ~LibMat() {
      cout << "LibMat::~LibMat() default destructor" << endl;
    }
    
    virtual void print() const{
      cout << "LibMat::print() -- i am a LibMat object" << endl;
    }

};

class Book : public LibMat{ 
  public:
    Book() { cout << "Book::Book() default constructor" << endl; };

    ~Book() {
      cout << "Book::~Book() default destructor" << endl;
    }

    void print() const{
      cout << "Book::print() -- i am a Book object" << endl;
    }
};


void print(const LibMat &mat)
{
  cout << "in global print()" << endl;

  mat.print();
}

int main() 
{
  //LibMat lm;
  Book b;
  print(b);
  return 0;
}


