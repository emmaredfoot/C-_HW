#include <iostream>
#include <math.h>

using namespace std;

float randlcg(int);

int main()
{
    int r = 0;
    cout << "How many random numbers should we output?";
    cin >> r ;
    randlcg(r);
    return 0;
}

float randlcg(int r) {
    long int lcg[r]; //replaced 30 with 31 to get the first 30 values
    lcg[0] = 100001;
    int g = 61;
    int c = 1;
    float b=0;
    float sum=0;
    float average=0;
    long int modulus = pow(2,24);
    int count[110]={0};
    int x=0;
    for (int i = 1; i < r; i++) {
        lcg[i] = (lcg[i - 1] * g + c)%modulus;
        b = float(lcg[i])/modulus;
        //cout << "lcg[" << i << "] = " << float(lcg[i])/modulus << endl;
        sum+=float(lcg[i])/modulus;
        average = sum/r;
        x=-1;
        for (float a = 0; a<=1; a+=0.01){ //see if this will work for anything tomorrow
            x++;
            if ((a<b) && (b<=(a+.01))){
                cout << b <<endl;
                cout << x << endl;
                count[x]+=1;
                }
        }
    }
    cout << sum << endl;
    cout << average << endl;
    int output =0;

    // for(x=0; x<r+1; x++)
    // {
    //     cout << "bin counts " << count[x] << endl;
    //     output += count[x];
    //
    // }
    // cout << output << endl;

    return 0;
}
