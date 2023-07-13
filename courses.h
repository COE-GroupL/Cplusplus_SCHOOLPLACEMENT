#include <string>
#include <iostream>
using namespace std;

#ifndef COURSES_H
#define COURSES_H

class Courses
{
private:
    /* data */
public:
    // Courses(/* args */);

    // preferably use enum

    double Mathematics = 0;
    double InterScience = 0;
    double English = 0;
    double Social = 0;

    double HomeEcons = 0;
    double RME = 0;
    double French = 0;
    double Ga = 0;
    double ICT = 0;

    void setScores(){

    }

    void getScores() const {
        
    };

    void display(){
        cout << "Maths: " << Mathematics << endl;
        cout << "English: " << English << endl;
    }
};

#endif  // COURSES_H
