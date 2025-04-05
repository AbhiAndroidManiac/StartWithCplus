#include <iostream>
#include "ScopeResolutionOperator.h"
//using namespace std;

int main()
{

    /**"<<" operator in C++ is called the: Stream Insertion Operator
    what it does:- cout << "Hello, world!" means: insert the string
    "Hello, world!" into the output stream (cout).
    Context	   Meaning	            Name
    Streams	   Output to stream	    Stream Insertion Operator
    Bitwise	   Shift bits left	    Left Shift Operator

    "::" operator in C++, the :: operator is called the: Scope Resolution Operator
    🔸 Common Uses:
    1. Accessing global variables when local ones have the same name
        int value = 10;       // global
        int main() {
        int value = 5;    // local
        cout << ::value;  // prints 10 (global)
        }

    **/


    //std::cout << "The value is happening";
    ScopeResolutionOperator scopeResObject;
    scopeResObject.demonstrateScopeResolution();

    return 0;
}
