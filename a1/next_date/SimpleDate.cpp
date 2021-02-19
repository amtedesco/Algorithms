//
// Created by Amanda Tedesco on 2/18/21.cd
//

/* SimpleDate class implementation */

// Include class Header
#include "SimpleDate.h"

// Constructor for SimpleDate Object
SimpleDate :: SimpleDate(int month, int day, int year)
{
    //Assigns attributes to parameters
    this->month = month;
    this->day = day;
    this->year = year;
}

/* FUNCTIONS FOR TO_STRING FUNCTION */
// Returns the month format (mm) for to_string
string SimpleDate :: monthInt(void)
{
    //If month is one digit, insert 0 to front of string
    if (this->month < 10)
        return "0" + std::to_string(this->month);
        //If month is two digits, returns month string
    else
        return std::to_string(this->month);
}

// Returns the day format (dd) for to_string
string SimpleDate :: dayInt(void)
{
    //If day is one digit, insert 0 to front of string
    if (this->day < 10)
        return "0" + std::to_string(this->day);
        //If month is two digits, returns day string
    else
        return std::to_string(this->day);
}

// Returns the SimpleDate as a string (mm/dd/yyyy)
string SimpleDate :: toString(void)
{
    //returns month(mm)/day(dd)/year(yyyy) string
    return this->monthInt() + "/" + this->dayInt()
           + "/" + std::to_string(this->year);
}

/* FUNCTIONS FOR NEXT DAY PROCEDURE */
// Determines if year is a leap year
bool SimpleDate :: leapYear (void)
{
    /* If the year is divisible by 4,
        may be a leap year and continues */
    if ((this->year % 4) == 0)
    {
        /* If the year is divisible by 100,
        must be divisible by 400 to be a leap year */
        if (!(this->year % 100) && !(this->year % 400))
            return true;

            // If the year is not divisible by 100, it is a leap_year
        else if (this->year % 100)
            return true;

            // Returns false if it is divisible by 100 and not 400
        else
            return false;
    }

        // Returns false if it is not divisible by 4
    else
        return false;
}

/* Determines the length of the month based on
    month and leapyear() if needed*/
int SimpleDate :: monthLength (void)
{
    //Case numbers correspond with month int
    switch(this->month)
    {
        case 1:
            return 31;
        case 2:
            /* If it is a leap year, returns 29
            else, returns 28 */
            if (!(this->leapYear()))
                return 28;
            else
                return 29;;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        case 12:
            return 31;

            // Safety case if month is not 1-12
        default:
            return 0;
    }
}

// Formats date to the next day
SimpleDate SimpleDate :: nextDate (void)
{
    //Creates local variables to manipulate for next date
    int m = this->month, d = this->day, y = this->year;

    //If day is not the last day in the month, adds 1 to new day
    if (this->day < this->monthLength())
    {
        d = this->day + 1;
    }

        /* If it's last day in the month,
            determines if month is December */
    else
    {
        /* If month is not December,
            adds 1 to month and assigns 1 to day */
        if (this->month < 12)
        {
            m = this->month + 1;
            d = 1;
        }

            /* If month is December,
                assigns date to January 1, year+1 */
        else
        {
            m = 1;
            d = 1;
            y = this->year + 1;
        }
    }

    //Creates new SimpleDate Object for next date
    SimpleDate date = SimpleDate(m, d, y);
    return date;

}