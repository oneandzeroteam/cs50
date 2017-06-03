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
 
bool search(int value, int values[],int n){
    
   int low = 0;
   int high = n - 1;
   int mid = (low + high) / 2;

   while(low <= high){
       
       if(values[mid] == value)
            return true;
        else if (value < values[mid]){
            high = mid -1 ;
            mid = (low + high) / 2;

        }
        else if (value > values[mid]){
            low = mid + 1;
          mid = (low + high) / 2;
        }
        else
            break;
   }
   
   return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
   int tmp;
   for(int i = 0; i < n; i++){
       
       int smallestIndex = i;
       for(int j = i + 1; j < n ; j++){
           if(values[smallestIndex]>values[j])
                smallestIndex = j;
       }
       
       tmp = values[i];
       values[i] = values[smallestIndex];
       values[smallestIndex] = tmp;
   }
   return ;
}


    
