#include<iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    string var;
    float cm = 0.0, inch = 0.0, mile = 0.0, kilometer = 0.0, feet = 0.0, meter = 0.0, ounce = 0.0, gram = 0.0, pound = 0.0, kg = 0.0, quit = 0.0, loop;
    loop = 1;
    cout << "Type list to see possible units to convert" << endl << endl;
    while (loop <= 1000000) {
        
        cin >> var;
        cout << endl;

        if (var == "quit")
        {
            return 0;
        }

        if (var == "list")
        {
            cout << "cm to inch = centimeter, inch to cm = inch\n";
            cout << "feet to meter = feet, meter to feet = meter\n";
            cout << "mile to km = mile, km to miles = kilometer\n";
            cout << "oz to g = grams, g to oz = ounces\n";
            cout << "lb to kg = kilogram, kg to lb = pound\n";
        }
        //inches to centimeters
        if (var == "inch")
        {
            cout << "Please enter an amount in inches:" << endl;
            cin >> inch;
            cm = (inch * 2.54f);
            cout << "Distance in centimeters:" << endl;
            cout << cm << endl;
        }
        //centimeters to inches
        if (var == "centimeter")
        {
            cout << "Please enter an amount in centimeters:" << endl;
            cin >> cm;
            inch = (cm / 2.54f);
            cout << "Distance in inches:" << endl;
            cout << inch << endl;
        }
        //miles to kilometers
        if (var == "mile")
        {
            cout << "Please enter an amount in miles:" << endl;
            cin >> mile;
            kilometer = (mile * 1.609344f);
            cout << "Distance in kilometers:" << endl;
            cout << kilometer << endl;
        }
        //kilometers to miles
        if (var == "kilometer")
        {
            cout << "Please enter an amount in kilometers:" << endl;
            cin >> kilometer;
            mile = (kilometer / 1.609344f);
            cout << "Distance in miles:" << endl;
            cout << mile << endl;
        }
        //meters to feet
        if (var == "meter")
        {
            cout << "Please enter an amount in meters:" << endl;
            cin >> meter;
            feet = (meter * 3.281f);
            cout << "Distance in feet:" << endl;
            cout << feet << endl;
        }
        //feet to meters
        if (var == "feet")
        {
            cout << "Please enter an amount in feet:" << endl;
            cin >> feet;
            meter = (feet / 3.2808399f);
            cout << "Distance in meters:" << endl;
            cout << meter << endl;
        }
        //ounces to grams
        if (var == "grams")
        {
            cout << "Please enter an amount in grams:" << endl;
            cin >> gram;
            gram = (ounce * 28.35f);
            cout << "Weight in grams:" << endl;
            cout << gram << endl;
        }
        //grams to ounces
        if (var == "ounces")
        {
            cout << "Please enter an amount in grams:" << endl;
            cin >> ounce;
            ounce = (gram / 28.34952f);
            cout << "Weight in ounces:" << endl;
            cout << ounce << endl;
        }
        //pound to kg
        if (var == "kilogram")
        {
            cout << "Please enter an amount in pounds:" << endl;
            cin >> kg;
            kg = (pound * 2.205f);
            cout << "Weight in kilograms:" << endl;
            cout << kg << endl;
        }
        //kg to pound
        if (var == "pound")
        {
            cout << "Please enter an amount in kilograms:" << endl;
            cin >> pound;
            pound = (kg / 2.205f);
            cout << "Weight in pounds:" << endl;
            cout << pound << endl;

        }
        loop++;
    }
    system("Pause");
}
    







