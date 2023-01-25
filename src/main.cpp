#include <iostream>
#include <cmath>

void ABOUT()
{
    std::cout << "\n";
    std::cout << "              ** CALCHARM CLI **             \n";
    std::cout << "       ~ Developed by Dwijottam Dutta ~      \n";
    std::cout << "              ~ Written in C++ ~             \n";
    std::cout << "                       +                     \n";
    std::cout << "CalCharm is a robust CLI calculator specially\n";
    std::cout << "         for programmers & CLI users         \n\n\n";
    std::cout << "* Developer:\n";
    std::cout << "  > Dwijottam Dutta\n\n";
    std::cout << "* Commands:\n";
    std::cout << "  > Addition:\n";
    std::cout << "  $ calcharm add <number> <number>\n";
    std::cout << "  > Subtraction:\n";
    std::cout << "  $ calcharm sub <number> <number>\n";
    std::cout << "  > Division:\n";
    std::cout << "  $ calcharm div <number> <number>\n";
    std::cout << "  > Multiplication:\n";
    std::cout << "  $ calcharm mul <number> <number>\n";
    std::cout << "  > Percentage:\n";
    std::cout << "  $ calcharm pct <value> <total>\n";
    std::cout << "  > Power:\n";
    std::cout << "  $ calcharm pow <number> <exponent>\n\n";
    std::cout << "* Github:\n";
    std::cout << "  https://github.com/Dwijottam-Dutta/CalCharm-CLI\n";
    std::cout << "  > Visit our Github Repository for any other\n    help or reporting bugs and crashes\n\n\n";
}

int main(int argc, char *argv[])
{

    std::string operation;
    long double num1, num2;

    if (argc == 1)
    {
        ABOUT();
    }
    else if (argc > 1 && argc < 5)
    {
        operation = argv[1];
        if (operation == "add")
        {

            num1 = std::stold(argv[2]);
            num2 = std::stold(argv[3]);
            std::cout << "--> " << num1 + num2 << "\n\n";
        }
        else if (operation == "sub")
        {

            num1 = std::stold(argv[2]);
            num2 = std::stold(argv[3]);
            std::cout << "--> " << num1 - num2 << "\n\n";
        }
        else if (operation == "mul")
        {

            num1 = std::stold(argv[2]);
            num2 = std::stold(argv[3]);
            std::cout << "--> " << num1 * num2 << "\n\n";
        }
        else if (operation == "div")
        {

            num1 = std::stold(argv[2]);
            num2 = std::stold(argv[3]);
            std::cout << "--> " << num1 / num2 << "\n\n";
        }
        else if (operation == "pct")
        {

            num1 = std::stold(argv[2]);
            num2 = std::stold(argv[3]);
            std::cout << "--> " << (num1 / num2) * 100 << "\n\n";
        }
        else if (operation == "pow")
        {

            num1 = std::stold(argv[2]);
            num2 = std::stold(argv[3]);
            std::cout << "--> " << pow(num1, num2) << "\n\n";
        }
        else if (operation == "about"){
            ABOUT();
        }
        else {
            printf("Invalid Operation **arg !!\n\n");
        }
    }
    else
    {
        printf("Too many command-line arguments!!\n\n");
    }
}
