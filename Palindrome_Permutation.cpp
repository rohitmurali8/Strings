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

string clean_string(string s){
    string clean;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != ' ')
        {
            char c = tolower(s.at(i));
            string low(1, c);
            clean.append(low);
        }
    }
    return clean;
}

bool palin_permute(string s){
    string modified = clean_string(s);
    vector<int> cnts;
    int not_palin = 0;
    for (int i = 0; i < modified.size(); i++)
    {
        int num = count(modified, modified.at(i));
        cnts.push_back(num);
    }
    for (int j = 0; j < cnts.size(); j++)
    {
        if (cnts[0] != cnts[j])
        {
            not_palin = not_palin + 1;
        }    
    }
    if (cnts.size() % 2 != 0)
    {
        if (not_palin == 1)
            return true;
        else
            return false;
    }
    else
    {
        if (not_palin == 0)
            return true;
        else
            return false;
    }        
}

int main(){
    cout << "Checking if palindrome permutation is " << palin_permute("redivider") << endl;
    return 0;    
}