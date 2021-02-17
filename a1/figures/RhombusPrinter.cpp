/* RhombusPrinter Implementation Program */

/* Prints a rhombus by calling on printRhombus() in overriden 
    printFigure(). The rhombus is printed with the width the 
    same as the number inputted from terminal and the height 
    is the ceiling of the inputted number from terminal/2. */

// Includes RhombusPrinter Header for implementation of class
#include "RhombusPrinter.h"

// Overrides printFigure() from FigurePrinter
void RhombusPrinter :: printFigure()
{
    // Calls printRhombus
    printRhombus();
}
        
// Function to print rhombus
void RhombusPrinter :: printRhombus()
{
    /* Retrieves baseNum from FigurePrinter,
        Helps nested loops to determine how many stars
        and spaces to print (formats shape) */
    int n = getNum();

    // Prints ceiling (inputted int/2) number of rows
    for (int rows = 0 ; rows < (int)ceil((double) n/2) ; rows++)           
    {   
        /* Prints spaces before each line of stars. Number of 
            spaces decrease with each line for rhombus shape */
        for (int spaces = 0; spaces <(2*n-(rows*2)); spaces++)       
            std::cout << " ";

        /* Prints stars on each line after spaces. Number of
            stars remain consistent for rhombus shape */
        for (int stars = 0; stars < n; stars++)         
            std::cout << "*"; 

        /* Creates new line for next loop of spaces and stars */
        std::cout << "\n";
    }
}
        