#include <string>
#include <iostream>
#include "courses.h"
using namespace std;


#ifndef SCHOOL_H
#define SCHOOL_H

class School

{
private:
    /* data */
    string name = "";
    Courses coursesOffered;
public:
    School(){};
    School(string Name){
        name = Name;    
    };

    string getName(){
        // cout << name << endl;
        return name;
    }

    void displayCourses(){
        coursesOffered.display();
    }

    
};

#endif  // SCHOOL_H

