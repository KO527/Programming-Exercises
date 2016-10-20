//
//  BillInfoImp.cpp
//  DataStructures
//
//  Created by Kwajo Osei-Akoto on 12/22/14.
//  Copyright (c) 2014 Student Data. All rights reserved.
//

#include "BillinfoClass.h"

double billInfo::ttv(){
    
    (*this).FindTotaltv = (*this).ptv * (*this).tv;
    return (*this).FindTotaltv;
}

double billInfo::tdvd(){
    
    (*this).FindTotaldvd = (*this).pdvd * (*this).dvd;
    return (*this).FindTotaldvd;
}

double billInfo::tipods()
{
    (*this).FindTotalipods = (*this).pipods * (*this).ipods;
    return (*this).FindTotalipods;
}

double billInfo::tgps()
{
    
    (*this).FindTotalgps = (*this).pgps * (*this).gps;
    return (*this).FindTotalgps;
}


double billInfo::SubTotal()
{
    
    (*this).subTotal = (*this).FindTotaltv + (*this).FindTotaldvd + (*this).FindTotalipods + (*this).FindTotalgps;
    return (*this).subTotal;
}

double billInfo::totTax()
{
    (*this).TotalTax = (*this).subTotal + (*this).tax;
    return (*this).TotalTax;
}


double billInfo::Balance()
{
    (*this).balance = (*this).subTotal + (*this).TotalTax;
    return (*this).balance;
}