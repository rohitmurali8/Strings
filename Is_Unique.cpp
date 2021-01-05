#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    string s = "prakash";
    int dup = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (s.at(i) == s.at(j) && i != j)
            {
                dup = dup + 1;
            }  
        }
    }
    if (dup > 0)
    {
        cout << "String does not have all unique characters " << endl;
    }
    else
    {
        cout << "String has all unique characters " << endl;
    }
    return 0;
}