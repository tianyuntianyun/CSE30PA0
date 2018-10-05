/*
 * Filename: initArray.c
 * Author: Yuren Dong
 * Userid: cs30fiy
 * Description: Initialize an array with perfect squares starting from 0
 * Date: OCT 4
 * Sources of Help: None 
 */

/*
 * Function Name: initArray()
 * Function Prototype: void initArray( int array[], int length );
 * Description: Initializes values in an array to be perfect squares starting 
 *              from 0
 * Parameters: array - the array to initialize
 *             length - the length of the array
 * Side Effects: Initializes the values of the array
 * Error Conditions: None
 * Return Value: None
 */
void initArray( int array[], int length ) {
  int i = 0;

  while ( i < length ) {
    array[i] = i * i;
    i++;
  }
}
