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
 * @file stats.h
 * @brief Header File for stats.c
 *
 * Contains Function declarations used in stats.c
 *
 * @author Paul Varghese
 * @date 17/02/2018
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief Prints Given Array
 *
 * Prints directly, the given array
 *
 * @param *ptrarray Pointer to the input array
 * @param arraysize Size of the input array
 *
 * @return Returns None
 */
static void print_array(unsigned char *ptrarray, unsigned int arraysize);

/**
 * @brief Function prints all statistical parameters of array
 *
 * Prints Mean, Median, minimimum and maximum of input array.
 *
 * @param *ptrarray Pointer to the input array
 * @param arraysize Size of the input array
 * @param min value in array
 * @param max value in array
 * @param mean
 * @param median 
 *
 * @return Return None
 */
static void print_statistics(unsigned char *ptrarray, unsigned int arraysize, unsigned char min, unsigned char max, unsigned char mean, unsigned char median);

/**
 * @brief Function calculates mean of the array
 *
 * Calculates mean of the input array and returns it.
 *
 * @param *ptrarray Pointer to the input array
 * @param arraysize Size of the input array
 *
 * @return Returns Mean
 */
static unsigned char find_mean(unsigned char *ptrarray, unsigned int arraysize);

/**
 * @brief Function calculates median of the array
 *
 * Calculates median of the input array and returns it.
 *
 * @param *ptrarray Pointer to the input array
 * @param arraysize Size of the input array
 *
 * @return Returns Median
 */
static unsigned char find_median(unsigned char *ptrarray, unsigned int arraysize);

/**
 * @brief Function calculates minimum of the array
 *
 * Calculates minimum of the input array and returns it.
 *
 * @param *ptrarray Pointer to the input array
 * @param arraysize Size of the input array
 *
 * @return Returns Minimum
 */
static unsigned char find_minimum(unsigned char *ptrarray, unsigned int arraysize);

/**
 * @brief Function calculates maximum of the array
 *
 * Calculates maximum of the input array and returns it.
 *
 * @param *ptrarray Pointer to the input array
 * @param arraysize Size of the input array
 *
 * @return Returns Maximum
 */
static unsigned char find_maximum(unsigned char *ptrarray, unsigned int arraysize);

/**
 * @brief Function sorts the input array.
 *
 * Given an array of data and a length, sorts the array from largest to smallest. 
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value).
 *
 * @param *ptrarray Pointer to the input array
 * @param arraysize Size of the input array
 *
 * @return Returns pointer to sorted array.
 */
static unsigned char *sort_array(unsigned char *ptrarray, unsigned int arraysize);




#endif /* __STATS_H__ */
