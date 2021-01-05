#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

string rotate(string s, int offset){
    string rotated;
    int temp_off = offset;
    while(temp_off != 0){
        rotated.append(s.substr(s.size()-temp_off, 1));
        temp_off =  temp_off - 1;
    }
    for (int i = 0; i < s.size() - offset; i++)
    {
        rotated.append(s.substr(i, 1));
    }
    return rotated;
}

bool isRotated(string first, string second){
    if(first.size() != second.size())
        return false;
    else{
        for (int i = 0; i < second.size(); i++)
        {
            if (first == rotate(second, i))
            {
                return true;
                break;
            }
        }
        return false;
    }
}

int main(){
    cout << "Rotated string is " << rotate("waterbottle", 5) << endl;
    cout << "Checking if first string is rotated version of second is " << isRotated("waterbottle", "otalewaterb") << endl;
    return 0;
}