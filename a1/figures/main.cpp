//#include "TrianglePrinter.cpp"
#include "DiamondPrinter.cpp"
#include "RhombusPrinter.cpp"
#include <cmath>

int main (int argc, char** argv)
{
    std::string baseStr = argv[1];
    int baseNum = std::stoi(baseStr, nullptr, 10);

    std::cout << baseNum << "\n";
    FigurePrinter* tri = new TrianglePrinter(baseNum); 
    tri->printFigure();

    FigurePrinter* dia = new DiamondPrinter(baseNum);
    dia->printFigure();
    
}