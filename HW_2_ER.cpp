//============================================================================
//// Name        : HW_2 Washer
//// Author      : Emma Redfoot
//// Version     :
//// Copyright   : Your copyright notice
//// Description : Washer Volume in C++, Ansi-style
////=======================================================================
//

#include <iostream>
#include <math.h>
using namespace std;


int main() {
    double height, r_1, r_2;

     cout << "Enter the height of the washer in millimeters: ";
     cin >> height;

     cout << "Enter the outer radius of the washer in millimeters: ";
     cin >> r_1;

     cout << "Enter the inner radius of the washer in millimeters: ";
     cin >> r_2;

     if(r_1 < r_2){
         cout << "The outer radius has to be greater than the inner radius. Please rerun the program. \n";
         return(0);
     }
     else{
        cout << "The volume of the washer in mm^3 is " << (pow (r_1, 2)-pow (r_2, 2))*M_PI*height << ".\n";
        return(0);
     }

}
