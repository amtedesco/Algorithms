// Header Guard for DiamondPrinter Header
#ifndef DIAMONDPRINTER_H
#define DIAMONDPRINTER_H

// Include TrianglePrinter Class for polymorphism
#include "TrianglePrinter.cpp"

// Creates Derived Class for DiamondPrinter
class DiamondPrinter : public TrianglePrinter
{

    public:
        /* Constructor  and Destructor for DiamondPrinter, 
            uses TrianglePrinter */
        DiamondPrinter (int n): TrianglePrinter (n) {};
        ~DiamondPrinter(){};

        /* Pure Virtual function to print figures
            Overrides FigurePrinter */
        void printFigure();

    private:
        //Function to print upward triangle
        void printUpwardTriangle();
};

#endif //DIAMONDPRINTER_H