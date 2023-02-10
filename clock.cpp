#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main(){
    int h,m,s;
    cout<<"enter the hour"<<endl;

    cin>>h;
    cout<<"enter the minute "<<endl;
    cin>>m;
    cout<<"enter the second"<<endl;
    cin>>s;

    int a=0;
    while (a==0){
        system("cls");
        cout<<h<<":"<<m<<":"<<s;
        Sleep(1000);
        s++;
        if(s>59){
            s=0;
            m++;


        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>23){
            h=0;
        }
    }
    return 0;
}