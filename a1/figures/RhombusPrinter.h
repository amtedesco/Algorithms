// Header Guard for RhombusPrinter Header
#ifndef RHOMBUSPRINTER_H
#define RHOMBUSPRINTER_H

// Include FigurePrinter Class for polymorphism
#include "FigurePrinter.h"

// Creates Derived Class for RhombusPrinter
class RhombusPrinter : public FigurePrinter
{
    public:
        /* Constructor and Destructor for RhombusPrinter, 
            uses FigurePrinter */
        RhombusPrinter (int n): FigurePrinter (n) {};
        ~RhombusPrinter(){};

        /* Pure Virtual function to print figures,
            Overrides FigurePrinter */
        void printFigure();

        // Function to print rhombus
        void printRhombus();
};

#endif //DIAMONDPRINTER_H