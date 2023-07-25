#include <string>
#include <iostream>
#include <vector>

using namespace std;

#ifndef SCHOOL_H
#define SCHOOL_H

class School
{
private:
    /* data */
    string name = "";
    double cutOffPoint = 200;
    vector<string> courses;

public:
    School(){};
    School(string Name, double cutOffPoint_)
    {
        name = Name;
        cutOffPoint = cutOffPoint_;
    };
    School(string Name, double cutOffPoint_, string course1, string course2)
    {
        name = Name;
        cutOffPoint = cutOffPoint_;
        courses.emplace_back(course1);
        courses.emplace_back(course2);
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

    void getCourses() const
    {
        cout << "\t Courses offered" << endl;
        int index = 0;
        for (string course : courses)
        {
            index++;
            cout << "\t " <<index << ":" << course << endl;
        }
    }

    void addCourse(string courseName)
    {
        courses.push_back(courseName);
    }
};

#endif // SCHOOL_H
