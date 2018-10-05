/*
 * Filename: printEveryOtherReversed.c
 * Author: Yuren Dong
 * Userid: cs30fiy
 * Description: Print out an array in reverse order
 * Date: OCT 4
 * Sources of Help: None
 */

#include <stdio.h>

/*
 * Function Name: printEveryOtherReversed()
 * Function Prototype: void printReversed( int array[], int length );
 * Description: Prints out every other element in an array in reverse order
 *              (starts printing from the last element)
 * Parameters: array - the array to print
 *             length - the length of the array
 * Side Effects: Prints out the array in reverse order to stdout
 * Error Conditions: None
 * Return Value: None
 */
void printEveryOtherReversed( int array[], int length ) {
    int i;

    for ( i = length - 1; i >=  0; i-=2 ) {  
        printf( "%d\n", array[i] );
    }
}
