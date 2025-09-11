#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<a;
    int notes[]={1000,500,200,100,50,20,10,5,2,1};
    for(int i=0;i<10;i++){
        int b=a/notes[i];
        cout<<"\n"<<b<<" nota del re,"<<fixed<<setprecision(2)<<notes[i]<<endl;
        a=a%notes[i];
    }
    return 0;
}