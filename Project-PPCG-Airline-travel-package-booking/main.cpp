#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "LL.h"
#include <exception>
using namespace std;

int main(){
    int phone,cn,choice,con,h;
    string na,email,pack,classs;
    LL l;
    user *b,*a;
    check_cin check;
    while(choice!=0){
        choice=1;
        system ("CLS");
    do{
    try{
        cout<<endl;
        cout<<"                                                             ";
        cout<< "1.Enter reserve"<<endl;
        cout<<"                                                             ";
        cout<< "2.Check your reservation"<<endl;
        cout<<"                                                             ";
        cout<< "3.Cancle reservation"<<endl;
        cout<<"                                                             ";
        cout<< "4.Exit"<<endl;
        cout<<"                                                             ";
        cout<< "Enter your choice : ";
        cin>>choice;
        h=0;
        if(cin.fail()){throw check;}
    }catch(exception &e){
                        cout<<e.what()<<endl;
                        cin.clear();
                        cin.ignore(50,'\n');
                        h=1;}
    }while(h);
        system ("CLS");
        if(choice==1){
            con=1;
            while(con!=2){
                a = new user();
                cout<<"|    Enter your name : ";
                a->set_name();
                cout<<"|    Enter your surname : ";
                a->set_surname();
                cout<<"|    Enter your Email : ";
                a->set_email();
                cout<<"|    Enter your passsport : ";
                a->set_passsport();
                cout<<"|    Enter your phone number : ";
                a->set_phone_number();
                cout<<"|    Enter your person : ";
                a->set_person();
                system ("CLS");
                trip *t;
                t=a;
                t->package();
                a->set_price();
                b=a;
                l.add_user(b);
                t->display();
                a->discount();
                t->display();
                do{
                    try{
                cout<<endl;
                cout<<"                                                             ";
                cout<<"Do you want to reserve more ?"<<endl;
                cout<<"                                                             ";
                cout<<"      1.Yes        2.No         "<<endl;
                cout<<"                                                             ";
                cin>>con;
                h=0;
                if(cin.fail()){throw check;}
                 }catch(exception &e){
                        cout<<e.what()<<endl;
                        cin.clear();
                        cin.ignore(50,'\n');
                        h=1;}
                }while(h);
                system ("CLS");
            
            }
        }
        else if (choice ==2){

          long tel;
          do{
            try{
          cout<<"Please enter your phone number : ";
          cin>>tel;
          h=0;
          if(cin.fail()){throw check;}
          } catch(exception &e){
                        cout<<e.what()<<endl;
                        cin.clear();
                        cin.ignore(50,'\n');
                        h=1;}
        }while(h);
        system ("CLS");
           l.display_user(tel);
           cout<<"                                                             ";
           cout<<"   ---Press any key to continue.---   "<<endl;
           cout<<"                                                             ";
           getch();
        } 
        else if (choice ==3) {
            long tel;
            int d;
            do{
            try{
            cout<<"Please enter your phone number : ";
            cin>>tel;
            h=0;
            if(cin.fail()){throw check;}
            } catch(exception &e){
                        cout<<e.what()<<endl;
                        cin.clear();
                        cin.ignore(50,'\n');
                        h=1;}
            }while(h);
            system ("CLS");
            l.delete_user(tel);
            getch();
            system ("CLS");

        }
        else if (choice == 9999) {
            l.show_alluser();
            cout<<"                                                             ";
            cout<<"---Press any key to continue.---"<<endl;
            cout<<"                                                             ";
            getch();
            system ("CLS");
        }
        else choice=0;
        cout<<endl;
    }
    return 0;
}