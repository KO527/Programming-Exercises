//
//  CustomerBill.cpp
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 6/24/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//

#include "CustomerBill.h"
#include <iostream> 
#include <iomanip>


using namespace std;


int main()
{
    int NumOfAdultsServ;
    int NumOfChildServ;
    double AdultMealCost;
    double ChildMealCost;
    
    CustomerBill YourBill;
    

    cout << "How many Adults are a part of this party? : ";
    cin >> NumofAdultsServ;
    cout << endl;
    
    cout << "How many Children are a part of this party? : ";
    cin >> NumOfChildServ;
    cout << endl;
    
    cout << "How much does an Adult Meal Cost? : ";
    cin >> AdultMealCost;
    cout << endl;
    
    cout << "How much does a Child Meal Cost? : ";
    cin >> ChildMealCost >> endl;
    cout << endl;
    
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << setw(18) << "Casewell Catering and Convention Service" << endl;
    cout << setw(12) << "Final Bill";
    
    cout << "Number of Adults:" << setw(5) << YourBill.set&PrintNumofAdultsServ(NumOfAdultsServ) << endl;
    cout << "Number of Children:" << setw(4) << YourBill.set&PrintNumOfChildServ(NumOfChildServ) << endl;
    cout << "Cost per adult without dessert:" << setw(5) << "$" << setw(7) << YourBill.set&PrintAdultMealCost(AdultMealCost) << endl;
    cout << "Cost per child without dessert:" << setw(5) << "$" << setw(7) << YourBill.set&PrintChildMealCost() << endl;
    cout << "Cost per dessert:" << setw(18) << "$" << setw(7) << YourBill.set&PrintDessertPrice() << endl;
    cout << "Room fee:" << setw(25) << "$" << setw(7) << YourBill.setRoomFee() << endl;
    cout << "Tip and tax rate:" << setw(26) << "0.18" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    
    cout << "Total cost for adult meals:" << setw(7) << "$" << setw(9) << NumofAdultsServ * AdultMealCost << endl;
    cout << "Total cost for child meals:" << setw(8) << "$" << setw(9) << NumOfChildServ * ChildMealCost << endl;
    cout << "Total cost for dessert:" << setw(11) << "$" << set(9) << (NumOfChildServ * DessertCost) + (NumOfAdultsServ * DessertCost) << endl;
    cout << "Total food cost:" << setw(15) << "$" << setw(9) << (NumofAdultsServ * AdultMealCost) + (NumOfChildServ * ChildMealCost) + (NumOfChildServ * DessertCost) + (NumOfAdultsServ * DessertCost) << endl;
    cout << "Plus tips and tax:" << setw(13) << "$" << setw(9) << (.18 * (NumofAdultsServ + AdultMealCost) + (NumOfChildServ * ChildMealCost) + (NumOfChildServ * DessertCost) + (NumOfAdultServ * DessertCost)) + (NumofAdultsServ * AdultMealCost) + (NumOfChildServ * ChildMealCost) + (NumOfChildServ * DessertCost) + (NumOfAdultServ * DessertCost) << endl;
    cout << "Plus room fee:" << setw(16) << "$" << setw(9) << RoomFee << endl;
    cout << "Less deposit:" << setw(18) << "$" << setw(9) << Deposit << endl;
    cout << endl;
    cout << "Balance due:" << setw(18) << "$" << setw(9) << (.18 * ((NumofAdultsServ * AdultMealCost) + (NumOfChildServ * ChildMealCost) + (NumOfChildServ * DessertCost) + (NumOfAdultsServ * DessertCost)) + (NumOfAdultsServ * AdultMealCost) + (NumOfChildServ * ChildMealCost) + (NumOfChildServ * DessertCost) + (NumOfAdultServ * DessertCost) + (RoomFee - Deposit) << endl;
    


}
