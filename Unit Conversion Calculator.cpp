#include <iostream>
using namespace std;

/*
  celcius, farenheit, kelvin
  km,hm,dam,m,dm,cm, mm
  
*/

//1
double C2F(double celcius) {
    return (9.0 / 5.0) * celcius + 32.0;
}

//2
double C2K(double celcius) {
    return celcius + 273.15;
}

//3
double F2C(double farenheit) {
    return (5.0 / 9.0) * (farenheit - 32.0);
}

//4
double F2K(double farenheit){
    return (5.0 / 9.0) * (farenheit - 32.0) + 273.15;
}

//5
double K2C(double kelvin){
    return kelvin - 273.15;
}

//6
double K2F(double kelvin){
    return (9.0 / 5.0) * (kelvin - 273.15) + 32.0;
}

int main(){
  int chose = 0;
  if (true) {
    cout << "***** Unit Conversion Calculator *****\n";
    cout << "Select one \n";
    cout << "1. Celcius to Farenheit\n2. Celcius to Kelvin\n3. Farenheit to Celcius\n4. Farenheit to Kelvin\n5. Kelvin to Celcius\n6. Kelvin to Farenheit\n";
    cin >> chose;
  }
  
  double input, result;
  switch(chose){
    //1 C2F
    case 1:
      cout << "Enter degrees in Celcius: ";
      cin >> input;
      result = C2F(input);
      cout << input << " Celsius --> " << result << " Fahrenheit";
      break;
    //2 C2K
    case 2:
      cout << "Enter degrees in Celcius: ";
      cin >> input;
      result = C2K(input);
      cout << input << " Celsius --> " << result << " Kelvin";
      break;
    //3 F2C
    case 3:
       cout << "Enter degrees in Farenheit: ";
       cin >> input;
       result = F2C(input);
       cout << input << " Farenheit --> " << result << " Celcius";
       break;
     //4 F2K
     case 4:
       cout << "Enter degrees in Farenheit: ";
       cin >> input;
       result = F2K(input);
       cout << input << " Farenheit --> " << result << " Kelvin";
       break;
     //5 K2C
     case 5:
       cout << "Enter degrees in Kelvin: ";
       cin >> input;
       result = K2C(input);
       cout << input << " Kelvin --> " << result << " Celcius";
       break;
     //6 K2F
     case 6:
       cout << "Enter degrees in Kelvin: ";
       cin >> input;
       result = K2F(input);
       cout << input << " Kelvin --> " << result << " Farenheit";
       break;
     default:
       cout << "WRONG ANSWER KID!!!!!";
  }
  return 0;
  
}
