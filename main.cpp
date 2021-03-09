/* Temperature.cpp - This C++ program converts a Fahrenheit 
   temperature to Celsius and back
   Input:  Interactive
   Output: Fahrenheit temperature followed by Celsius 
   temperature
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double fahrenheit;
   double celsius;
   
   cout << "♦ ♦ ♦ ♦ ♦ Temperature Conversion ♦ ♦ ♦ ♦ ♦\n\n";

   // Prompt user
   cout << "  Enter Fahrenheit temperature: ";
   
   // Get interactive user input
 
   cin >> fahrenheit;
   
   // Calculate celsius
   
   celsius = ((fahrenheit - 32) * (5.0/9.0));
   
   // Output Celsius Converstion
   cout << fixed << setprecision(1) ;    // displays decimals
   cout << "\n        Fahrenheit temperature: " << fahrenheit ;
   cout << "\n           Celsius temperature: " << celsius << endl;
   
   cout << "\n ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n\n";
   cout << "  Enter Celsius temperature: ";
   
   // Get interactive user input
 
   cin >> celsius;
   
   // Calculate celsius
   
   fahrenheit = ((celsius * 1.8) + 32);
   
   // Output Celsius Converstion
   cout << fixed << setprecision(1) ;    // displays decimals
   cout << "\n           Celsius temperature: " << celsius;
   cout << "\n        Fahrenheit temperature: " << fahrenheit << endl;
   
   return 0;
} 