#ifndef RHOMBUSPRINTER_H
#define RHOMBUSPRINTER_H

#include "FigurePrinter.h"
using namespace std;

class RhombusPrinter : public FigurePrinter
{
    public:
        // Pure Virtual function to print figures
        void printFigure()
        {
            int n = getNum();
            for ( int i = 0 ; i < (n/2) ; i++)           
            {   

                for (int spaces = 0; spaces <(2*n-(i*2)); spaces++)       
                    std::cout << " ";

                for (int stars = 0; stars < n; stars++)         
                    std::cout << "*";

                std::cout << "\n";
            }
        }
};

#endif //DIAMONDPRINTER_H