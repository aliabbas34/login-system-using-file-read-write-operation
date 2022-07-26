//next task is to thoroughly go through the code and under stand the concepts used in it
//every line should be explainable by you
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>

using namespace std;

bool isLoggedIn(){
    string username,password,un,pw;
    cout<<"Enter username : "; cin>>username;
    cout<<"Enter password : "; cin>>password;
    ifstream read("data\\"+username+".txt");
    getline(read,un);
    getline(read,pw);
    if((un == username)&&(pw == password))
    return true;
    else
    return false;
}



int main(){
    int choice;
    cout<<"1. REGISTER\n2.LOGIN\nEnter your choice : "; cin>>choice;
    if(choice==1){
        string username,password;
        cout<<endl;
        cout<<"select a username : "; cin>>username;
        cout<<"select a password : "; cin>>password;
        ofstream file;
        file.open("data\\"+username+".txt");
        file<<username<<endl<<password;
        file.close();

        main();
    }
    else if(choice==2){
        bool status=isLoggedIn();
        if(!status){
            cout<<"false attempt "<<endl;
            system("PAUSE");//to stop the control from entering into main (study further it's rough knowledge)
            return 0;//0 determines that the main will not be executed (study further it's rough knowledge)
        }
        else{
            cout<<"Succesfully logged in "<<endl;
            system("PAUSE");//to stop the control from entering into main (study further it's rough knowledge)
            return 1;//1 determines that the main will be executed (study further it's rough knowledge)
        }
    }
}