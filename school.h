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
    double cutOffPoint = 200;

public:
    School(){};
    School(string Name, double cutOffPoint_)
    {
        name = Name;
        cutOffPoint = cutOffPoint_;
    };

    string getName() const
    {
        return name;
    }

    void setName(string Name)
    {
        name = Name;
    }

    void setCutOffPoint(double cutOff)
    {
        cutOffPoint = cutOff;
    }
    
    double getCutOffPoint() const
    {
        return cutOffPoint;
    }
};

#endif // SCHOOL_H
