#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./header/process.h"
#include "./header/about.h"

int main(int argc, char *argv[])
{

    char *operation;
    double num1, num2;
    char *ptr, *ptr_two;

    if (argc == 1)
    {
        ABOUT();
    }
    else if (argc > 1 && argc < 5)
    {
        operation = argv[1];
        if (strcmp(operation, "add") == 0)
        {

            num1 = strtod(argv[2], &ptr);
            num2 = strtod(argv[3], &ptr_two);
            PROCESS(1, num1, num2);
        }
        else if (strcmp(operation, "sub") == 0)
        {

            num1 = strtod(argv[2], &ptr);
            num2 = strtod(argv[3], &ptr_two);
            PROCESS(2, num1, num2);
        }
        else if (strcmp(operation, "mul") == 0)
        {

            num1 = strtod(argv[2], &ptr);
            num2 = strtod(argv[3], &ptr_two);
            PROCESS(3, num1, num2);
        }
        else if (strcmp(operation, "div") == 0)
        {

            num1 = strtod(argv[2], &ptr);
            num2 = strtod(argv[3], &ptr_two);
            PROCESS(4, num1, num2);
        }
        else if (strcmp(operation, "pct") == 0)
        {
            // HERE, num1 = number & num2 = exponent
            num1 = strtod(argv[2], &ptr);
            num2 = strtod(argv[3], &ptr_two);
            PROCESS(5, num1, num2);
        }
        else if (strcmp(operation, "pow") == 0)
        {
            // HERE, num1 = number & num2 = exponent
            num1 = strtod(argv[2], &ptr);
            num2 = strtod(argv[3], &ptr_two);
            PROCESS(6, num1, num2);
        }
        else
        {
            printf("Invalid Argument !!\n\n");
        }
        
    }
    else
    {
        printf("Too many command-line arguments!!\n\n");
    }
    

    return 0;
}
