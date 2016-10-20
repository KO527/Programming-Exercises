//
//  BinarySortImp.cpp
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 6/3/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//

//int BinarySort(int[],int,int);
#include <iostream>



int BinarySort(int scores[], int length, int item)
{
    int first;
    int last = length - 1;
    int mid;
    
    first = 0;
    
    bool found = false;
    
    while (first <= last && !found)
    {
        
        mid = (first + last) / 2;

        if (scores[mid] == item)
            found = true;
        else if (scores[mid] < item)
            first = mid + 1;
        else
            last = mid - 1;
    }
    
    if (found)
        return mid + 1;
    else
        return -1;
    
}
