#include <iostream>
#include<string>
#include<stdlib.h>

using namespace std;

void SizeLevel(int convertedValue);

int main()
{
    while (true)
{
int userInput, choice, convertedValue;

cout << "Enter 1 to convert from cm to m" << endl;
cout << "Enter 2 to convert from m to cm" << endl;
cout << "Enter :";

cin >> choice;

switch (choice)
{

case 1:
cout << "Enter the cm value : ";
cin >> userInput;
convertedValue = (userInput /100.0);
cout << "m is " << convertedValue << endl;
SizeLevel(userInput);
break;

case 2:
cout << "Enter the m value : ";
cin >> userInput;
convertedValue = (userInput *100.0);
cout << "cm is " << convertedValue << endl;
SizeLevel(convertedValue);
break;

default:
cout << "Invalid" << endl;
exit(0);
break;
}
}
}

void SizeLevel(int convertedValue)
{
string result;
convertedValue <= 100 ? result = "Size is Short" : "";
convertedValue > 100 && convertedValue <= 200 ? result = "Size is Average" : "";
convertedValue > 200 && convertedValue <= 300 ? result = "Size is Large" : "";
convertedValue > 300 ? result = "Size is Giant" : "";
cout << result << endl;
}
