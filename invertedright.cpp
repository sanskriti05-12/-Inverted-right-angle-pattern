#include<iostream>
using namespace std;
int main(){
    int r,c;
    for(r=1;r<=5;++r){
        for(c=1;c<=5;++c){
            if(c<=6-r){
                cout<<"*";
            }
                else{
                    cout<<" ";
                }
            
        }
        cout<<endl;
    }

}