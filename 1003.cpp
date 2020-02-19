#include<iostream>
#include<vector>
#include<string>
using namespace std;



bool check(string& line) {
    int pNum = 0;
    int aNum = 0;
    int tNum = 0;
    int idx = 0;
    int pIdx = 0;
    int tIdx = 0;
    int len = line.length();
    for(char& c : line) {
        if(c == 'P' || c == 'A' || c == 'T') {

            if(c == 'P'){
                pIdx = idx;
                pNum += 1;
            }else if(c == 'A') {
                aNum += 1;
            }else {
                tIdx = idx;
                tNum += 1;
            }
            idx += 1;
            continue;
        }else return false;
    }
    // cout<<"tIdx pIdx len "<<tIdx<<" "<<pIdx<<" "<<len<<endl;
    if(pNum != 1 || tNum != 1 ) return false;
    if(tIdx - pIdx <= 1) return false;
    if(tIdx - pIdx == 2 && pNum == 1 && tNum == 1) return true;
    if(tIdx - pIdx == len - 1) return true;
    if((len - tIdx - 1) - (tIdx - pIdx -1)* pIdx == 0  ) return true;



    return false;
}

int main() {
    int n;
    vector<string> input;
    cin >> n;
    for(int i=0;i < n; i++) {
        string line;
        
        cin >> line;
        input.push_back(line);
    }
    for(int i=0;i<n - 1;i++) {
        if(check(input[i])){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    if(check(input[n-1])) {
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}