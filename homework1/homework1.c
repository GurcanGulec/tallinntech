#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, h, n, sum, between, value, result;

    // ask for N and if N is less than "0" and greater than "15", ask again.
    printf("Please enter N (Between 0-15) : ");
    scanf("%f", &n);

    while(n <= 0 || n > 15)
    {
        printf("N has to be between 1 and 15: ");
        scanf("%f", &n);
    }

    // ask for C and if it is less than "1", ask again.
    printf("Please enter C: ");
    scanf("%f", &c);

    while(c < 1)
    {
        printf("C has to be bigger than or equal to 1: ");
        scanf("%f", &c);
    }

    // ask for H and if H is less than "0", ask again.
    printf("Please enter H: ");
    scanf("%f", &h);

    while(h <= 0)
    {
        printf("H has to be bigger than 0: ");
        scanf("%f", &h);
    }

    // ask for A, also A has to be different than 0 for the function to work
    printf("Please enter A: ");
    scanf("%f", &a);

    if(a == 0)
    {
        printf("A has to be different than 0: ");
        scanf("%f", &a);
    }

    // calculate H+CH in a loop and increase the power of C
    for(int a = 0; a < n; a++)
    {
        between = pow(c,value)*h;
        value++;
    }

    // calculate the function
    result = (1 / sqrt(pow((a*between),2) - 1/a)) - (2 / (3*sqrt(5-pow((a*between),2))));
    
    if (result != result)
    {
        printf("Complex\n");
    }
    else if(result == INFINITY)
    {
        printf("Infinite\n");
    }
    else
    {
        printf("Result is: %f\n", result);
    }

    // check the result. if it is infinite print out "Infinite". if it is a complex number, print out "Complex"
    //if (result != result)
    //{
    //    printf("Complex");
    //}
    //else if(result == INFINITY)
    //{
    //    printf("Infinity");
    //}
    //else
    //{
    //    printf("Result is: %f", result);
    //}

    return 0;
    
}