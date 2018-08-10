/**
*two dimension of using vector to construct.
*
*
*/


#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(int argc,char** argv)
{
    vector<vector<int>> arr(3,vector<int>(2,0));
    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[1][0] = 2;
    arr[1][1] = 4;
    arr[2][0] = 100;
    arr[2][1] = 200;

    for(vector<vector<int>> ::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        for(vector<int>::iterator iti = (*it).begin(); iti != (*it).end(); ++iti)
        {
            cout << *iti << "\t";
        }
        cout << endl;

    }

    return 0;
}
