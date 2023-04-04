#include <iostream>
using namespace std;

// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "I am Base Class" ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};
class myshayan : public MyGrandChild {
};

int main() {
  myshayan myObj;
  myObj.myFunction();
  
  return 0;
                                       }
