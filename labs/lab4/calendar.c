/**
 * File: calendar.c
 * Author Gurcan Gulec
 * Created: 19 October 2016
 * Last Edit: 20 October 2016
 *
 * Description: Gregorian calendar thing.
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int date;
    int leap = 0;
    int m1[7] = {1, 3, 5, 7, 8, 10, 12}; 

    printf("Enter a date(DDMMYYY): ");
    scanf("%d", &date);

    if(date < 0)
    {
        printf("Date cannot be minus: ");
        scanf("%d", &date);
    }

    // finding the year
    int year = date % 10000;
    
    // finding the month
    int month = ((date % 1000000) - year) / 10000;

    // finding the day
    int day = ((date % 100000000) - month * 10000 - year) / 1000000;

    printf("Day   = %d\n",day);
    printf("Month = %d\n",month);
    printf("Year  = %d\n",year);

    if(date <= 0)
    {
        printf("Date not valid\n");
        return 0;
    }

    // month cannot be bigger than 12
    if(month > 12 || month <= 0)
    {
        printf("Date not valid\n");
        return 0;
    }

    // checking the months that has 31 days and 30 days and decide if it is valid
    for(int a = 0; a < 7; a++)
    {
        if(month == m1[a])
        {
            if(day > 31)
            {
                printf("Date not valid\n");
                return 0;
            }
        }
        else
        {
            if(day > 30)
            {
                printf("Date not valid\n");
                return 0;
            }
        }
    }

    // deciding leap years
    if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            leap = 1;
        }
        else
        {
            leap = 0;
        }
    }
    else
    {
       if(year % 4 == 0)
       {
           leap = 1;
       }
       else
       {
           leap = 0;
       }

    }

    // checking february
    if(month == 2)
    {
        if(leap == 1)
        {
            if(day > 29)
            {
                printf("Date not valid\n");
                return 0;
            }
        }
        else
        {
            if(day > 28)
            {
                printf("Date not valid\n");
                return 0;
            }
        }
    }

    printf("Date is valid\n");
    return 0;

}
