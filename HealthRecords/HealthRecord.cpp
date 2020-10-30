//
//  HealthRecord.cpp
//  HealthRecords
//
//  Created by Ahmed Ramy on 2/8/20.
//  Copyright © 2020 Ahmed Ramy. All rights reserved.
//

#include "HealthRecord.hpp"
#include <string>
#include <iostream>
using namespace std;

//Constructor
HealthRecord::HealthRecord(string first, string last, string gender, int mm, int dd, int yy, int height, int weight)
{
    setFirstName(first);
    setLastName(last);
    setGender(gender);
    setMonth(mm);
    setDay(dd);
    setYear(yy);
    setHeight(height);
    setWeight(weight);
}

// Get Functions

string HealthRecord::getFirstName()
{
    return firstName;
}
string HealthRecord::getLastName()
{
    return lastName;
}
string HealthRecord::getGender()
{
    return gender;
}
int HealthRecord::getMonth()
{
    return month;
}
int HealthRecord::getDay()
{
    return day;
}
int HealthRecord::getYear()
{
    return year;
}
int HealthRecord::getAge(int pm, int pd, int py)
{
    int age;
    age = py - year;
    if (pm < month)
    {
        age -= 1;
    }
    if (pm >= month)
    {
        if (pd < day)
        {
            age -= 1;
        }
    }
    return age;
}
int HealthRecord::getBMI()
{
    return (weight * 703) / ( height * height);
}
int HealthRecord::getMaximumHeartRate(int age)
{
    return 220 - age;
}
string HealthRecord::getTargetHeartRate(int max)
{
    string target;
    target = to_string(max*0.50) + " - " + to_string(max*0.75);
    return target;
}

// Set Functions
void HealthRecord::setDay(int num)
{
    day = num;
}
void HealthRecord::setMonth(int num)
{
    if (num < 0)
    {
        month = 0;
    }
    if(num > 12)
    {
        month = 0;
    }
    if (num >= 0)
    {
        if (num <= 12)
        {
            month = num;
        }
    }
}
void HealthRecord::setYear(int num)
{
    year = num;
}
void HealthRecord::setHeight(int num)
{
    height = num;
}
void HealthRecord::setWeight(int num)
{
    weight = num;
}
void HealthRecord::setLastName(string name)
{
    lastName = name;
}
void HealthRecord::setFirstName( string name)
{
    firstName = name;
}
void HealthRecord::setGender(string gen)
{
    gender = gen;
}
