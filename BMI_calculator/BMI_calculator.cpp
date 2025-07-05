#include<iostream>
#include<iomanip>
using namespace std;


void calculateBMI()
{
    float weight, height, bmi;

    cout << "Enter your weight in kg: "<<endl;
    cin >> weight;
    char unitChoice;
    cout << "Enter height unit - meters (m) or centimeters (c): ";
    cin >> unitChoice;
    if (tolower(unitChoice) != 'm' && tolower(unitChoice) != 'c') 
    {
        cout << "Invalid unit! Please enter 'm' for meters or 'c' for centimeters." << endl;
        return;
   }


    cout << "Enter your height: ";
    cin >> height;

    if(tolower(unitChoice) == 'c')
     {
        height = height / 100.0; // convert cm to meters
    }
    
    bmi = weight / (height * height);
    cout << fixed << setprecision(2);
    cout << "Your Body Mass Index (BMI) is: " << bmi<< endl;


    if (bmi < 18.5)
        cout << "You are underweight." << endl;
    else if (bmi >= 18.5 && bmi <= 24.9)
        cout << "You have a normal weight." << endl;
    else if (bmi >= 25.0 && bmi <= 29.9)
        cout << "You are overweight." << endl;
    else
        cout << "You are obese." << endl;

}

int main()
{
    cout << "-------------BMI Calculator--------------"<<endl;
    cout <<"Let's calculate your Body Mass Index (BMI)"<<endl;
    cout <<"-------------Healthy BMI Chart------------"<<endl;
    cout << "o Underweight: < 18.5"<<endl;
    cout << "o Normal weight: 18.5 - 24.9"<<endl;
    cout << "o Overweight: 25.0 - 29.9"<<endl;
    cout << "o Obesity: >= 30.0"<<endl;
    cout << "------------------------------------------"<<endl;

    char ch;
    ch = 'Y';

    while(toupper(ch) == 'Y')
    {
        calculateBMI();
        cout << "------------------------------------------"<<endl;
        cout << "Do you want to calculate again? (Y/N): ";
        cin >> ch;
        while (toupper(ch) != 'Y' && toupper(ch) != 'N')
        {
          cout << "Please enter only Y or N: ";
          cin >> ch;
        }

    }
    cout << "------------------------------------------"<<endl;
    cout << "Thank you for using the BMI Calculator!" << endl;

}