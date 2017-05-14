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
    for(int i = 0 ; i < n ; i++) {
        if(value == values[i]) {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int counter[65536] = {0};
    
    for(int i = 0 ; i < n ; i++) {
        counter[values[i] - 1]++;
    }
    
    int i = 0;
    for(int j = 0 ; j < 65536 ; j++) {
        for(int k = 0 ; k < counter[j] ; k++) {
            values[i] = j + 1;
            i++;
        }
    }
}
