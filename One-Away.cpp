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

bool one_away(string first, string second){
    int diff = 0;
    if (first.size() - second.size() <= 1 || second.size() - first.size() <= 1)
    {
        for (int i = 0; i < second.size(); i++)
        {
            if (!isPresent(first, second.at(i)))
                diff = diff + 1;
        }
        if (first.size() - second.size() == 1 || second.size() - first.size() == 1){
            if (diff == 0)
                return true;
            else
                return false;
        }
        else if (first.size() - second.size() == 0 || second.size() - first.size() == 0){
            if (diff == 1)
                return true;
            else
                return false;
        }
    }
    else
        return false;
}

int main(){
    cout << "Whether the strings are one away is " << one_away("pale", "bake") << endl;
    return 0;    
}