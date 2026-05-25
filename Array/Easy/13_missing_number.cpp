#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,4,5,6,7,8,9};

int xorr=0;

for(int i=1;i<arr.size();i++){
    xorr^=arr[i];
}

cout<<"missing no: "<<xorr<<endl;


    return 0;
}