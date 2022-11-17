#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

int PROCESS(int pid, double num1, double num2)
{
    if (pid == 1)
    {
        if (((num1 + num2) < 999999999999) && ((num1 + num2) > -999999999999))
        {
            printf("-> ");
            printf("%f\n\n", num1 + num2);
        }
        else
        {
            printf("-> ");
            printf("%g\n\n", num1 + num2);
        }
    }
    else if (pid == 2)
    {
        if (((num1 - num2) < 999999999999) && ((num1 - num2) > -999999999999))
        {
            printf("-> ");
            printf("%f\n\n", num1 - num2);
        }
        else
        {
            printf("-> ");
            printf("%g\n\n", num1 - num2);
        }
    }
    else if (pid == 3)
    {
        if (((num1 * num2) < 999999999999) && ((num1 * num2) > -999999999999))
        {
            printf("-> ");
            printf("%f\n\n", num1 * num2);
        }
        else
        {
            printf("-> ");
            printf("%g\n\n", num1 * num2);
        }
    }
    else if (pid == 4)
    {
        if (((num1 / num2) < 999999999999) && ((num1 / num2) > -999999999999))
        {
            printf("-> ");
            printf("%f\n\n", num1 / num2);
        }
        else
        {
            printf("-> ");
            printf("%g\n\n", num1 / num2);
        }
    }
    else if (pid == 5)
    {
        if (((num1 / num2 * 100.0) < 999999999999) && ((num1 / num2 * 100.0) > -999999999999))
        {
            printf("-> ");
            printf("%f%%\n\n", num1 / num2 * 100.0);
        }
        else
        {
            printf("-> ");
            printf("%g%%\n\n", num1 / num2 * 100.0);
        }
    }
    else if (pid == 6)
    {
        if (((pow(num1, num2)) < 999999999999) && ((pow(num1, num2)) > -999999999999))
        {
            printf("-> ");
            printf("%f\n\n", pow(num1, num2));
        }
        else
        {
            printf("-> ");
            printf("%g\n\n", pow(num1, num2));
        }
    }
    else
    {
        printf("Bug found !!");
    }
}