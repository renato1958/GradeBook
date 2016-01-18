// Fig. 3.7: fig03_07.cpp
// Instantiating multiple objects of the GradeBook and using
// the GradeBook constructor to specify the course name
// when each GradeBook object is created.
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
  // constructor initializes courseName with string supplied as argument
  explicit GradeBook(string name)
    :courseName(name)
  {
    // empty body
  } // end GradeBook constructor

  // function to set the course name
  void setCourseName(string name)
  {
    courseName = name; // store the course name in the object
  } // end function setCourseName

  // function to get the course name
  string getCourseName() const
  {
    return courseName; // return object's courseName
  } // end function getCourseName

  // display a welcome message to the GradeBook user
  void displayMessage() const
  {
    // call getCourseName to get the courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
	 << "!" << endl;
  }  // end function displayMessage
private:
  string courseName; // course name for this GradeBook
}; // end class GradeBook

// function main begins program execution
int main()
{
  // create two GradeBook objects;
  GradeBook gradeBook1("CS101 Introduction to C++ Programming");
  GradeBook gradeBook2("CS102 Data structures in C++");

  // display initial value of courseName for each GradeBook
  cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
       << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
       << endl;
} // end main
