// Header Guard for TrianglePrinter Header
#ifndef TRIANGLEPRINTER_H
#define TRIANGLEPRINTER_H

// Includes FigurePrinter Class for polymorphism
#include "FigurePrinter.h"

// Creates Derived Class TrianglePrinter
class TrianglePrinter : public FigurePrinter
{
    public:
        // Constructor for TrianglePrinter, uses FigurePrinter
        TrianglePrinter (int n): FigurePrinter (n) {};
        ~TrianglePrinter(){};

        /* Pure Virtual function to print figures,
            Overrides FigurePrinter */
        void printFigure();

    protected:
        // Function to print downward triangle
        void printDownwardTriangle();
};

#endif //TRIANGLEPRINTER_H