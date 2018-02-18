/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <Premliminary Data Analytics>
 *
 * <For finding mean, median, maximum and maximum of the given character array. To sort and print the array.>
 *
 * @author <Paul Perumattathu>
 * @date <16 Feb 2018>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char *ptrarray = test;
  unsigned int arraysize = SIZE;
  unsigned char mean = 0;
  unsigned char median = 0;
  unsigned char max = 0;
  unsigned char min = 0;
  unsigned char *sortedarray;
  
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

/*Function Definitions*/
static void  print_array(unsigned char *ptrarray, unsigned int arraysize)
{
	
}

static void print_statistics(unsigned char *ptrarray, unsigned int arraysize, unsigned char min, unsigned char max, unsigned char mean, unsigned char median)
{
	
}

static unsigned char find_mean(unsigned char *ptrarray, unsigned int arraysize)
{	
	return mean;
}

static unsigned char find_median(unsigned char *ptrsortedarray, unsigned int arraysize)
{	
	return median;
}

static unsigned char *sort_array(unsigned char *ptrarray, unsigned int arraysize)
{
	return sortedarray;
}

static unsigned char find_minimum(unsigned char *ptrarray, unsigned int arraysize)
{
	return min;
}

static unsigned char find_maximum(unsigned char *ptrarray, unsigned int arraysize)
{	
	return max;
}

