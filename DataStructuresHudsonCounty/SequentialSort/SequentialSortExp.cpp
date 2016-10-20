//
//  SequentialSortExp.cpp
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 6/3/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//


//This is a simple sequential sort algorithm that allows the user to input up to 25 values
//and then search for a specific value in the list of values and consequently return the index position
// of the value

#include <iostream> 
#include "SequentialSortExp.h"

using namespace std;

int main(){

    int scores[6], count, loc, searchItem;
    
    cout << "How many students?\n";
    
    cin >> count;
    cout << "Enter score for " << count << " students\n";
    
    for (int a = 0; a < count; a++)
    {
        cin >> scores[a];
    
    }

    
    cout << "Which item are you looking for? : \n";
    cin >> searchItem;
    cout << endl;
    
    bool found = false;
    loc = 0;
    
    while (loc < count && !found){
        if (scores[loc] == searchItem)
            found = true;
        else
            loc++;
    }
    if(found)
            return loc + 1;
    else
            return -1;
            
    
    
}

