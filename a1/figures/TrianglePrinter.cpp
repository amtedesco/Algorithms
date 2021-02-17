/* TrianglePrinter Implementation Program */

// Includes TrianglePrinter Header for implementation of class
#include "TrianglePrinter.h"

// Overrides printFigure() from FigurePrinter
void TrianglePrinter :: printFigure()
{
    // Calls printDownwardTriangle for triangle
    printDownwardTriangle();
}

// Function to print upside-down triangle
void TrianglePrinter :: printDownwardTriangle()
{
    /* Retrieves baseNum from FigurePrinter class,
        Helps nested loops to determine how many stars
        and spaces to print (formats shape) */
    int n = getNum(), oddEve = n%2;
    
    // Prints ceiling (inputted int/2) number of rows
    for (int rows = (int) ceil((double) n/2);rows > 0; rows--)
    {
        /* Prints spaces before each line of stars. Number of
            spaces increase with each line for downward triangle */
        for (int spaces = 0; spaces < (n * 2 - rows); spaces++)
            std::cout << " ";

        /* Prints stars on each line after spaces. Number of
            stars decrease with each line for downward triangle */
        for (int stars = 0; stars < (2*rows)-oddEve; stars++)          
            std::cout << "*" ;

        /* Creates new line for next loop of spaces and stars*/
        std::cout << '\n';
    }
    
}
