//
//  HealthRecord.hpp
//  HealthRecords
//
//  Created by Ahmed Ramy on 2/8/20.
//  Copyright © 2020 Ahmed Ramy. All rights reserved.
//

#ifndef HealthRecord_hpp
#define HealthRecord_hpp

#include <stdio.h>
#include <string>
using namespace std;
#endif /* HealthRecord_hpp */

class HealthRecord
{
public:
    
    HealthRecord( string, string, string, int, int, int, int, int);
    void setFirstName( string );
    void setLastName( string );
    void setGender( string );
    void setMonth( int );
    void setDay( int );
    void setYear( int );
    void setHeight( int );
    void setWeight( int );
    
    string getFirstName();
    string getLastName();
    string getGender();
    int getMonth();
    int getDay();
    int getYear();
    int getHeight();
    int getWeight();
    int getAge(int, int, int);
    int getMaximumHeartRate( int );
    string getTargetHeartRate( int );
    int getBMI();
    
private:
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    int height;
    int weight;
};

