/*
 * Filename: pa0.h
 * Author: Yuren Dong
 * Userid: cs30fiy
 * Description: Function prototypes and defines for PA0
 * Date: OCT 4
 * Sources of Help: None
 */

#ifndef PA0_H
#define PA0_H


/*
 * Constant values to be used in PA0
 */
#define SIZE 15                     // The size of the array
#define FIRST_NUM_TO_AVERAGE 5      // The numbers to average
#define SECOND_NUM_TO_AVERAGE 15
#define THIRD_NUM_TO_AVERAGE 32
#define FOURTH_NUM_TO_AVERAGE -2
 
void initArray( int array[], int length );
void printEveryOtherReversed( int array[], int length );
int findMax( int array[], int length );
int avg4( int a, int b, int c, int d );


#endif /* PA0_H */

