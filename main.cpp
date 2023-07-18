// this is an shs school placement application

#include "school.h"
#include <iostream>
#include "student.h"
#include <string>

int main()
{
    cout << "Welcome to Ghana Education Service SHS PLACEMENT SYSTEM" << endl;

start:
    cout << "Press S to create a student" << endl;
    cout << "Press H to create a school" << endl;

    char input;
    cin >> input;
    string name = "";
    int Mathematics, Social, French, English, ICT;
    Student graduates[10];
    Student Newst;
    int index;

    string schoolName;
    double cutOff;
    School seniorHighs[10];
    School newSchool;

    switch (input)
    {
    case 'S':
        index = 0;
        Newst = graduates[index] ;
        cout << "Enter Students name" << endl;
        cin >> name;
        Newst.setName(name);
        
        goto start;

        // cout << "Enter the marks for the respective courses" << endl;

        // cout << "Mathematics ....> " << endl;
        // cin >> Mathematics;
        // Newst.addSubject("Mathematics", Mathematics);

        // cout << "Social ....> " << endl;
        // cin >> Social;
        // Newst.addSubject("Social", Social);

        // cout << "French ....> " << endl;
        // cin >> French;
        // Newst.addSubject("French", French);

        // cout << "English ....> " << endl;
        // cin >> English;
        // Newst.addSubject("English", English);

        // cout << "ICT ....> " << endl;
        // cin >> ICT;
        // Newst.addSubject("ICT", ICT);

        // cout << "Thanks for your input" << endl;
        Newst.getStudentDetails();

        break;

    case 'H':
        cout << "Enter schools name" << endl;
        cin >> schoolName;

        cout << "Enter school's cutoff point" << endl;
        cin >> cutOff;

        newSchool.setName(schoolName);
        newSchool.setCutOffPoint(cutOff);

        cout << "SUCCESSFFLLY CREATED " << newSchool.getName() << endl;

        break;

    default:
        break;
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

    return 0;
}
