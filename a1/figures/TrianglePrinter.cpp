
#include <iostream>
#include "TrianglePrinter.h"

void TrianglePrinter :: printFigure()
{
    printDownwardTriangle();
}

void TrianglePrinter :: printDownwardTriangle()
{
    int n = getNum();
    
    if(n%2)
    {
        for (int i = ((n+1)/2); i >= 0; i--)
        {

            for (int spaces = 0; spaces < (n * 2 - i); spaces++)
                std::cout << " ";

            for (int stars = 0; stars < (2*i)-1; stars++)          
                std::cout << "*" ;

            std::cout << '\n';
        }
    }
    else
    {
        for (int i = (n/2); i > 0; i--)
        {

            for (int spaces = 0; spaces < (n * 2 - i); spaces++)
                std::cout << " ";

            for (int stars = 0; stars < 2*i; stars++)          
                std::cout << "*" ;

            std::cout << '\n';
        }
    }
    
}
