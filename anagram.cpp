#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;;
    cout<<"Enter first String:"<<endl;
    getline(cin,s1);
    cout<<"Enter second String"<<endl;
    getline(cin,s2);
    int a[256];
    bool isAnagram=true;
    if(s1.length() != s2.length())
        isAnagram=false;
    else{
        for(int i=0;i<s1.length();i++){
            int index=(int)s1[i];
            a[index]++;
        }
        for(int i=0;i<s2.length();i++){
            int index=(int)s2[i];
            a[index]--;
        }
        for(int i=0;i<256;i++)
            if(a[i] != 0){
                isAnagram=false;
                break;
            }
    }
    if(isAnagram)
        cout<<"Anagram"<<endl;
    else
        cout<<"Anagram"<<endl;
    return 0;
}
