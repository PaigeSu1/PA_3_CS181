/*
* # Author: Paige Su
# BannerID: 001395655
# Course: CS 181
# Assignment: PA3
# Date Assigned: Friday, February 9, 2024
# Date/Time Due: Friday, February 23, 2024 -- 11:55 pm
# Description: This program will exercise Object-Oriented concepts with C++.
# Certification of Authenticity:
 I certify that this assignment is entirely my own work.
 */


/*Pre-Planing
 * File::Course.h
 * ***********************************************
 * Name of Class is course
 *Private Variables :
 *  string courseName;
 *  string students* as a pointer for an array of students who take that course
 *  int numberOfStudents; will be initialized to zero
 *  int capacity; Max # of students allowed in that course.
 *
 * Public:
 * Constructor: courseName, string&, capacity int)
 * Deconstruct: course()
 **************************************************************
 * File::Course.ccp
 * Member functions
 * string getCourseName() const
 * { return courseName}
 *
 * void addStudent(name, string&)
 *{Adds a new student to the course}
 *
 * void dropStudent(name, string&)
 * {Drops a student from the course)
 *
 * void getStudents() const
 * {Return array of students in that class}
 *
 * int getNumberOfStudents() const
 * {Returns the number of students that are in the course}
 *************************************************************
 * File:: Main
 * make a course object
 *
 * Hard code the students into the program
 * call 3 add students func
 * call 1 drop student func
 *
 * Print the name of the students that are enrolled in the course
 *
 *
 */
#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

int main()
{
    Course course("Computer Science", 2);

    course.addStudent("Katie");
    course.addStudent("Bill");
    course.addStudent("Alex");

    course.dropStudent("Bill");

    //Fix this part//
    cout << "Students enrolled in " << course.courseName << ":\n";
    string* students = course.getStudents();
    for (int i = 0; i < course.enrolled; ++i) {
        cout << students[i] << endl;
    }

    return 0;
}
