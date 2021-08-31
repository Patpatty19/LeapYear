#include <iostream>
#include <string>

using namespace std; 

int main(int argc, char** argv) {
   
   bool leapYear;
   int Year;

   cout << "Type a year. ";
   cin >> Year;

   int isleapYear = Year % 4 % 100 % 400;
   switch (isleapYear) {
   
   case 0:
    cout << "This is a leap year. ";
    leapYear = true;
	break;
   
   default:
    cout << "This is Not a leap year. ";
    leapYear = false;
    break;

	}
}
