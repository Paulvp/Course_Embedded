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
  print_array(ptrarray, arraysize);
  min = find_minimum(ptrarray, arraysize);
  max = find_maximum(ptrarray, arraysize);
  mean = find_mean(ptrarray, arraysize);
  sortedarray = sort_array(ptrarray, arraysize);
  median = find_median(ptrarray, arraysize);
  print_statistics(ptrarray, arraysize,min,max,mean,median);
  print_array(sortedarray, arraysize);
  
}

/* Add other Implementation File Code Here */

/*Function Definitions*/
static void  print_array(unsigned char *ptrarray, unsigned int arraysize)
{
	unsigned char printarray[SIZE];
	printf("\n");
	for(int i=0; i<arraysize; i++)
	{
		printarray[i] = *ptrarray;
		ptrarray++;
	}
	
	for(int i=0; i<arraysize; i++)
	{
		printf("  %d", printarray[i]);
	}
}

static void print_statistics(unsigned char *ptrarray, unsigned int arraysize, unsigned char min, unsigned char max, unsigned char mean, unsigned char median)
{
	printf("\nMean = %d", mean);
	printf("\nMedian = %d", median);
	printf("\nMinimum = %d", min);
	printf("\nMaximum = %d", max);
}

static unsigned char find_mean(unsigned char *ptrarray, unsigned int arraysize)
{
	unsigned char sum;
	unsigned char mean;
	
	for(int i=0; i<arraysize; i++)
	{
		sum += *ptrarray;
		ptrarray++;
	}
	
	mean = sum/arraysize;
	
	return mean;
}

static unsigned char find_median(unsigned char *ptrsortedarray, unsigned int arraysize)
{
	unsigned char mid;
	unsigned char median;
	unsigned char *ptrmid1;
	unsigned char *ptrmid2;
	
	mid = arraysize/2 - 1;
	
	if(arraysize%2==0)
	{
		ptrmid1 = ptrsortedarray+mid;
		ptrmid2 = ptrmid1+1;
		median = (*ptrmid1 + *ptrmid2)/2;
	}
	else
	{
		median = *ptrmid1;
	}
	
	return median;
}

static unsigned char *sort_array(unsigned char *ptrarray, unsigned int arraysize)
{
	unsigned char temp;
	static unsigned char sortedarray[SIZE];
	unsigned char *ptrsortedarray;
	
	for(int i=0; i<arraysize; i++)
	{
		sortedarray[i] = *ptrarray;
		ptrarray++;
	}
	
	
	for(int i=0; i<arraysize; i++)
	{
		for(int j=i; j<arraysize; j++)
		{
			if(sortedarray[j]<sortedarray[i])
			{
				temp = sortedarray[i];
				sortedarray[i] = sortedarray[j];
				sortedarray[j] = temp;
			}
		}			
	}
	
	ptrsortedarray = sortedarray;
	
	/*printf("\n");
	for(int i=0; i<arraysize; i++)
	{
		printf("  %d", *ptrsortedarray);
		ptrsortedarray++;
	}*/
	
	return sortedarray;
}

static unsigned char find_minimum(unsigned char *ptrarray, unsigned int arraysize)
{
	unsigned char min;
	
	min = *ptrarray;
	for(int i=0; i<arraysize; i++)
	{
		if(*ptrarray<min)
		{
			min = *ptrarray;
		}
		
		ptrarray++;
	}
	
	return min;
}

static unsigned char find_maximum(unsigned char *ptrarray, unsigned int arraysize)
{
	unsigned char max;
	
	max = *ptrarray;
	for(int i=0; i<arraysize; i++)
	{
		if(*ptrarray>max)
		{
			max = *ptrarray;
		}
		
		ptrarray++;
	}
	
	
	return max;
}

