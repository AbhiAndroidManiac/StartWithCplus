#ifndef LEARNINGFUNCTION_H
#define LEARNINGFUNCTION_H
#include <string>

class LearningFunction
{
    public:
        LearningFunction();
        virtual ~LearningFunction();
        int setMyNumValue(int mynumValue);
        std::string setmyStringValue(std::string name);
        int myNum;
        std::string myString;

    protected:

    private:


};

#endif // LEARNINGFUNCTION_H
