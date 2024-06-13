//
//File for defining the members of a class with member functions and public or private variables.
//This is just a bunch of def/declarations to be transferred into the other files


//Private and member func, constructors all go in this file

#ifndef PA_3_COURSE_H
#define PA_3_COURSE_H

#include <string>
using namespace std;

class Course
{
private:
    string* students;
    int capacity;

public:
    Course(string courseName, int capacity);
    Course(const Course& course); //Copy constructor

    //Destructor
    ~Course();

    void addStudent(string name);
    void dropStudent(string name);
    void clear(); //library call

    string* getStudents() const;

    int enrolled;
    string courseName;
};


#endif //PA_3_COURSE_H
