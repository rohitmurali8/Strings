#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

string URL(string s){
    string url = "%20";
    string new_url;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) == ' ')
        {
            new_url.append(url);
        }
        else
        {
            new_url.append(s.substr(i,1));
        }
        
    }
    return new_url;
}

int main(){
    string url = URL("Mr John Smith");
    cout << "The URLified string is " << url << endl;
    return 0;    
}