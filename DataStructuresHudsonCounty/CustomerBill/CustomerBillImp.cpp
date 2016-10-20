//
//  CustomerBill.Imp.cpp
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 7/26/16.
//  Copyright (c) 2016 Student Data. All rights reserved.
//

#include "CustomerBill.Imp.h"




CustomerBill::set&PrintAdultMealCost(double AdultCost){
   
    AdultMealCost = AdultCost;
    return AdultMealCost
}
CustomerBill::set&PrintChildMealCost(){

    ChildMealCost = this.AdultMealCost * .60;
    return ChildMealCost
}

CustomerBill::set&PrintNumOfAdultsServ(int NumOfAdults){

    NumOfAdultsServ = NumOfAdults;
    return NumOfAdultServ;
}

CustomerBill::set&PrintNumOfChildServ(int NumOfChild){

    NumOfChildServ = NumOfChild;
    return NumOfChildServ;
}

CustomerBill::set&PrintRoomFee(double Fee){

    RoomFee = Fee - YourDeposit;
    return RoomFee;
}

CustomerBill::set&PrintDeposit(double& YourDeposit){

    Deposit = YourDeposit;
    return Deposit;
}

CustomerBill::set&PrintDessertPrice(double Price){

    DessertPrice = Price;
    return DessertPrice;
}

CustomerBill::DessertCost(){
    
    return (NumOfChildServ * DessertPrice) + (NumOfAdultsServ * DessertPrice);
}

CustomerBill::WholeMealTip&Tax(){
    
    return (.18 * (NumOfAdultsServ + AdultMealCost) + (NumOfChildServ * ChildMealCost) + (NumOfChildServ * DessertPrice) + (NumOfAdultServ * DessertPrice)) + (NumOfAdultsServ * AdultMealCost) + (NumOfChildServ * ChildMealCost) + (NumOfChildServ * DessertPrice) + (NumOfAdultServ * DessertPrice);
    
}
