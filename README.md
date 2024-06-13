Name of Project: Programming Assignment #3 (PA3)

Complete Assignment in C++ given an UML Diagram 

Suppose you need to process course information. Each course has a name and a few
students who take the course. You should be able to add/drop a student to/from the course.

The following Figure shows you can use a class to model the courses.
    
    **course**      //The name of the coure
    ---------------------------------------------------------------------------------------------------------------------------------
    -courseName: string          //An array of students who take the course. students is a pointer for the array.
    -students: string*       
    
    -numberOfStudents: int      //The number of students (default: 0).
    -capacity: int              //The maximum number of students allowed for the course.
    ----------------------------------------------------------------------------------------------------------------------------------
    +Course(courseName: string&, capacity: int)   //Creates a Course with the specified name and maximum number of students allowed

    +~Course()                                    //Destructor
    +getCourseName(): string const                //Returns the course name.
    +addStudent(name: string&): void              //Adds a new student to the course
    +dropStudent(name: string&) void              //Drops a student from the course.
    +getStudents(): string* const                 //Returns the array of students for the course.
    +getNumberOfStudents(): int const             //Returns the number of students for the course.
    ---------------------------------------------------------------------------------------------------------------------------------

The Course class models the courses. A Course object can be created using the constructor 
Course (string courseName, int capacity) by passing a course name and the maximum 
number of students allowed.

  You can add a student to the course using the addStudent(string name) function 
  
  drop a student from the course using the dropStudent(string name) function
  
  return all the students for the course using the getStudents() function

And do the followings:

    ▪ When adding a new student to the course, if the array capacity is exceeded, increase 
    the array size by creating a new larger array and copying the contents of the current 
    array to it.
    
    ▪ Implement the dropStudent function.
    
    ▪ Add a new function named clear() that removes all students from the course.
    
    ▪ Implement the destructor and copy constructor to perform a deep copy in the class.
  
Write a C++ program that creates a course, adds three students, removes one, and
displays the students in the course.

*Importation Note 
  -This was made using CLion IDE 
  - courseName, numberOfStudents member variables are private, but declared them public.
    (This was a bug when declared private would break the whole program, still looking for a solution, everything else works as intended.)
