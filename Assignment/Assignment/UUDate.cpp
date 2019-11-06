/*
* UUDate.cpp
*
* Version information
* Author: TODO - Add your name here
* Date: TODO - Add date you started working on the code
* Description: This file is the implementation file for the UUDate class and defines (implements) the functions of the class
*
* Copyright notice -
*/

#include <iostream>
#include <vector>
#include "UUDate.h"

UUDate::UUDate(){
    //Initialise the date to 01/01/2000
    //TODO - Add your implementation here
    SetDay(01);
    SetMonth(01);
    SetYear(2001);
}

UUDate::UUDate(int day, int month, int year){
    //TODO - Add your implementation here
    if(checkDay(day, month, year)) {
        day_ = day;
        month_ = month;
        year_ = year;
    }
    else {
        day_ = 01;
        month_ = 01;
        year_ = 2000;
    }
}

UUDate::UUDate(std::string date){
    //TODO - Add your implementation here
}

bool UUDate::checkDay(int day, int month, int year){
    
    //std::vector<int> monthof30{8, 4, 6, 11};
    //std::vector<int> monthof31{1, 3, 5, 7, 9, 10, 12};
    if((day >= 1 && day <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 10 || month == 12)){
        return true;
    }
    
    if((day >= 1 && day <= 30) && (month == 8 || month == 4 || month == 6 || month == 11)){
        return true;
    }
    
    if((month = 2) && (checkLeapYear(year) == true) && (day >= 1 && day <= 29)){
        return true;
    }else {
        return false;
    }
  
}

bool UUDate::checkMonth(int month){
    if((month >= 1) || (month <= 12)){
        return true;
    }else {
        return false;
    }
}

bool UUDate::checkYear(int year){
    if((year >= 1000) || (year <= 9999)){
        return true;
    }else{
        
    }
}
       
bool UUDate::checkLeapYear(int year){
    if((year % 4 == 0) && ((year % 400 == 0) && (year % 100 != 0))){
        return true;
    } else{
        return false;
    }
}


void UUDate::IncrementDate() {
    //TODO - Add your implementation here
}

int UUDate::Between(UUDate date) {
    //TODO - Add your implementation here
}

int UUDate::GetDay() const {
    //TODO - Add your implementation here
    return day_;
}

void UUDate::SetDay(int day) {
    //TODO - Add your implementation here
    if(checkDay(day, month_, year_) == true){
        day_ = day;
    } else {
        day_ = 01;
    }
}

int UUDate::GetMonth() const {
    //TODO - Add your implementation here
    return month_;
}

void UUDate::SetMonth(int month) {
    //TODO - Add your implementation here
    if (checkMonth(month) == true){
        month_ = month;
    }else {
        month_ = 01;
    }
    }
    


int UUDate::GetYear() const {
    //TODO - Add your implementation here
    return year_;
}

void UUDate::SetYear(int year) {
    //TODO - Add your implementation here
    if(checkYear(year) == true){
        year_ = year;
    }else {
        year_ = 2000;
    }
}

std::string UUDate::GetDate() {
    //TODO - Add your implementation here
}
