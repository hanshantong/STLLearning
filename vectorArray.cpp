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
    /*#define two dimension array*/
    vector<vector<int>> arr(3,vector<int>(2,0));
    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[1][0] = 2;
    arr[1][1] = 4;
    arr[2][0] = 100;
    arr[2][1] = 200;

    /*#Loop by iterator*/
    for(vector<vector<int>> ::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        for(vector<int>::iterator iti = (*it).begin(); iti != (*it).end(); ++iti)
        {
            cout << *iti << "\t";
        }
        cout << endl;

    }

    /*#define three dimension array*/
    vector<vector<vector<float>>> data(5,vector<vector<float>>(4,vector<float>(3,1.0f)));
    //above definition is equal to:

    vector<float> v1(3,2.0f);
    vector<vector<float>> v2(4,v1);
    vector<vector<vector<float>>> v3(5,v2);

    v3[0][0][0] = 5;
    v3[1][0][0] = 10;
    v3[2][0][0] = 15;
    v3[3][0][0] = 20;
    v3[4][0][0] = 25;

    cout << endl;
    for(int i = 0; i < v3.size(); ++i)
    {
        for(int j = 0; j < v2.size(); ++j)
        {
            for(int k = 0; k < v1.size(); ++k)
            {
                cout << v3[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    vector<int> vv();


    return 0;
}
