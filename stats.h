
/**
 * @file stats.h
 * @brief main function and function declarations
 * @author Alperen Şahin
 * @date 31.08.2020
 */

#ifndef header_h
#define header_h

/**
 * @brief Prints statistics of array in order of minimum, maximum, mean, median
 * @param arr           pointer to array
 * @param length    length of array
 */
void print_statistics(unsigned char *arr, unsigned int length);

/**
  @brief Prints array without sorting
  @param arr          pointer to array
  @param length   length of array
 */
void print_array     (unsigned char *arr, unsigned int length);

/**
 @brief Calculates median
 @param arr          pointer to array
 @param length   length of array
 @return median of array
 */
unsigned char find_median     (unsigned char *arr, unsigned int length);

/**
@brief Calculates mean
@param arr          pointer to array
@param length   length of array
@return mean of array
*/
unsigned char find_mean       (unsigned char *arr, unsigned int length);

/**
@brief Calculates maximum
@param arr          pointer to array
@param length   length of array
@return maximum of array
*/
unsigned char find_maximum     (unsigned char *arr, unsigned int length);

/**
@brief Calculates minimum
@param arr          pointer to array
@param length   length of array
@return minimum of array
*/
unsigned char  find_minimum    (unsigned char *arr, unsigned int length);

/**
@brief Sorts array by bubble sort algorithm
@param arr          pointer to array
@param length   length of array
*/
void sort_array                 (unsigned char *arr, unsigned int length);


#endif /* header_h */

#ifndef stats_h
#define stats_h


#endif /* stats_h */

