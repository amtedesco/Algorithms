/* DiamondPrinter Implementation Program */

// Includes DiamondPrinter Header for implementation of class
#include "DiamondPrinter.h"

// Overrides printFigure() from TrianglePrinter and FigurePrinter
void DiamondPrinter :: printFigure()
{
    // Calls both printsUp... and printDown for diamond
    printUpwardTriangle();
    printDownwardTriangle();
}

// Function to print top of diamond
void DiamondPrinter :: printUpwardTriangle()
{
    /* Retrieves baseNum from FigurePrinter class,
        Helps nested loops to determine how many stars
        and spaces to print (formats shape) */
    int n = getNum(), oddEve = n%2;

    // Prints ceiling (inputted int/2) -1 number of rows
    for (int rows = 1; rows < (int) ceil((double) n/2); rows++)           
    {
        /* Prints spaces before each line of stars. Number of
            spaces decrease with each line for upward triangle */
        for (int spaces = 0; spaces < (n*2) - rows; spaces++)       
            std::cout << " ";

        /* Prints stars on each line after spaces. Number of
            stars increase with each line for upward triangle */
        for (int stars = 0; stars < (2*rows)-oddEve; stars++)         
            std::cout << "*";

        /* Creates new line for next loop of spaces and stars*/
        std::cout << "\n";
    }  
        
}