#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int max = -1;
    int min = 101;
    string maxName;
    string minName;
    string maxId;
    string minId;
    string name;
    string id;
    int score;
    for(int i=0;i<n;i++){
        cin >> name >> id >> score;
        if(score > max) {
            maxName = name;
            maxId = id;
            max = score;
        }
        if(score < min) {
            minName = name;
            minId = id;
            min = score;
        }
    }
    cout << maxName << " " << maxId <<endl;
    cout << minName << " " << minId <<endl;
    return 0;

}

