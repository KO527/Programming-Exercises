//
//  RainFall12monthsImp.cpp
//  RainFallBubbleSort
//
//  Created by Kwajo Osei-Akoto on 5/30/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//


#include <iostream>

using namespace std;

string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

double YearlyRainFall(double TotalmonthRainFall[], double& sum){
    
    
    cout << "Enter the total rainfall for each month : " << endl;
    for (int index = 0; index < 12; index++){
        cin >> TotalmonthRainFall[index];
        sum = sum + TotalmonthRainFall[index];
    }
    
    return sum;
}

void AttributeMonth(double EachmonthRainFall[], double TotalmonthRainFall[]){
    
    for (int index = 0; index < 12; index++)
        EachmonthRainFall[index] = TotalmonthRainFall[index];
    
}

double AvgMonthlyRainFall(double &sum){
    
    double Avg = sum/12;
    return Avg;
}



double MostRainFallBubbleSort(double TotalmonthRainFall[], int length, int& HighestRainFall){
    
    for(int iteration = 1; iteration < length; iteration++){
        
        for(int index = 0; index < length - iteration; index++){
            
            if (TotalmonthRainFall[index] > TotalmonthRainFall[index+1]){
                int temp = TotalmonthRainFall[index];
                TotalmonthRainFall[index] = TotalmonthRainFall[index+1];
                TotalmonthRainFall[index+1] = temp;
            }
            
        }
        HighestRainFall = TotalmonthRainFall[length-1];
    }
    return TotalmonthRainFall[length-1];
}




double leastMonthRainFall(double TotalmonthRainFall[], int length, int& LowestRainFall){
    for(int iteration = 1; iteration < length; iteration++){
        
        for(int index = 0; index < length - iteration; index++){
            
            if(TotalmonthRainFall[index] > TotalmonthRainFall[index+1]){
                
                int temp = TotalmonthRainFall[index];
                TotalmonthRainFall[index] = TotalmonthRainFall[index+1];
                TotalmonthRainFall[index+1] = temp;
            }
            
        }
        LowestRainFall = TotalmonthRainFall[0];
    }
    return TotalmonthRainFall[0];
}


string ActualHeaviestMonthRainFall(int length, double EachmonthRainFall[], int HighestRainFall){
    
    for (int index = 0; index<length; index++){
        if (EachmonthRainFall[index] == HighestRainFall)
        {
            return months[index];
        }
    }
    return "nothing";
}

string ActualLeastMonthRainFall(int length, double EachmonthRainFall[], int& LowestRainFall){
    
    for( int index = 0; index < length; index++){
         if (LowestRainFall==EachmonthRainFall[index])
         {
            return months[index];
         }
        
    }
    return "nothing";
}