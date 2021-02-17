#ifndef TRIANGLEPRINTER_H
#define TRIANGLEPRINTER_H

#include "FigurePrinter.h"

class TrianglePrinter : public FigurePrinter
{
    public:
        // Constructor for Triangle class
        TrianglePrinter (int n): FigurePrinter (n) {};

        // Pure Virtual function to print figures
        void printFigure();

    protected:
        // Function to print downward triangle
        void printDownwardTriangle();
};

#endif //TRIANGLEPRINTER_H