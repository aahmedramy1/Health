//
//  main.cpp
//  HealthRecords
//
//  Created by Ahmed Ramy on 2/8/20.
//  Copyright © 2020 Ahmed Ramy. All rights reserved.
//

#include <iostream>
#include <string>
#include "HealthRecord.hpp"
using namespace std;

int main()
{
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    int height;
    int weight;
    int bmi;
    int age;
    
    cout << "Enter your First Name: " << endl;
    cin >> firstName;
    cout << "Enter your Last Name: " << endl;
    cin >> lastName;
    cout << "MALE or FEMALE ?" << endl;
    cin >> gender;
    cout << "Enter your date of birth (MM,DD,YYYY) : " << endl;
    cin >> month >> day >> year;
    cout << "Enter your height in inches: " << endl;
    cin >> height;
    cout << "Enter your weight in pounds: " << endl;
    cin >> weight;
    
    
    HealthRecord person(firstName, lastName, gender, month, day, year, height, weight);
    bmi = person.getBMI();
    age = person.getAge(2, 8, 2020);
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "First name: " << person.getFirstName() << endl;
    cout << "Last name: " << person.getLastName() << endl;
    cout << "Gender: " << person.getGender() << endl;
    cout << "Age: " << age << endl;
    cout << "BMI: " << bmi;
    if (bmi < 18.5)
    {
        cout << " You are underweight\n" << endl;
    }
    if ( bmi >= 18.5)
    {
        if (bmi < 24.9)
        {
            cout << " You are normal" << endl;
        }
    }
    if (bmi >= 25)
    {
        if (bmi < 29.9)
        {
            cout << " You are overweight" << endl;
        }
    }
    if (bmi >= 30)
    {
        cout << " You are Obese" << endl;
    }
    
    cout << "Maximum HeartRate : " << person.getMaximumHeartRate(age) << endl;
    cout << "target-heart-Range: " << person.getTargetHeartRate(person.getMaximumHeartRate(age)) << endl;
}
