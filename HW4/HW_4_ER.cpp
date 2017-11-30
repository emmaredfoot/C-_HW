//============================================================================
// Name        : HW_4_ER.cpp
// Author      : Emma Redfoot
// Version     :
// Copyright   : Your copyright notice
// Description : Pointers
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

void noNegatives(int* x);
void swap(int* i, int* j);

//global variable
int* p2;

int main() {
    //Define the initial variables
    int x, y;
    int* p1;
    int a[2];

    //Save the address of x into p1 and print out x
    p1 = &x;
    *p1 = 99;
    cout << "x=" << x <<endl;

    //Save the address of y into p1
    p1 = &y;

    //Change the value of y to -300
    *p1=-300;
    cout << "y=" << y << endl;

    //Define new variable
    int temp;

    //Save the address of x into p2
    p2 = &x;

    //Swap p1 and p2 values
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "x=" << x << endl;
    cout << "y=" << y << endl;

    //Invoking the function and passing x
    noNegatives(&x);

    //Invoking the function and passing y
    noNegatives(&y);

    //Pointing p2 at the first location in array a
    p2 = &a[0];

    //Use p2 and x to initialize the first elecement of a with the value of x, display using only p2
    *p2 = x;
    cout << "a[0]= " << *p2 << endl;

    //Initialize a[1] to y using only p2 and y, display using only p2
    p2=&a[1];
    *p2=y;
    cout << "a[1]= " << *p2 << endl;

    //Use p1, p2, and temp to swap the values in the two elements of array 'a'
    //point p1 at a[0], then point p2 at a[1]
    p1 = &a[0];
    //cout << "a[0]= " << *p1 << endl;
    p2 = &a[1];
    //cout << "a[1]= " << *p2 << endl;
    temp = *p1;
    p1 = p2;
    p1 = &temp;
    cout << "a[0]= " << *p2 << " a[1]= " << *p1 << endl;

    //Call swap passing in the values for x and y
    swap(&x, &y);

    return(0);
}

void noNegatives(int* x){
    if (*x<0){
        *p2=0;
        cout << "y is:" << *p2 << endl;
    }
    else{
        p2 = x;
        cout << "x is:" << *p2 << endl;
    }

}

//Function which swaps the two values of the pointers sent into the function
void swap(int* i, int* j){
    cout << "i= " << *i << " j= " << *j << endl;
    int temp;
    temp = *i;
    *i=*j;
    *j=temp;
    cout << "i= " << *i << " j= " << *j << endl;

}
