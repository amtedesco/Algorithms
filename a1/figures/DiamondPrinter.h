#ifndef DIAMONDPRINTER_H
#define DIAMONDPRINTER_H

#include "TrianglePrinter.cpp"
using namespace std;

class DiamondPrinter : public TrianglePrinter
{
    public:
        // Constructor for DiamondPrinter
        DiamondPrinter (int n): TrianglePrinter (n) {};

        // Pure Virtual function to print figures
        void printFigure();

    private:
        void printUpwardTriangle();
};

#endif //DIAMONDPRINTER_H