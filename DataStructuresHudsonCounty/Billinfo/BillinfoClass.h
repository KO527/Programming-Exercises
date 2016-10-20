//
//  BillinfoClass.h
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 6/18/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//


class billInfo{
    
public:
    double ttv();
    double tdvd();
    double tipods();
    double tgps();
    double totTax();
    double Balance();
    double SubTotal();
    
    int tv;
    int dvd;
    int gps;
    int ipods;
    double ptv;
    double pdvd;
    double pipods;
    double pgps;
    double tax;
    double balance;
    double subTotal;
    double FindTotaltv;
    double FindTotaldvd;
    double FindTotalipods;
    double FindTotalgps;
    double TotalTax;
    billInfo *link;
};