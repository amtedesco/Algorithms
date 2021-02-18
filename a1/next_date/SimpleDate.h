//
// Created by Amanda Tedesco on 2/18/21.
//

// Header Guard
#ifndef SIMPLEDATE_H
#define SIMPLEDATE_H

//Include string for c++
#include <string>
using namespace std;

//Create SimpleDate Structure
class SimpleDate {

    private:
        //Creates private class attributes
        int month;
        int day;
        int year;

    public:
        //Creates public constructor
        SimpleDate (int month, int day, int year);

        //Creates public class functions
        string monthInt(void);
        string dayInt(void);
        string toString (void);
        bool leapYear (void);
        int monthLength (void);
        SimpleDate nextDate(void);

};

// End of Header Guard
#endif //SIMPLEDATE_H
