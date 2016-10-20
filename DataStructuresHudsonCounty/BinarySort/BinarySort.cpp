//
//  BinarySort.cpp
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 6/3/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//

//BinarySort assumes the numbers in the list are already sorted.
// 


#include "BinarySort.h"

#include <iostream>

using namespace std;


//This binary search algorithm intends to
//search for a particular student test score as it starts
//the search from the middle of the list.
//The  binary search algorithm assumes that
//the list is already sorted from least to greatest.



int main(){
    
    
    int scores[6], count, searchItem;
    
    cout << "How many students?\n";

    cin >> count;
    
    cout << "Enter score for " << count << " students\n";
    
    for(int a = 0; a < count; a++)
    {
        cin >> scores[a];
        
    }
    cout << "Which item are you looking for here? : ";
    cin >> searchItem;
    cout << endl;
    
    int pos;
    pos = BinarySort(scores, count, searchItem);
    
    
    if (pos != -1)
        cout << " The number " << searchItem << " that you are looking for\n "
        << " is located at position " << pos << endl;
    else
        cout << "The number could not be found in the list " << endl;
    
    
}



