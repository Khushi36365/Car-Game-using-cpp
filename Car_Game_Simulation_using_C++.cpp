#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string command = "";
    
    bool Car_Started = false;
    
    while(true){
        cout<<"Enter the command: ";
        getline(cin, command);
        
        for(int i=0; i<command.length(); i++){
            command[i] = tolower(command[i]);
        }
        
        if (command == "start"){
            if(Car_Started){
                cout<<"Car is already started!"<<"\n";
            }
            else{
                Car_Started = true;
                cout<<"Car is strated..Ready to go!"<<"\n";
            }
        }
        
        else if(command == "stop"){
            if(Car_Started == false){
                cout<<"Car is already stopped!"<<"\n";
            }
            else{
                Car_Started = false;
                cout<<"Car stopped."<<"\n";
            }
        }
        
        else if(command == "help"){
            cout<<"Start -> To start the car"<<"\n";
            cout<<"Stop -> To stop the car"<<"\n";
            cout<<"Quit -> To exit"<<"\n";
        }
        
        else if(command == "quit"){
            break;
        }
        
        else{
            cout<<"Sorry, I don't understand!"<<"\n";
        }
    }
    
    return 0;
    
}