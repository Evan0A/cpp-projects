#include <iostream>
#include <iomanip>
using namespace std;

/*
  celcius, farenheit, kelvin
  --*10-->
  km,hm,dam,m,dm,cm, mm
  <--/10--
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

//7 KM
double KM2HM(double km){
    return km * 10;
}

double KM2DAM(double km){
    return km * 100;
}

double KM2M(double km){
  return km * 1000;
}

double KM2DM(double km){
  return km * 10000;
}

double KM2CM(double km){
  return km * 100000;
}

double KM2MM(double km){
  return km * 1000000;
}

//7 HM
double HM2KM(double hm){
  return hm / 10;
}

double HM2DAM(double hm){
  return hm * 10;
}

double HM2M(double hm){
  return hm * 100;
}

double HM2CM(double hm){
  return hm * 1000;
}

double HM2MM(double hm){
  return hm * 10000;
}

//7 DAM
double DAM2KM(double dam){
  return dam / 100;
}

double DAM2HM(double dam){
  return dam / 10;
}

double DAM2M(double dam){
  return dam * 10;
}

double DAM2CM(double dam){
  return dam * 100;
}

double DAM2MM(double dam){
  return dam * 1000;
}

// 7 M
double M2KM(double m){
    return m / 1000;
}

double M2HM(double m){
    return m / 100;
}

double M2DAM(double m){
    return m / 10;
}

double M2CM(double m){
    return m * 100;
}

double M2MM(double m){
    return m * 1000;
}

// 7 CM
double CM2KM(double cm){
    return cm / 100000;
}

double CM2HM(double cm){
    return cm / 10000;
}

double CM2DAM(double cm){
    return cm / 1000;
}

double CM2M(double cm){
    return cm / 100;
}

double CM2MM(double cm){
    return cm * 10;
}

// 7 MM
double MM2KM(double mm){
    return mm / 1000000;
}

double MM2HM(double mm){
    return mm / 10000;
}

double MM2DAM(double mm){
    return mm / 1000;
}

double MM2M(double mm){
    return mm / 1000;
}

double MM2CM(double mm){
    return mm / 10;
}


int main(){
  int chose = 0;
  if (true) {
    cout << "***** Unit Conversion Calculator *****\n";
    cout << "Celcius to Farenheit to Kelvin\n";
    cout << "1. Celcius to Farenheit\n2. Celcius to Kelvin\n3. Farenheit to Celcius\n4. Farenheit to Kelvin\n5. Kelvin to Celcius\n6. Kelvin to Farenheit\n";
    cout << "=======================\n";
    cout << "7. Distance Counter Calculator\n";
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
     //7 Distance
     case 7:
       cout << "======================\n";
       cout << "Dictance Calculator\n";
/*1*/  cout << "1 . KM to HM\n2 . KM to DAM\n3 . KM to M\n4 . KM to CM\n5 . KM to MM\n";       
       cout << "======================\n"; 
/*2*/  cout << "6 . HM to KM\n7 . HM to DAM\n8 . HM to M\n9 . HM to CM\n10. HM to MM\n";
       cout << "======================\n";
