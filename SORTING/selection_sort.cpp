#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int ar[100];
for(int i=0;i<n;i++){
    cin>>ar[i];
}
int index=0;
for(int i=0;i<n;i++){

    index=i;
    for(int j=i+1;j<n;j++){
        if(ar[j]<ar[index]){
            index=j;
        }
    }
    swap(ar[i],ar[index]);
}
for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}


    return 0;
}