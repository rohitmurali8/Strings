#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

bool isPresent(string s, char c){
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == c)
        {
            return true;
            break;
        }
    }
    return false;
}

int count(string s, char c){
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == c)
        {
            num = num + 1;
        }
    }
    return num;
}

bool permutation(string first, string second){
    int permut = 0;
    if (first.size() != second.size())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < first.size(); i++)
        {
            if (isPresent(second, first.at(i)) && count(first, first.at(i)) == count(second, first.at(i)))
            {
                permut = permut + 1;
            }
        }
        if (permut == first.size())
        {
            return true;
        }
        else
        {
            return false;
        }
    }  
}

int main(){
    cout << "Checking if permutation is " << permutation("sensex", "sessen") << endl;
    return 0;
}