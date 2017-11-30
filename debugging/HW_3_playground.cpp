#include <iostream>
#include <math.h>
#include <algorithm>
#include</Users/emmaredfoot/eclipse-workspace/Homework/HW_3_hdr.h>
using namespace std;

int main() {
    long int lcg_array[50];
    lcg_array[0] = 100001;
    int g = 61;
    int c = 1;
    int modulus = pow(2,24);
    float answer[50];
    for(int i=1; i<=10; i++){
        lcg_array[i] = (lcg_array[i-1]*g + c)%modulus;
        answer[i] = float(lcg_array[i])/modulus;
        cout << "lcg[i]= " << answer[i] << endl;
    }

    return 0;
}

//============================================================================
// Name        : HW_3_ER.cpp
// Author      : Emma Redfoot
// Version     :
// Copyright   : Your copyright notice
// Description : LCG pseudorandum number generator
//============================================================================

#include <iostream>
#include <math.h>
#include <algorithm>
#include</Users/emmaredfoot/eclipse-workspace/Homework/HW_3_hdr.h>
using namespace std;

//Define a counter for each random number generated
int numCalls = 0;

//Begin main function, which will call and print the random number generated
int main() {

//Define the final array which the answer will be stored in and printed
float answer;

//Use a do-while loop to initiate calling the random number generator
do{
    answer = randlcg();
    cout << "lcg[" << numCalls << "] = " << answer << endl;
}while(numCalls<30);

//Find the mean for 100; 10,000; 1,000,000; 100,000,000
long int range;
cout << "Over what range would you like to find the mean (100; 10,000; 1,000,000; 100,000,000)? ";
cin >> range;

    return(0);
}

//Build a function to actually generate the random number. Make sure it is a float in order to pass back a normalized (between 0-1) value
float randlcg() {
    numCalls++;
    cout << numCalls;
    long int lcg_array;
    float normalize;
    lcg_array[0] = 100001;
    int g = 61;
    int c = 1;
    int modulus = pow(2,24);
    lcg_array[numCalls] = (lcg_array[numCalls-1]*g + c)%modulus;
    normalize[numCalls] = float(lcg_array[numCalls])/modulus;
    return normalize[numCalls];

}

float find_mean(float answer)

//Sort the array
int sorted_array = sort(freq, freq + range);
for (int m=0; m<=range; m++){
    cout << sorted_array[m];
}

// int histogram(int range) {
//     //create equidistant bins
//     float bin_start[100];
//     bin_start[0]=0;
//     for (int n=1; n<=100; n++){
//         bin_start[n]=bin_start[n-1]+.01;
//     }
// //     //cout << bin_start[100] << endl;
// //
//     unsigned histogram[300];
//     for (size_t a=0; a<=range; a++){
// 	       double f=randlcg(range).frequency();
// 	        histogram[size_t((f<1)?0:log10(f))]++;
//         }
//         return(0);
// }

// if normalize is >bin_start[n-1] and <bin_start[n]
//
// }

//Writing frequency data to another file
// ofstream myotherfile;
// myotherfile.open("histogram_data.csv");
// myotherfile << "This is the first cell in the first column. \n";
// for(x=0; x<=100; x++){
//     //cout << "Count[" << x << "] =" << count[x] << endl;
//     myotherfile << count[x] << endl;
// }
// myotherfile.close();
// return(0);

//Sum up the random numbers generated in the array
//I am also using this for loop to create a new array for the "binning"
//My binning strategy is to multiply the normalized values by 100, then round them to the nearest integer.
//Thus, I can count up how many of each integer is in the array, giving me the histogram
for (long int i=0; i<=range; i++){
    numerator += answer[i];
    freq[i] = floor(answer[i]*100);
    if (freq[i] != 0){
        period[i]=1/freq[i];
        period_sum+=period[i];
    }
    //Could find the period by adding up the 1 over the frequency and dividing by the total number
    //cout << "New Array[" << i << "] =" << freq[i] << endl;
}

//Find the average by dividing by the total number of values in the array
//Count how often each of the integers occur in the freq array
int x=0;
int count[100];
int value[100];

//Initializing arrays
for(x=0; x<=100; x++){
    value[x]=x;
    count[x]=0;
}

count[0]=0;

//Iterate through the value array for each number in the freq array. Count whenever a number is found.
for (long int j = 0; j<range; j++){
    for (int k=0; k<=100; k++){
        if (freq[j] == value[k]){
            count[k]++;
        }
    }
}
