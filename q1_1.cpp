#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

enum SizeLevel { Short = 100, Average = 200, Tall = 300 };
enum LengthConverter{ cm = 1, m };
void SizeLevel(int convertedValue);

int main()
{
    while (true)
{
LengthConverter Converter;
int userInput, choice, convertedValue;

cout << "Enter " << cm << " to convert from cm to m" << endl;
cout << "Enter " << m << " to convert from m to cm" << endl;
cout << "Enter :";

cin >> choice;

switch (choice)
{

case cm:
cout << "Enter cm value : ";
cin >> userInput;
convertedValue = (userInput / 100.0);
cout << "m is " << convertedValue << endl;
SizeLevel(userInput);
break;

case m:
cout << "Please enter the m value : ";
cin >> userInput;
convertedValue = (userInput * 100.0);
cout << "cm is " << convertedValue << endl;
SizeLevel(convertedValue);
break;

default:
cout << "Invalid Option" << endl;
exit(0);
break;
}
}
}

void SizeLevel(int convertedValue)
{
string result;
convertedValue <= Short ? result = "Size is Short" : "";
convertedValue > Short && convertedValue <= Average ? result = "Size is Average" : "";
convertedValue > Average && convertedValue <= Tall ? result = "Size is Tall" : "";
convertedValue > Tall ? result = "Size is extra Tall" : "";
cout << result << endl;
}
