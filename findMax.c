/*
 * Filename: findMax.c
 * Author: Yuren DOng
 * Userid: cs30fiy
 * Description: Find the maximum element in the array
 * Date: OCT 4
 * Sources of Help: None
 */

#include <stdio.h>
#include <limits.h>

/*
 * Function Name: findMax()
 * Function Prototype: int findMax( int array[], int length );
 * Description: Finds the maximum element in the array
 * Parameters: array - the array to find max from
 *             length - the length of the array
 * Error Conditions: None
 * Return Value: the max value of the array
 */
int findMax( int array[], int length ) {
  int max = INT_MIN;

  for (int i = 0; i < length; i++ ) {  
    if (array[i] > max) {
        max = array[i];
    }
  }
  return max;
}
