#include <string>
#include "courses.h"
#include "school.h"

using namespace std;

class Student
{
private:
    string name = "";
    School school;

public:
    Student(){
        
    };
    Student(string Name, School schoolAttending){
        name = Name;
        school = schoolAttending;
    }

    void getStudentDetails(){
        cout << "Student: " << name << endl;
        cout << "School: " << school.getName() << endl;
    }

    void enroll(School newSchool){
        school  = newSchool;
        cout << "Congratulatons. Student: "<< name << " just enrolled in " << newSchool.getName() << endl;
    }

};

