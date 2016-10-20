//
//  main.cpp
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 6/6/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//

#include "main.h"
#include <iostream> 

using namespace std;


//This program takes into account the rainfall measurements of every month.
//It then uses a bubblesort algorithm to rank the months in order from least
//to greatest in terms of rainfall measurement.
//It then outputs which months have the least and most rainfall measurements
//and then actual measurements of these months. 

int main(){
    
    double TotalmonthRainFall[12];
    double sum = 0;
    double EachmonthRainFall[12];
    int HighestRainFall;
    int LowestRainFall;
    

    int summation = YearlyRainFall(TotalmonthRainFall, sum);
    
    cout << "The yearly Rainfall is " << summation << " inches. " << endl;
    
    AttributeMonth(EachmonthRainFall, TotalmonthRainFall);
    
    cout << "The yearly average is " << AvgMonthlyRainFall(sum) << " inches/year." << endl;
    
    cout << "The month that has the most rain has " << MostRainFallBubbleSort(TotalmonthRainFall, 12, HighestRainFall) << " inches." << endl;

    cout << "The month with the least rain has " << leastMonthRainFall(TotalmonthRainFall, 12, LowestRainFall) << " inches." << endl;

    cout << "The month with the heaviest rain is month " << ActualHeaviestMonthRainFall(12, EachmonthRainFall, HighestRainFall) << endl;
    
    cout << "The month with the least rain is month " << ActualLeastMonthRainFall(12, EachmonthRainFall, LowestRainFall) << endl;
}

