//
// Created by Amanda Tedesco on 2/18/21.
//

// Includes exception class
#include <exception>

// Creates simple DateException class as a derived class
struct DateException : public std::exception
{
    // Prints an error message if exception is thrown
    const char * what () const throw ()
    {
        return "Invalid Date. Try Again.";
    }
};
