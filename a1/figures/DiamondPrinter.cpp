#include <iostream>
#include "DiamondPrinter.h"

void DiamondPrinter :: printFigure()
{
    printUpwardTriangle();
    printDownwardTriangle();
}

void DiamondPrinter :: printUpwardTriangle()
{
    int n = getNum();
    
    if(n%2)
    {
        for ( int i = 0 ; i < (n/2)+1 ; i++)           
        {

            for (int spaces = 0; spaces <(2*n-i); spaces++)       
                std::cout << " ";

            for (int stars = 0; stars < 2*i-1; stars++)         
                std::cout << "*";

            std::cout << "\n";
        }  
    }
    else
    {
        for ( int i = 0 ; i < (n/2) ; i++)           
        {

            for (int spaces = 0; spaces < (2*n -i); spaces++)       
                std::cout << " ";

            for (int stars = 0; stars < 2*i; stars++)         
                std::cout << "*";

            std::cout << "\n";
        }
    }
    
}