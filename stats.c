
/**
 * @file stats.c
 * @brief main function and function declarations
 * @author Alperen Şahin
 * @date 31.08.2020
*/


#include <stdio.h>
#include "stats.h"
#define SIZE 40
int main(){
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
        114, 88,   45,  76, 123,  87,  25,  23,
        200, 122, 150, 90,   92,  87, 177, 244,
        201,   6,  12,  60,   8,   2,   5,  67,
        7,  87, 250, 230,  99,   3, 100,  90};
    
    print_statistics(test, SIZE);
    return 0;
}


void print_statistics(unsigned char *arr, unsigned int length){
    printf("minimum of array - %d\n",find_minimum(arr, length));
    printf("maximum of array - %d\n",find_maximum(arr, length));
    printf("mean    of array - %d\n",find_mean   (arr, length));
    printf("median  of array - %d\n",find_median (arr, length));
}

void print_array     (unsigned char *arr, unsigned int length){
    for (int i = 0; i < length; i++) {
        printf("%d-",arr[i]);
    }
}

unsigned char find_median     (unsigned char *arr, unsigned int length){
    int median_index = (length%2 == 0)?(length/2):((length+1)/2);
    int median = 0;
    unsigned char temp_arr[length];
    //init temp array
    for (int k = 0; k < length; k++) {
        temp_arr[k] = arr[k];
    }
    //sorting temp array
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length-i-1; j++) {
            if (temp_arr[j] < temp_arr[j+1] ) {
                unsigned char temp = temp_arr[j+1];
                temp_arr[j+1] = temp_arr[j];
                temp_arr[j]   = temp;
            }
        }
    }
    median = (median %2 == 0)?((temp_arr[median_index-1]+temp_arr[median_index])/2):(temp_arr[median_index]);
    return  median;
}

unsigned char find_mean       (unsigned char *arr, unsigned int length){
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += arr[i];
    }
    return total/length;
}

unsigned char find_maximum     (unsigned char *arr, unsigned int length){
    unsigned char temp_max = arr[0];
    for (int i = 1; i < length; i++) {
        temp_max = (arr[i] > temp_max)?(arr[i]):(temp_max);
    }
    return temp_max;
}
unsigned char  find_minimum    (unsigned char *arr, unsigned int length){
    unsigned char temp_min = arr[0];
    for (int i = 1; i < length; i++) {
        temp_min = (arr[i] < temp_min)?(arr[i]):(temp_min);
    }
    return temp_min;
}

void sort_array                 (unsigned char *arr, unsigned int length){
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length-i-1; j++) {
            if (arr[j] < arr[j+1] ) {
                unsigned char temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]   = temp;
            }
        }
    }
}

