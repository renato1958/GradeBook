// Fig 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h
#include <iostream>
#include "GradeBook.h"
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
  :courseName(name)
{
  // empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name)
{
  courseName = name; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
  return courseName; // return object's courseName
} // end function getCourseName

// display a welcome message to the Gradebook user
void GradeBook::displayMessage() const
{
  // call getCourseName to get the courseName
  cout << "Welcome to the grade book for\n" << getCourseName()
       << "!" << endl;
} // end function displayMessage
