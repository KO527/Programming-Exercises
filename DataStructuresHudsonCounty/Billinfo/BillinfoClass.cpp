//
//  BillinfoClass.cpp
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 6/18/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//



//The whole point of this program is to calcuate the total amount of money
//that a customer has to pay as a result of choosing the items he or she has decided to
//pick in an electronic store



#include <iostream> 
#include <iomanip>
#include "BillinfoClass.h"
using namespace std;



int main(){
    
    billInfo *first, *last, *newNode, *current;
    
    
    int num, n;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Enter a customer Id or -999 to quit\n";
    cin >> num;
    
    first = NULL;
    while (num != -999)
    {
        newNode = new billInfo;
        cout << "Enter number of Tvs\n";
        cin >> n;
        newNode -> tv = n;
        cout << "Enter number of DVDs\n";
        cin>>n;
        newNode -> dvd = n;
        cout << "Enter number of ipods\n";
        cin>>n;
        newNode -> ipods = n;
        cout<<"Enter number of GPSs\n";
        cin >> n;
        newNode -> gps = n;
        
        newNode -> ptv = 400.0;
        newNode -> pdvd = 300.0;
        newNode -> pipods = 200.0;
        newNode -> pgps = 200.0;
        newNode -> tax = 0.07;
        
        
        
        
        newNode -> link = NULL;
        
        if (first == NULL)
        {
            first = newNode;
            last = newNode;
            
        }
        {
            last -> link = newNode;
            last = newNode;
            
        }
        cout << "Enter another customer Id or -999 to quit\n";
        cin >> num;
        
    }
    current = first;
    while (current != NULL)
    {
        cout << "Price of TVs  = " << current -> ttv() << endl;
        cout << "Price of DVDS = " << current -> tdvd() << endl;
        cout << "Price of Ipods = " << current -> tipods() << endl;
        cout << "Price of GPS = " << current -> tgps() << endl;
        cout << "Subtotal = " << current -> SubTotal() << endl;
        cout << "Total tax = " << current -> totTax() << endl;
        cout << "Balance = " << current -> Balance() << endl;
        
        current = current -> link;
    }
    return 0;
}





