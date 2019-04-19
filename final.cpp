#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void main_menu();
void metric_conversion();
void imperial_conversion();
void end();

int main() {
  main_menu();
}

//Directs user to either Metric/Imperial or Imperial/Metric conversion fucntions
void main_menu() {
  char choice;
  cout << endl << setw(65) << "Welcome to my imperial/metric conversion program!\n\n";
  
  while (choice != '1' || choice != '2')
  {
    cout << setw(70) << "Please select which method of conversion you wish to use.\n\n";
    cout << "1. Metric to Imperial\n";
    cout << "2. Imperial to Metric\n\n";
    cout << "Choice: (1/2) ";
    cin >> choice;
    
    if (choice == '1') metric_conversion();
    else if (choice == '2') imperial_conversion();
    else  //Input validation
    {
      cout << "\nERROR: Please enter either 1 or 2\n\n ";
      continue; 
    }
    break;
  }  
}
//Funciton for converting Metric units to Imperial units
void metric_conversion() {
  string choice; //Unit of measurement
  double km, m, cm, mm, kg, g, mg, L, ml, K, C;
  
  cout << setw(64) << "\nWhich type of measurement are you converting from?\n\n";
  cout << "Length (km, m, cm, mm)\n";
  cout << "Mass (kg, g, mg)\n";
  cout << "Volume (L, ml)\n";
  cout << "Temperature (Kelvin, Celsius)\n\n";
  cout << "Choice: (Enter the appropriate symbol/unit shown above) ";
  cin >> choice;
  cout << "Please enter your measurement in " << choice << ": ";

  //Series of if statments for each differnt unit of measurement
  if (choice == "km")
  {
    cin >> km;
    cout << "\nYour measurement (" << km << "km) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(3) << "Miles: " << km * .621371 << "\nYards: " << km * 1093.61 << "\nFeet: " << km * 3280.84 << "\nInches: " << km * 39370.1;  
  }  
  else if (choice == "m")
  {
    cin >> m;
    cout << "\nYour measurement (" << m << "m) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(3) << "Miles: " << m * 0.0006 << "\nYards: " << m * 1.0936 << "\nFeet: " << m * 3.2808 << "\nInches: " << m * 39.3701; 
  }
  else if (choice == "cm")
  {
    cin >> cm;
    cout << "\nYour measurement (" << cm << "cm) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(3) << "Yards: " << cm * 0.01093 << "\nFeet: " << cm * 0.03280 << "\nInches: " << cm * 0.39369; 
        
  }
  else if (choice == "mm")
  {
    cin >> mm;
    cout << "\nYour measurement (" << mm << "mm) converted to imperial units are as follows:\n";   
    cout << fixed << setprecision(3) << "Yards: " << mm * 0.00109361 << "\nFeet: " << mm * 0.00328083 << "\nInches: " << mm * 0.0393701;  
  }
  else if (choice == "kg")
  {
    cin >> kg;
    cout << "\nYour measurement (" << kg << "kg) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(3) << "Pounds: " << kg * 2.20462 << "\nOunces: " << kg * 35.274;     
  }
  else if (choice == "g")
  {
    cin >> g;
    cout << "\nYour measurement (" << g << "g) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(3) << "Pounds: " << g * 0.00220462 << "\nOunces: " << g * 0.035274;   
  }
  else if (choice == "mg")
  {
    cin >> mg;
    cout << "\nYour measurement (" << mg << "mg) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(3) << "Pounds: " << mg / 453592.37
    << "\nOunces: " << mg / 28349.523;
  }     
  else if (choice == "L")
  {
    cin >> L;
    cout << "\nYour measurement (" << L << "L) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(3) << "Gallons: " << L * 0.264172 << "\nQuarts: " << L * 1.05669 << "\nPints: " << L * 2.11338 << "\nCups: " << L * 4.16667;     
  }
  else if (choice == "ml")
  {
    cin >> ml;
    cout << "\nYour measurement (" << ml << "ml) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(3) << "Gallons: " << ml * 0.000264172 << "\nQuarts: " << ml * 0.00105669 << "\nPints: " << ml * 0.00211338 << "\nCups: " << ml * 0.00416667;     
  }
  else if (choice == "Kelvin")
  {
    cin >> K;
    cout << "\nYour measurement (" << K << " Kelvin) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(2) << "Fahrenheit: " << (1.8 * (K - 273.15)) + 32;     
  }
  else if (choice == "Celsius")
  {
    cin >> C;
    cout << "\nYour measurement (" << C << " Celsius) converted to imperial units are as follows:\n";
    cout << fixed << setprecision(2) << "Fahrenheit: " << (C * 1.8) + 32;     
  }
  else //Input Validation
  {
    cout << "\n\nYou entered an incorrect choice!";
  }
  end(); //Sends user to end function which holds looping code
}

