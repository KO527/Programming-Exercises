//
//  CustomerBill.h
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 6/24/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//

#ifndef __DataStructures__CustomerBill__
#define __DataStructures__CustomerBill__

#include <iostream>


class CustomerBill{


    public:
    
        double DessertCost();
        double WholeMealTip&Tax();
        void set&PrintAdultMealCost(double);
        void set&PrintChildMealCost();
        void set&PrintNumOfAdultServ(int);
        void set&PrintNumofChildServ(int);
        void set&PrintRoomFee(double);
        void set&PrintDeposit(double);
        void set&PrintDessertPrice(double);
    
    private:
    
        int NumofAdultsServ;
        int NumOfChildServ;
        double AdultMealCost;
        double ChildMealCost;
        double RoomFee;
        double Deposit;
        double DessertPrice;
}



