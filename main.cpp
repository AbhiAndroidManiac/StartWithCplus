#include <iostream>
#include "ScopeResolutionOperator.h"
#include "LearningFunction.h"
//using namespace std;

int main()
{

    /**"<<" operator in C++ is called the: Stream Insertion Operator
    what it does:- cout << "Hello, world!" means: insert the string
    "Hello, world!" into the output stream (cout).
    Context	   Meaning	            Name
    Streams	   Output to stream	    Stream Insertion Operator
    Bitwise	   Shift bits left	    Left Shift Operator
    //if using Scope Resolution Operator you dont need to include using namespace std
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
    //ScopeResolutionOperator scopeResObject;
    //scopeResObject.demonstrateScopeResolution();


    //printing number variable
    std::cout << 3 << "\n";
    /**
        ways to insert new lines
        "\n"
        now this can be placed with as following
    **/
    //way one
    std::cout << "A first new line \n";

    std::cout << "I am learning c++" << std::endl;

    //Access the Function Learning class here
    LearningFunction learningFunction;
    std::cout<< "The value is "<<learningFunction.setMyNumValue(23) <<std::endl;
    std::cout<<"The value is "<< learningFunction.setmyStringValue("Hello: The developer name is Abhishek Rocking it. ")<<std::endl;

    std::cout<<"The inside int variable is"<<learningFunction.myNum <<std::endl;
    std::cout<<"The inside string variable is"<<learningFunction.myString<<std::endl;
    return 0;
}
