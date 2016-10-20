//
//  main.h
//  RainFallBubbleSort
//
//  Created by Kwajo Osei-Akoto on 5/30/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//


#include <iostream>

using namespace std;

double YearlyRainFall(double TotalmonthRainFall[], double &sum);

void AttributeMonth(double EachmonthRainFall[], double TotalmonthRainFall[]);

double AvgMonthlyRainFall(double &sum);

double MostRainFallBubbleSort(double TotalmonthRainFall[], int length, int& HighestRainFall);

double leastMonthRainFall(double TotalmonthRainFall[], int length, int& LowestRainFall);

string ActualHeaviestMonthRainFall(int length, double EachmonthRainFall[], int HighestRainFall);

string ActualLeastMonthRainFall(int length, double EachmonthRainFall[], int& LowestRainFall);



