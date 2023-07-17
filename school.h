#include <string>
#include <iostream>

using namespace std;

#ifndef SCHOOL_H
#define SCHOOL_H

class School
{
private:    
    /* data */
    string name = "";

public:
    School(){};
    School(string Name)
    {
        name = Name;
    };

    string getName() const
    {
        return name;
    }
};


#endif // SCHOOL_H
