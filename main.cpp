// this is an shs school placement application

#include "school.h"
#include <iostream>
#include "student.h"
#include <vector>
#include <string>

int main()
{
    cout << "Welcome to Ghana Education Service SHS PLACEMENT SYSTEM" << endl;
    int numStudents = 0;
    int numSchools = 0;
    int stdIndex = 0;

    string name = "";
    int Mathematics, Social, French, English, ICT;

    vector<Student> graduates;
    Student Newst;

    string schoolName;
    double cutOff;
    vector<School> seniorHighs;
    School newSchool;
    int schIndex = 0;

    int index;
    int schoolChoice;

start:
    cout << "\n*********************************" << endl;
    cout << "** Press S to create a student **" << endl;
    cout << "** Press H to create a school **" << endl;
    cout << "** Press D to display all students and schools **"<< endl;
    cout << "** Press R to display the admission results so far **"
         << endl;
    cout << "** Press Q to quit the program **"
         << endl;
    cout << "********************************* \n" << endl;

    char input;
    cin >> input;

    switch (input)
    {
    case 's':
        // Newst = graduates[stdIndex];
        cout << "Enter Students name" << endl;
        cin >> name;
        graduates.push_back(Student(name));

        cout << "Enter the marks for the respective courses" << endl;

        cout << "Mathematics ....> " << endl;
        cin >> Mathematics;
        graduates[stdIndex].addSubject("Mathematics", Mathematics);

        cout << "Social ....> " << endl;
        cin >> Social;
        graduates[stdIndex].addSubject("Social", Social);

        cout << "French ....> " << endl;
        cin >> French;
        graduates[stdIndex].addSubject("French", French);

        cout << "English ....> " << endl;
        cin >> English;
        graduates[stdIndex].addSubject("English", English);

        cout << "ICT ....> " << endl;
        cin >> ICT;
        graduates[stdIndex].addSubject("ICT", ICT);

        cout << "Thanks for your input" << endl;

        if (seniorHighs.empty())
        {
            cout << "Please create a school to continue \n"
                 << endl;
        }
        else
        {

            cout << "Select a school to enroll as your first choice" << endl;
            cout << "<------SCHOOLS------>" << endl;
            index = 1;

            for (School Sch : seniorHighs)
            {
                cout << "-----" << index << "---" << Sch.getName() << endl;
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
                index++;
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
        cout << "Enter schools name" << endl;
        cin >> schoolName;

        // sch = seniorHighs[0];
        // cout << "Students name" << graduates[stdIndex].getStudentDetails() << endl;

        cout << "Enter school's cutoff point " << endl;
        cin >> cutOff;

        seniorHighs.push_back(School(schoolName, cutOff));

        cout << "SUCCESSFFLLY CREATED " << seniorHighs.back().getName() << endl;
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

        cout << "<------SCHOOLS------>" << endl;
        for (School Sch : seniorHighs)
        {
            cout << "------" << Sch.getName() << endl;
        }

        cout << "\n"
             << endl;
        goto start;

        break;

    case 'r':

        cout << "<------PLACEMENTS RECULTS------>" << endl;

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

    default:
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
