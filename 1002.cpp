#include<iostream>
#include<string>
#include<cstring>
#include<map>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int sum = 0;
    for(char& c : input) {
        sum += (int)c - 48;
    }
    string out;
    out = to_string(sum);
    map<int, string> pingyin = {
        {0, "ling"},
        {1, "yi"},
        {2, "er"},
        {3, "san"},
        {4, "si"},
        {5, "wu"},
        {6, "liu"},
        {7, "qi"},
        {8, "ba"},
        {9, "jiu"}
    };
    const char* str = out.c_str();
    int len = strlen(str);
    for(int i=0; i< len; ++i) {
        int k = (int)str[i] - 48;
        if(i < len - 1) cout<<pingyin[k] << " ";
        else cout<<pingyin[k];
        
    }

    return 0;
}