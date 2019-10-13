#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size, ro,r;
        cin>>size;
        cin>>r;
        ro=r%size;
        int a[size],b[size];
        for(int i=0;i<size;i++)
            cin>>a[i];
        for(int i=0;i<size;i++){
            b[i]=a[(i+ro)%size];
        }
        for(int i=0;i<size;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}