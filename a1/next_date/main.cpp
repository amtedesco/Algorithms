//
// Created by Amanda Tedesco on 2/18/21.
//

/* INCLUDED FILES */
//Needed for cout
#include <iostream>

// Includes Classes
//Date class
#include "SimpleDate.cpp"
//DateException
#include "DateException.cpp"

// Procedure to check if date entered is valid
void validateInput (int month, int day, int year, SimpleDate date)
{
    //Checks if year is valid
    if (year < 1812 || year > 2030)
        throw DateException();

    //Checks if month is valid
    if (month < 1 || month > 12)
        throw DateException();

    //Checks if day is valid
    if (day < 1 || day > date.monthLength())
        throw DateException();

}

int main (int argc, char** argv)
{
    // Finds and parses the inputted date
    std::string date = argv[1];
    std::string monthstr = date.substr(0,2);
    std::string daystr = date.substr(3,2);
    std::string yearstr = date.substr (6,4);

    // Convertes the date strings into ints
    int month = std::stoi (monthstr, nullptr, 10);
    int day = std::stoi (daystr, nullptr, 10);
    int year = std::stoi (yearstr, nullptr, 10);

    //Creates new SimpleDate with inputted values
    SimpleDate newDay = SimpleDate(month, day, year);

    try
    {
        // Determines if the dates inputted are valid
        validateInput(month, day, year, newDay);
    }
    catch(DateException& e)
    {
        /* If DateException is thrown,
            catches it and outputs message */
        std::cout << e.what() << "\n";
    }

    // Formats new SimpleDate into a string and outputs it
    std::cout << newDay.toString() << '\n';

    // Calls nextDate procedure and assigns returned SimpleDate to object
    SimpleDate nextDay = newDay.nextDate();

    //Outputs next day SimpleDate as a string by calling toString()
    std::cout << nextDay.toString() << '\n';


}
