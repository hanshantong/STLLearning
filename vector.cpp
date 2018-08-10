#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc,char** argv)
{
    vector<string> s;

    s.push_back("apple");
    s.push_back("peach");
    s.push_back("pear");

    cout << "Loop by index:\n";
    for(int i = 0; i < s.size(); ++i)
    {
        cout << s[i] << endl;
    }

    cout << endl << "Constant Iterator:" << endl;
    for(vector<string>::iterator it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << endl;
    }

    cout << endl << "Reversed Iterator:" << endl;
    for(vector<string>::reverse_iterator it = s.rbegin(); it != s.rend(); ++it)
    {
        cout << *it << endl;
    }

    cout << "Basic output:\n";
    cout << s.size() << endl;
    cout << s[2] << endl;

    swap(s[0],s[2]);
    cout << s[2] << endl;


    return 0;
}




