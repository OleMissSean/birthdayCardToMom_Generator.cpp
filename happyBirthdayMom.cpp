/*
Sean Staz
CSC 2134
Program Happy Birthday Mom
This program will tell someone's mother Happy Birthay with asterisks as a border.
*/

#include <iostream>
#include <string>

using namespace std; 


const string LINE = "************************";  // Produces a line
const string FONT1 = "* !Happy Birthday Mom! *";
const string FONT2 = "* !I Love You!         *";
int main ()
{
  string lineRow;            // A line
  
  // Create a black-white row by concatenating the basic strings
  lineRow = LINE;
                          
  cout << lineRow << endl;
  cout << FONT1 << endl;
  cout << FONT2 << endl;
  cout << lineRow << endl;
  

  return 0;                  
}      
