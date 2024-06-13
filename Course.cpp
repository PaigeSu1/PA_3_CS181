//
// This is where all the change and moving data will happen
// this is where the functions will ise the :: operation for each of there heading
//

#include "Course.h"
#include <iostream>
#include <string>
#include <cmath>
#include <utility>
using namespace std;

 //The 3 objs that are being passed in, creates name and max students allowed
Course::Course(string courseName, int capacity) : courseName(std::move(courseName)), capacity(capacity), enrolled(0)
{
    //makes a new array when the student class list is full
    students = new string[capacity];
}

Course::Course(const Course& course) : courseName(course.courseName), capacity(course.capacity), enrolled(course.enrolled)
{
    //go through the list and see what students are enrolled within this class
    students = new string[capacity];
    for (int i = 0; i < enrolled; ++i){
        students[i] = course.students[i];
    }
}

//Deconstruct
Course::~Course()
{
    delete[] students;
}


//Increasing the array capacity for enrollment in class by making a larger new array.
void Course::addStudent(string name)
{
    if(enrolled >= capacity){
        int newCapacity = capacity *2;
        string* newStudents = new string[newCapacity];
        for(int i = 0; i < enrolled; ++i){
            newStudents[i] = students[i]; //copies and add all the data into a new list
        }
        delete[] students;
        students = newStudents;
        capacity = newCapacity;
    }
    students[enrolled++] = name; //updates that enrollment list
}


void Course::dropStudent(string name)
{
    for (int i = 0; i < enrolled; ++i){
        //if students name is in list
        if(students[i] == name){
            for(int j = i; j < enrolled - 1; ++j){
                students[j] = students[j+1];
            }
            enrolled--;
            return;
        }
    }
}


void Course::clear()
{
    delete[] students;
    capacity = 1; // Reset capacity to default
    enrolled = 0; // Reset enrolled students count
    students = new string[capacity];
}

string* Course::getStudents() const
{
    return students;
}
