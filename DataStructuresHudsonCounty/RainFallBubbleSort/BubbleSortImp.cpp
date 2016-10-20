//
//  BubbleSortImp.cpp
//  RainFallBubbleSort
//
//  Created by Kwajo Osei-Akoto on 5/29/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//

#include "BubbleSortImp.h"
using namespace std;



void bubbleSort(int list[], int length){
    
    for(int iteration = 1; iteration < length; iteration++){
        
        for(int index = 0; index < length - iteration; index++){
            
            if (list[index] > list[index+1]){
                
                int temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
            }
        }
        
    }
}

int print(int list[], int length){
    for(int i=0; i < length; i++){
        cout << list[i] << " ";
    }
    return 0;
}

