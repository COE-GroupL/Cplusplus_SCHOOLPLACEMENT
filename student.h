#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <utility>

#include "school.h"

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
class Student
{
private:
    string name = "";
    std::vector<std::pair<std::string, int>> grades;
    std::vector<std::pair<int, School>> schoolChoices;

    // School school;

public:
    Student(){

    };
    Student(string Name)
    {
        name = Name;
    }

    void addSubject(const std::string &subject, int mark)
    {
        grades.emplace_back(subject, mark);
        // cout << "Adding " << subject << " : " << mark << endl;
    }

    void displaygrades() const
    {
        for (const auto &subject : grades)
        {
            std::cout << "Subject: " << subject.first << ", Mark: " << subject.second << std::endl;
        }
    }

    void CalculateAverageScore() const

    {
        int score = 0;
        for (const auto &subject : grades)
        {
            score += subject.second;
        }
        cout << score << " is his average score" << endl;
    }

    void addSchool(int number, const School &school)
    {
        schoolChoices.emplace_back(number, school);
        // cout << "Adding " << school.getName() << endl;
    }

    void displaySchoolChoices() const
    {
        for (const auto &choice : schoolChoices)
        {
            std::cout << "Rank: " << choice.first << ", Name: " << choice.second.getName() << std::endl;
        }
    }

    void getStudentDetails()
    {
        cout << "Student: " << name << endl;
        cout << "Grades: \n"
             << endl;

        displaygrades();
        cout << "Schools: \n"
             << endl;

        displaySchoolChoices();

        // cout << "School: " << school.getName() << endl;
        // displaygrades();
    }
};

#endif // STUDENT_H
