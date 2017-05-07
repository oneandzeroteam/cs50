/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm ( binary search )
    
    int frst = 0;
    int thrd = n-1;
    int scnd = (frst+thrd)/2;

    do
    {
        
        if ( value < values[scnd] )
        {
            thrd = scnd-1;
            scnd = (frst+thrd)/2;
        }
        
        else if ( value > values[scnd] )
        {
            frst = scnd+1;
            scnd = (frst+thrd)/2;
        }
        else
        {
            break;
        }
    }
    while ( frst != scnd || frst != thrd );
    
    if ( value == values[scnd] )
    {
        return true;
    }
    
    return false;
    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm ( bubble sort )
    int i, k;
    k = 0;
    do
    {
        for (i = 0; i < n-1 ; i++)
        {
            if(values[i] <= values[i+1])
            {
                i++;
                k = k+1;
            }
                
            else
            {
                int tmp;
                tmp = values[i];
                values[i] = values[i+1];
                values[i+1] = tmp;
                i++;
                k = 0;
            }
        }
    }
    while ( k < 2*n );

    return;
}

