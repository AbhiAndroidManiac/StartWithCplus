#include "LearningFunction.h"
#include <iostream>

LearningFunction::LearningFunction()
{
    //ctor
    //constructor code
    std::cout << "The constructor is called" <<std::endl;
}

LearningFunction::~LearningFunction()
{
    //dtor
    //de-constructor code
    std::cout << "The deconstructor is called"<< std::endl;
}
    // Method to set myNum

    int LearningFunction::setMyNumValue(int mynumValue){
        myNum = mynumValue;
        return myNum;
    }
    std::string LearningFunction::setmyStringValue(std::string name){
        myString = name;
        return myString;
    }



