// Fig. 3.1: fig03_01.cpp
// Define class GradeBook with a member function defineMessage,
// create a GradeBook object, and call its displayMessage function.
#include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
  // function that displays a welcome message to the GradeBook user
  void displayMessage() const
  {
    cout << "Welcome to the Grade Book!" << endl;
  } // end function displayMessage
}; // end class GradeBook

// function main begins program execution
int main()
{
  GradeBook myGradeBook; // create a GradeBook object named myGradeBook
  myGradeBook.displayMessage(); // call object's displayMessage function
} // end main
