// Includes classes
#include "DiamondPrinter.cpp"
#include "RhombusPrinter.cpp"

// Allows terminal commands to be taken
int main (int argc, char** argv)
{
    // Reads and parses input from terminal
    std::string baseStr = argv[1];
    int baseNum = std::stoi(baseStr, nullptr, 10);

    // Instantiate pointer for Printer Derived Classes
    FigurePrinter * printer;


    /* TrianglePrinter */
    // Pointer points to new Triangle object
    printer = new TrianglePrinter(baseNum);

    // Formats/Prints title of shape, then prints shape
    std::cout << std::string (abs(baseNum + (baseNum/2) -1), ' ') << "The Triangle:\n";
    printer->printFigure();

    // Deallocates memory 
    delete printer;


    /* Diamond Printer */
    // Pointer points to new Diamond Object
    printer = new DiamondPrinter(baseNum);

    // Formats/Prints title of Shape, then prints shape
    std::cout << std::string (abs(baseNum + (baseNum/2) -1), ' ') << "The Diamond:\n";
    printer->printFigure();

    // Deallocates memory
    delete printer;


    /* Rhombus Printer */
    // Pointer points to new Rhombus Object
    printer = new RhombusPrinter(baseNum);

    // Formats/Prints title of shape, then prints shape
    std::cout << std::string (abs(baseNum + (baseNum/2) -1), ' ') << "The Rhombus:\n";
    printer->printFigure();

    // Deallocates memory
    delete printer;
    
}