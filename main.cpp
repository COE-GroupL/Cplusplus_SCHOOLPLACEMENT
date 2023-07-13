// this is an shs school placement application

#include "courses.h"
#include "school.h"
#include "student.h"

int main(){


    School AccraJHS("ACCRA GIRLS JHS");
    AccraJHS.displayCourses();

    // AccraJHS.getName();

    School WesleyGirls("WESLEY GIRLS SENIOR HIGH SCHOOL");

    Student Kofi("Paul", AccraJHS);

    Kofi.getStudentDetails();

    Kofi.enroll(WesleyGirls);

    return 0;
}