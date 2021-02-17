// Header Guard for FigurePrinter Header
#ifndef FIGUREPRINTER_H
#define FIGUREPRINTER_H

// Includes classes
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Creates Abstract class FigurePrinter
class FigurePrinter
{
    private:
        // Private attribute 
        int n; 

    public:
        // Constructor and Destructor for FigurePrinter
        FigurePrinter (int num) {n = num;}
        virtual ~FigurePrinter() = 0;

        // Accessor method for subclasses
        int getNum() {return n;}

        // Pure Virtual function to print figures
        virtual void printFigure() = 0;
};

// Deconstructor implementation
FigurePrinter :: ~FigurePrinter(){}

// End of Header
#endif //FIGUREPRINTER_H