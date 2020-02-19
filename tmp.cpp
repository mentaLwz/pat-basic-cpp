#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) { return a > b;}
int main(){
    int n;
    cin >> n;
    cout<<"n "<<n<<endl;
    vector<int> v(n);
    int a;
    int arr[10000];
    int idx[10000];
    for(int i=0;i<n;i++) {
        cin >> a;
        arr[a] = 0;
        idx[i] = a;
        v[i] = a;
    }
    cout << v.size();
    int num;
    for(int i=0; i<n; i++) {
        num = idx[i];
        cout<< "num "<< num<<endl;
        arr[num] = 1;
        while(num != 1) {
            
            if(num %2 == 0){
                num = num / 2;
            }else{
                num = (3 * num + 1) / 2;
            }
            arr[num] = 1;
        }
    }

    // sort(v.begin(), v.begin(), cmp);
    // int flag = 0;
    // cout<<v.size();
    // for(int i=0; i<v.size();i++){
    //     if(arr[v[i]] == 0)
    //     {
    //         if(flag) cout<<" ";
    //         cout<<v[i];
    //         flag = 1;}
    
    // }
    return 0;

}

