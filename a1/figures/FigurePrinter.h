#ifndef FIGUREPRINTER_H
#define FIGUREPRINTER_H

#include <iostream>
using namespace std;

class FigurePrinter
{
    private:
        // Private attribute 
        int n; 

    public:
        // Constructor for FigurePrinter
        FigurePrinter (int num) {n = num;}

        // Accessor method for subclasses
        int getNum() {return n;}

        // Pure Virtual function to print figures
        virtual void printFigure() = 0;
};

#endif //FIGUREPRINTER_H