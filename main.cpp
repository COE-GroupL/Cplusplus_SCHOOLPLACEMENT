// this is an shs school placement application

#include "school.h"
#include <iostream>
#include "student.h"
#include <vector>
#include <string>
#include <limits> // Add this line to include the <limits> header

using namespace std;

int main()
{

    cout << "Welcome to Ghana Education Service SHS PLACEMENT SYSTEM" << endl;
    int numStudents = 0;
    int numSchools = 0;
    int stdIndex = 0;

    string name = "";
    int Mathematics, Social, French, English, ICT, Science, GHL, RME, ECONS;

    vector<Student> graduates;
    Student Newst;

    string schoolName;
    double cutOff;
    vector<School> seniorHighs;
    School newSchool;
    int schIndex = 0;

    int index;
    int schoolChoice;
    int courseType;
    string schoolCourse1;
    string schoolCourse2;

start:
    cout << "\n*********************************" << endl;
    cout << "** Press h to create a school **" << endl;

    cout << "** Press s to create a student **" << endl;
    cout << "** Press d to display all students and schools **" << endl;
    cout << "** Press r to display the admission results so far **"
         << endl;
    cout << "** Press q to quit the program **"
         << endl;
    cout << "********************************* \n"
         << endl;

    char input;
    cin >> input;

    switch (input)
    {
    case 's':
        // Newst = graduates[stdIndex];
        cout << "Enter Student's name " << endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        getline(cin, name);
        // cin >> name;
        graduates.push_back(Student(name));

        cout << "\nEnter the marks for the respective courses" << endl;

        cout << "Mathematics ....> " << endl;
        cin >> Mathematics;
        graduates[stdIndex].addSubject("Mathematics", Mathematics);

        cout << "Social ....> " << endl;
        cin >> Social;
        graduates[stdIndex].addSubject("Social", Social);

        cout << "English ....> " << endl;
        cin >> English;
        graduates[stdIndex].addSubject("English", English);

        cout << "Integrated Science ....> " << endl;
        cin >> Science;
        graduates[stdIndex].addSubject("IntegratedScience", Science);

        cout << "French ....> " << endl;
        cin >> French;
        graduates[stdIndex].addSubject("French", French);

        cout << "ICT ....> " << endl;
        cin >> ICT;
        graduates[stdIndex].addSubject("ICT", ICT);

        cout << "RME ....> " << endl;
        cin >> RME;
        graduates[stdIndex].addSubject("RME", RME);

        cout << "HOME ECONS ....> " << endl;
        cin >> ECONS;
        graduates[stdIndex].addSubject("ECONS", ECONS);

        cout << "GHANAIAN LANGUAGE ....> " << endl;
        cin >> GHL;
        graduates[stdIndex].addSubject("GHANAIAN LANGUAGE", GHL);

        cout << "\n Thanks for your input" << endl;

        if (seniorHighs.empty())
        {
            cout << "Please create a school to continue \n"
                 << endl;
        }
        else
        {

            cout << "\nSelect a school among these to enroll as your first choice \n"
                 << endl;
            cout << "<------SCHOOLS------> \n"
                 << endl;
            index = 1;

            for (School Sch : seniorHighs)

            {
                cout << "-----" << index << "---" << Sch.getName() << endl;
                Sch.getCourses();
                cout << "\n"
                     << endl;
                index++;
            }

            cin >> schoolChoice;
            graduates[stdIndex].addSchool(1,
                                          seniorHighs[schoolChoice - 1]);

            cout << "Select a school to enroll as your second choice" << endl;
            cout << "<------SCHOOLS------>" << endl;
            index = 1;

            for (School Sch : seniorHighs)
            {
                cout << "-----" << index << "---" << Sch.getName() << endl;
                Sch.getCourses();
                index++;
                cout << "\n"
                     << endl;
            }

            cin >> schoolChoice;
            graduates[stdIndex].addSchool(2,
                                          seniorHighs[schoolChoice - 1]);
            cout << "Select a school to enroll as your third choice" << endl;
            cout << "<------SCHOOLS------>" << endl;
            index = 1;

            for (School Sch : seniorHighs)
            {
                cout << "-----" << index << "---" << Sch.getName() << endl;
                Sch.getCourses();
                index++;
            }

            cin >> schoolChoice;
            graduates[stdIndex].addSchool(3,
                                          seniorHighs[schoolChoice - 1]);
        }

        stdIndex++;
        numStudents++;

        goto start;

        break;

    case 'h':
        cout << "Enter school's name" << endl;
        // cin >> schoolName;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        getline(cin, schoolName);

        // sch = seniorHighs[0];
        // cout << "Students name" << graduates[stdIndex].getStudentDetails() << endl;

        cout << "Enter school's cutoff point " << endl;
        cin >> cutOff;

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "\nEnter the first course the school offers" << endl;
        getline(cin, schoolCourse1);

        cout << "Enter another course" << endl;
        getline(cin, schoolCourse2);

        seniorHighs.push_back(School(schoolName, cutOff, schoolCourse1, schoolCourse2));

        cout << "\n SUCCESSFFLLY CREATED SCHOOL:" << seniorHighs.back().getName() << endl;

        schIndex++;
        numSchools++;
        goto start;
        break;

    case 'd':

        cout << "<------STUDENTS------>" << endl;

        for (Student Std : graduates)
        {
            Std.getStudentDetails();
        }

        cout << "\n <------SCHOOLS------> \n"
             << endl;
        for (School Sch : seniorHighs)
        {
            cout << "------" << Sch.getName() << endl;
            cout << "\t CutOff Point: " << Sch.getCutOffPoint() << endl;

            Sch.getCourses();
        }

        cout << "\n"
             << endl;
        goto start;

        break;

    case 'r':

        cout << "<------PLACEMENTS RESULTS------>" << endl;

        if (graduates.empty())
        {
            cout << "Sorry please create a student first" << endl;
        }
        else
        {
            for (Student Std : graduates)
            {
                Std.enroll();
            }
        }

        cout << "\n"
             << endl;
        goto start;

        break;

    case 'q':
        break;

    default:
        cout << "Sorry couldnt process your input. Please try again" << endl;
        goto start;
        break;
    }
}

// Student Kofi("Ama");
// Kofi.addSubject("English", 89);
// Kofi.addSubject("Home Econs", 85);
// Kofi.addSubject("Mathematics", 85);
// Kofi.addSubject("French", 89);
// Kofi.addSubject("Social", 89);

// School Acs = School("Accra girls", 500);
// School Botwe = School("Mfantispim boys", 500);
// School Weygeyhey = School("Wesley Girls girls", 500);
// School KSTU = School("Kstu", 500);

// Kofi.addSchool(1, Acs);
// Kofi.addSchool(2, Botwe);
// Kofi.addSchool(3, Weygeyhey);
// Kofi.addSchool(4, KSTU);

// Kofi.getStudentDetails();
// // Kofi.displaySchoolChoices();
// cout << endl;
// Kofi.CalculateAverageScore();

// // // Kofi.getStudentDetails();
// Kofi.enroll();

// Kofi.addSubject("French", 90);

// no space
// cut off points
