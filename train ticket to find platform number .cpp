#include<iostream>
using namespace std;
int main(){
    int ticketnumber;
    cout<<"enter ticket number:";
    cin>>ticketnumber;
    
    if(ticketnumber<=10){
        cout<<"platform number 1";
        
    }else if(ticketnumber>=11&&ticketnumber<=20){
        cout<<"platform number 2";
    }else if(ticketnumber>=21&&ticketnumber<=30){
        cout<<"platform number 3";
    }else if(ticketnumber>=31&&ticketnumber<=40){
        cout<<"platform number 4";
        
    }
    return 0;
}
