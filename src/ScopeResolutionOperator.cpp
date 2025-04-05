#include "ScopeResolutionOperator.h"
#include <iostream>

int value = 5;//Global value
ScopeResolutionOperator::ScopeResolutionOperator()
{
    //ctor
    // Constructor code
    std::cout<<"Scope Resolution constructor" << std::endl;
}

ScopeResolutionOperator::~ScopeResolutionOperator()
{
    //dtor
    // Destructor code
    std::cout<<"Scope resolution deconstrutor code" << std::endl;

}
void ScopeResolutionOperator::demonstrateScopeResolution(){
    int value = 5;
    std::cout << "Local Value:" << value << std::endl;
    //std::cout << "Global value using scope function is (::value): " << ::value << std::endl;
}
