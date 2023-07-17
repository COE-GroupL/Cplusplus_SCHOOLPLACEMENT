// this is an shs school placement application

#include "school.h"
#include "student.h"

int main()
{

    // JHS AccraJHS("ACCRA GIRLS JHS");
    // AccraJHS.displayCourses();

    // // AccraJHS.getName();

    // SHS PopeJohn("POPE JOHN SENIOR HIGH SCHOOL");

    Student Kofi("Kofi");
    Kofi.addSubject("French", 90);
    Kofi.addSubject("English", 85);

    School Acs = School("Accra girls");
    School Botwe = School("Mfantispim girls");
    School Weygeyhey = School("Wesley Girls girls");
    School KSTU = School("Kstu");

    Kofi.addSchool(1, Acs);
    Kofi.addSchool(2, Botwe);
    Kofi.addSchool(3, Weygeyhey);
    Kofi.addSchool(4, KSTU);

    Kofi.getStudentDetails();
    // Kofi.displaySchoolChoices();
    cout << endl; 
    Kofi.CalculateAverageScore();

    // // Kofi.getStudentDetails();

    // Kofi.addSubject("French", 90);

    return 0;
}