//Funciton for converting Imperial units to Metric units
void imperial_conversion() {
  string choice; //Unit of measurement
  double mi, yd, ft, inch, lb, oz, gal, qt, pt, cp, F;
  
  cout << setw(64) << "\nWhich type of measurement are you converting from?\n\n";
  cout << "Length (mi, yd, ft, in)\n";
  cout << "Mass (lb, oz)\n";
  cout << "Volume (gal, qt, pt, cp)\n";
  cout << "Temperature (Fahrenheit)\n\n";
  cout << "Choice: (Enter the appropriate symbol/unit shown above) ";
  cin >> choice;
  cout << "Please enter your measurement in " << choice << ": ";

  //Series of if statments for each differnt unit of measurement
  if (choice == "mi")
  {
    cin >> mi;
    cout << "\nYour measurement (" << mi << "mi) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Kilometers: " << mi * 1.60934 << "\nMeters: " << mi * 1609.34 << "\nCenitmeters: " << mi * 160934;  
  }  
  else if (choice == "yd")
  {
    cin >> yd;
    cout << "\nYour measurement (" << yd << "yd) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Kilometers: " << yd * .0009144 << "\nMeters: " << yd * .9144 << "\nCenitmeters: " << yd * 91.44 << "\nMillimeters: " << yd * 914.4;    
  }
  else if (choice == "ft")
  {
    cin >> ft;
    cout << "\nYour measurement (" << ft << "ft) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Kilometers: " << ft * .0003048 << "\nMeters: " << ft * .3048 << "\nCenitmeters: " << ft * 30.48 << "\nMillimeters: " << ft * 304.8; 
        
  }
  else if (choice == "in")
  {
    cin >> inch;
    cout << "\nYour measurement (" << inch << "in) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Kilometers: " << inch / 39370.079 << setprecision(2) << "\nMeters: " << inch * .0254 << "\nCenitmeters: " << inch * 2.54 << "\nMillimeters: " << inch * 25.4;  
  }
  else if (choice == "lb")
  {
    cin >> lb;
    cout << "\nYour measurement (" << lb << "lb) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Kilogram: " << lb * .453592 << "\nGram: " << lb * 453.592 << "\nMilligram: " << lb * 453592;   
  }
  else if (choice == "oz")
  {
    cin >> oz;
    cout << "\nYour measurement (" << oz << "oz) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Kilogram: " << oz * .0283495 << "\nGram: " << oz * 28.3495 << "\nMilligram: " << oz * 28349.5;     
  }
  else if (choice == "gal")
  {
    cin >> gal;
    cout << "\nYour measurement (" << gal << "gal) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Liter: " << gal * 3.78541 << "\nMilliliter: " << gal * 3785.41;  
  }     
  else if (choice == "qt")
  {
    cin >> qt;
    cout << "\nYour measurement (" << qt << "qt) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Liter: " << qt * .946353 << "\nMilliliter: " << qt * 946.353;       
  }
  else if (choice == "pt")
  {
    cin >> pt;
    cout << "\nYour measurement (" << pt << "pt) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Liter: " << pt * .473176 << "\nMilliliter: " << pt * 473.176;       
  }
  else if (choice == "cp")
  {
    cin >> cp;
    cout << "\nYour measurement (" << cp << "cp) converted to metric units are as follows:\n";
    cout << fixed << setprecision(3) << "Liter: " << cp * .24 << "\nMilliliter: " << cp * 240;     
  }
  else if (choice == "Fahrenheit")
  {
    cin >> F;
    cout << "\nYour measurement (" << F << " Fahrenheit) converted to metric units are as follows:\n";
    cout << fixed << setprecision(2) << "Celsius: " << (F - 32) * .555555 << "\nKelvin: " << (F - 32) * .555555 + 273.15;    
  }
  else //Input validation
  {
    cout << "\n\nYou entered an incorrect choice!";
  }
  end(); //Sends user to end function which holds looping code
}

//Allows user to do another conversion or end program
void end()
{
  char loop;
  cout << "\n\nWould you like to do another conversion? (Y/N) ";
  cin >> loop;
  
  if (loop == 'y' || loop == 'Y') 
  {
    main_menu();
  }
  else if (loop == 'n' || loop == 'N') 
  {
    cout << endl << setw(65) << "Thank you for using my conversion program!";
  }
  else //Input validation
  {
    cout << "\nERROR: Please enter either Y or N!";
    end();
  } 
}
