#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

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

string string_compress(string s){
    string compressed;
    int num = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        while(i < s.size() - 1 && s.at(i) == s.at(i+1))
        {
            num = count(s, s.at(i));
            i++;
        }
        compressed.append(s.substr(i,1));
        compressed.append(to_string(num));            
    }
    return compressed;
}

int main(){
    cout << "Compressed string is " << string_compress("aabbbbbeeeeeecccccc") << endl;
    return 0;
}