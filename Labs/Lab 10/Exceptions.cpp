#include <iostream>
#include <vector>
#include "Foo.h"

using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::runtime_error;


void functionC() {
    //your code here
    throw runtime_error("Made an Big Oopsies");
}

void functionB() {
    // your code here
    
    cout << "Starting functionB()" << endl;
    Foo f1(10);
    functionC();
    cout << "Ending functionB()" << endl;
}

void functionA() {
    // your code here
    try {

        functionB(); //may throw, maybe... hopefully 
    }
    catch ( const std::exception& e) {
        cout << "Caught an exception: " << e.what() << endl;
    }
    // your code here
}
int main() {
    

    cout << "Starting main()" << endl;
    functionA();
    cout << "Ended normally." << endl;

    
    return 0;
}