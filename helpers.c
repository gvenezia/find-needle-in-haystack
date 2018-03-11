/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // Verify that the limit is positive
    if (n < 1)
    {
        return false;
    }

    int beginning = 0;
    int end = n;

// Binary search
    while (beginning <= end)
    {
        // check for every condition (==, <, >) and update beginning and end values accordingly
        if ( value == values[(end + beginning)/2] )
        {
            return true;
        }
        else if ( value < values[( (end + beginning) / 2)] )
        {
            end = ((end + beginning) / 2) - 1;
        }
        else
        {
            beginning = ((end + beginning) / 2) + 1;
        }
    }

    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // Use selection sort or bubble sort in O(n^2)

    // bubble sort
    bool change = false;

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < (n - j); i++)
        {
            if (values[i] > values[i + 1])
            {
                // Switches the values
                values[i] = values[i] - values[i + 1];
                values[i + 1] = values[i + 1] + values[i];
                values[i] = values[i + 1] - values[i];

                change = true;
            }
        }

        if (change == false)
        {
            break;
        }
    }

    return;
}