/*3*/  cout << "11. DAM to KM\n12. DAM to HM\n13. DAM to M\n14. DAM to CM\n15. DAM to MM\n"; 
       cout << "======================\n";
       cout << "16. M to KM\n17. M to HM\n18. M to DAM\n19. M to CM\n20. M to MM\n";
       cout << "======================\n";
       cout << "21. CM to KM\n22. CM to HM\n23. CM to DAM\n24. CM to M\n25. CM to MM\n";
       cout << "======================\n";
       cout << "26. MM to KM\n27. MM to HM\n28. MM to DAM\n29. MM to M\n30. MM to CM\n";
       cout << "Chose one (1-30)";
       int dchose;
       cin >> dchose;
       
       double input, result;
       switch(dchose){
         case 1:
           cout << "What KM distance? ";
           cin >> input;
           result = KM2HM(input);
           cout << input << "KM ---> " << result << "F";
           break;
         case 2:
           cout << "What KM distance? ";
           cin >> input;
           result = KM2DAM(input);
           cout << input << "KM ---> " << result << "DAM";
           break;
         case 3:
           cout << "What KM distance? ";
           cin >> input;
           result = KM2M(input);
           cout << input << "KM ---> " << result << "M";
           break;
         case 4:
           cout << "What KM distance? ";
           cin >> input;
           result = KM2CM(input);
           cout << input << "KM ---> " << result << "CM";
           break;
         case 5:
            cout << "What KM distance? ";
            cin >> input;
            result = KM2MM(input);
            std::cout << std::fixed << std::setprecision(0);
            cout << input << "KM ---> " << result << "MM";
            break;
         case 6:
            cout << "What HM distance? ";
            cin >> input;
            result = HM2KM(input);
            cout << input << " HM ---> " << result << " KM";
            break;
          case 7:
            cout << "What HM distance? ";
            cin >> input;
            result = HM2DAM(input);
            cout << input << " HM ---> " << result << " DAM";
            break;
          case 8:
            cout << "What HM distance? ";
            cin >> input;
            result = HM2M(input);
            cout << input << " HM ---> " << result << " M";
            break; 
          case 9:
            cout << "What HM distance? ";
            cin >> input;
            result = HM2CM(input);
            cout << input << " HM ---> " << result << " CM";
            break; 
          case 10: 
            cout << "What HM distance? ";
            cin >> input;
            result = HM2MM(input);
            cout << input << " HM ---> " << result << " MM";
            break;
          case 11:
            cout << "What DAM distance? ";
            cin >> input;
            result = DAM2KM(input);
            cout << input << " DAM ---> " << result << " KM";
            break;
          case 12:
            cout << "What DAM distance? ";
            cin >> input;
            result = DAM2HM(input);
            cout << input << " DAM ---> " << result << " HM";
            break;
          case 13:
            cout << "What DAM distance? ";
            cin >> input;
            result = DAM2M(input);
            cout << input << " DAM ---> " << result << " M";
            break;
          case 14:
            cout << "What DAM distance? ";
            cin >> input;
            result = DAM2CM(input);
            cout << input << " DAM ---> " << result << " CM";
            break;
          case 15:
            cout << "What DAM distance? ";
            cin >> input;
            result = DAM2MM(input);
            cout << input << " DAM ---> " << result << " MM";
            break;
          case 16:
            cout << "What M distance? ";
            cin >> input;
            result = M2KM(input);
            cout << input << " M ---> " << result << " KM";
            break;
          case 17:
            cout << "What M distance? ";
            cin >> input;
            result = M2HM(input);
            cout << input << " M ---> " << result << " HM";
            break;
          case 18:
            cout << "What M distance? ";
            cin >> input;
            result = M2DAM(input);
            cout << input << " M ---> " << result << " DAM";
            break;
          case 19:
            cout << "What M distance? ";
            cin >> input;
            result = M2CM(input);
            cout << input << " M ---> " << result << " CM";
            break;
          case 20:
            cout << "What M distance? ";
            cin >> input;
            result = M2MM(input);
            cout << input << " M ---> " << result << " MM";
            break;
          case 21:
            cout << "What CM distance? ";
            cin >> input;
            result = CM2KM(input);
            cout << input << " CM ---> " << result << " KM";
            break;
          case 22:
            cout << "What CM distance? ";
            cin >> input;
            result = CM2HM(input);
            cout << input << " CM ---> " << result << " HM";
            break;
          case 23:
            cout << "What CM distance? ";
            cin >> input;
            result = CM2DAM(input);
            cout << input << " CM ---> " << result << " DAM";
            break;
          case 24:
            cout << "What CM distance? ";
            cin >> input;
            result = CM2M(input);
            cout << input << " CM ---> " << result << " M";
            break;
          case 25:
            cout << "What CM distance? ";
            cin >> input;
            result = CM2MM(input);
            cout << input << " CM ---> " << result << " MM";
            break;
          case 26:
            cout << "What MM distance? ";
            cin >> input;
            result = MM2KM(input);
            cout << input << " MM ---> " << result << " KM";
            break;
          case 27:
            cout << "What MM distance? ";
            cin >> input;
            result = MM2HM(input);
            cout << input << " MM ---> " << result << " HM";
            break;
          case 28:
            cout << "What MM distance? ";
            cin >> input;
            result = MM2DAM(input);
            cout << input << " MM ---> " << result << " DAM";
            break;
          case 29:
            cout << "What MM distance? ";
            cin >> input;
            result = MM2M(input);
            cout << input << " MM ---> " << result << " M";
            break;
          case 30:
            cout << "What MM distance? ";
            cin >> input;
            result = MM2CM(input);
            cout << input << " MM ---> " << result << " CM";
            break;
          default:
            cout << "Invalid choice!";
            break;
       }
     break;
  default:
    cout << "WRONG ANSWER KID!";
    break;
  }
  return 0;
  
}            
