class check_cin:public exception{
    public :const char *what()const throw(){
    cout<<endl;
    return"| Error! please try again |";}
    };check_cin check;
using namespace std;
class trip{
        string pack;
        string classs; 
public :
    trip(string="no",string="no");
    virtual ~trip();
    virtual void display();
    void package();
    void asia();
    void europe();
    void australia();
    void north_america();
    void south_america();
    void africa();
    void classes();
    void set_pack(string);
    void set_class(string);
    string get_pack(){return pack;};
    string get_class(){return classs;};
};
trip::trip(string z,string w){
    this->pack=z;
    this->classs=w;
}

trip::~trip(){
}

void trip::display(){
    cout<<"                                                             ";
    cout<<"Your Trip is : "<<pack<<endl;
    cout<<"                                                             ";
    cout<<"Your class is : "<<classs<<endl;
}

void trip::package(){
    int choice;
    cout<<"                                                             ";
    cout<<"-------Please select continent-------"<<endl;
    cout<<"                                                             ";
    cout<<"|    1.Asia                         |    "<<endl;
    cout<<"                                                             ";
    cout<<"|    2.Europe                       |    "<<endl;
    cout<<"                                                             ";
    cout<<"|    3.Australia                    |    "<<endl;
    cout<<"                                                             ";
    cout<<"|    4.North America                |    "<<endl;
    cout<<"                                                             ";
    cout<<"|    5.South America                |    "<<endl;
    cout<<"                                                             ";
    cout<<"|    6.Africa                       |    "<<endl;
    cout<<"                                                             ";
    cout<<"-------------------------------------"<<endl;
    check_cin check;
    int h;
    do{
        do{
            try{
                cout<<"                                                             ";
                cout<<"choose your zone : ";
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
    switch(choice){
        case 1 :   asia();
                    break;
        case 2 : europe();
                    break;
        case 3 : australia();
                    break;
        case 4 : north_america();
                    break;
        case 5 : south_america();
                    break;
        case 6 : africa();
                    break;
        default : cout<<"Enter again!!!!"<<endl;
                    break;
    }
   }while(choice>6 || choice<1);
}

void trip::asia(){
    int choice;
    cout<<"------------------ Please Select ------------------"<<endl;
    cout<<"1.Vietnam and China 6 Days 5 Nights "<<endl;
    cout<<"  Depart on 12 July 2023 Return on 17 July 2023" << endl;
    cout<<"  Price for First Class   : 127,500 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 63,800 Baht per person" << endl;
    cout<<"  Price for Economy Class : 31,800 Baht per person" << endl<<endl;
    cout<<"2.South Korea Japan 6 Days 5 Nights"<<endl;
    cout<<"  Depart on 18 July 2023 Return on 23 July 2023" << endl;
    cout<<"  Price for First Class   : 188,000 Baht per person"  << endl;
    cout<<"  Price for Buiseness     : 94,000 Baht per person" << endl;
    cout<<"  Price for Economy Class : 47,400 Baht per person" << endl<<endl;
    cout<<"3.India Nepal 6 Days 5 Nights"<<endl;
    cout<<"  Depart on 24 July 2023 Return on 29 July 2023" << endl;
    cout<<"  Price for First Class   : 199,999 Baht per person" << endl;
    cout<<"  Price for Buiseness     : 99,999 Baht per person" << endl;
    cout<<"  Price for Economy Class : 40,999 Baht per person" << endl<<endl;
    cout<<"4.Singapore Philippines 6 Days 5 Nights"<<endl;
    cout<<"  Depart on 30 July 2023 Return on 4 August 2023" << endl;
    cout<<"  Price for First Class   : 170,000 Baht per person" << endl;
    cout<<"  Price for Buiseness     : 85,800 Baht per person" << endl;
    cout<<"  Price for Economy Class : 42,900 Baht per person" << endl;
    check_cin check;
    int h;
    do{
        do{
            try{
                cout<<"Enter your package : ";
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
    switch(choice){
        case 1 : set_pack("Vietnam China");
                 classes();
                 break;
        case 2 : set_pack("South Korea Japan");
                classes();
                break;
        case 3 :set_pack("India Nepal");
                classes();
                break;
        case 4 : set_pack("Singapore Philippines");
                classes();
                break;
        default : cout<<"Enter again!!!!"<<endl;
                break;
    }
    }while(choice>4 || choice<1);
}
void trip::europe(){
    int choice;
    cout<<"------------------ Please Select ------------------"<<endl;
    cout<<"1.Ireland and Greenland 10 Days 9 Nights "<<endl;
    cout<<"  Depart on 1 July 2023 Return on 10 July 2023" << endl;
    cout<<"  Price for First Class   : 1,639,200 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 819,200 Baht per person" << endl;
    cout<<"  Price for Economy Class : 409,800 Baht per person" << endl<<endl;
    cout<<"2.United kingdom, France and Italy 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 11 July 2023 Return on 20 July 2023" << endl;
    cout<<"  Price for First Class   : 550,000 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 280,000 Baht per person" << endl;
    cout<<"  Price for Economy Class : 150,000 Baht per person" << endl<<endl;
    cout<<"3.Belgium Netherlands 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 21 July 2023 Return on 30 July 2023" << endl;
    cout<<"  Price for First Class   : 311,600 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 155,800 Baht per person" << endl;
    cout<<"  Price for Economy Class : 77,900 Baht per person" << endl<<endl;
    cout<<"4.Croatia, Czech and republican 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 31 July 2023 Return on 8 August 2023" << endl;
    cout<<"  Price for First Class   : 359,600 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 179,500 Baht per person" << endl;
    cout<<"  Price for Economy Class : 899,000 Baht per person" << endl<<endl;
    cout<<"5.Norway, Sweden and Finland 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 9 August 2023 Return on 18 August 2023" << endl;
    cout<<"  Price for First Class   : 639,000 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 319,800 Baht per person" << endl;
    cout<<"  Price for Economy Class : 159,900 Baht per person" << endl<<endl;
    cout<<"6.Russia Latvia and Germany 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 19 August 2023 Return on 28 August 2023" << endl;
    cout<<"  Price for First Class   : 449,500 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 249,750 Baht per person" << endl;
    cout<<"  Price for Economy Class : 124,880 Baht per person" << endl<<endl;
    cout<<"7.Spain portugal 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 29 August 2023 Return on 7 September 2023" << endl;
    cout<<"  Price for First Class   : 531,600 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 265,800 Baht per person" << endl;
    cout<<"  Price for Economy Class : 132,900 Baht per person" << endl<<endl;
    check_cin check;
    int h;
    do{
        do{
            try{
                cout<<"Enter your package : ";
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
    switch(choice){
         case 1 : set_pack("Ireland  Greenland");
                 classes();
                 break;
        case 2 : set_pack("United kingdom, France and Italy");
                classes();
                break;
        case 3 :set_pack("Belgium Netherlands");
                classes();
                break;
        case 4 : set_pack("Croatia, Czech and republican");
                classes();
                break;
        case 5 : set_pack("Norway, Sweden and Finland");
                classes();
                break;
        case 6 :set_pack("Russia Latvia and Germany");
                classes();
                break;
        case 7 : set_pack("Spain portugal");
                classes();
                break;
        default : cout<<"Enter again!!!!"<<endl;
                    break; 
    }
    
    }while(choice>7 || choice<1);
}
void trip::australia(){
    int choice;
    cout<<"------------------ Please Select ------------------"<<endl;
    cout<<"1.Australia 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 20 July 2023 Return on 29 July 2023" << endl;
    cout<<"  Price for First Class   : 1,599,000 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 620,000 Baht per person" << endl;
    cout<<"  Price for Economy Class : 319,800 Baht per person" << endl<<endl;
    cout<<"2.Newzealand 7 Days 6 Nights"<<endl;
    cout<<"  Depart on 30 July 2023 Return on 5 August 2023" << endl;
    cout<<"  Price for First Class   : 583,500 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 291,000 Baht per person" << endl;
    cout<<"  Price for Economy Class : 145,900 Baht per person" << endl<<endl;
    check_cin check;
    int h;
    do{
        do{
            try{
                cout<<"Enter your package : ";
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
    switch(choice){
        case 1 : set_pack("Australia");
                 classes();
                 break;
        case 2 : set_pack("Newzealand");
                classes();
                break;
        default : cout<<"Enter again!!!!"<<endl;
                    break;
    }
    }while(choice>2 || choice<1);
}
void trip::north_america(){
    int choice;
    cout<<"------------------ Please Select ------------------"<<endl;
    cout<<"1.Canada 12 Days 11 Nights"<<endl;
    cout<<"  Depart on 1 July 2023 Return on 12 July 2023" << endl;
    cout<<"  Price for First Class   : 879,600 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 439,800 Baht per person" << endl;
    cout<<"  Price for Economy Class : 219,900 Baht per person" << endl<<endl;
    cout<<" 2.United States 8 Days 7 Nights"<<endl;
    cout<<"  Depart on 14 July 2023 Return on 21 July 2023" << endl;
    cout<<"  Price for First Class   : 399,999 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 199,900 Baht per person" << endl;
    cout<<"  Price for Economy Class : 99,999 Baht per person" << endl<<endl;
    cout<<"3.Mexico 17 Days 16 Nights"<<endl;
    cout<<"  Depart on 23 July 2023 Return on 8 August 2023" << endl;
    cout<<"  Price for First Class   : 787,600 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 393,500 Baht per person" << endl;
    cout<<"  Price for Economy Class : 196,900 Baht per person" << endl<<endl;
    check_cin check;
    int h;
    do{
        do{
            try{
                cout<<"Enter your package : ";
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
    switch(choice){
        case 1 : set_pack("Canada");
                 classes();
                 break;
            case 2 : set_pack("United States");
                 classes();
                 break;
        case 3 : set_pack("Mexico");
                 classes();
                 break;
        default : cout<<"Enter again!!!!"<<endl;
                break;
    }
    }while(choice>3 || choice<1);
}
void trip::south_america(){
    int choice;
    cout<<"------------------ Please Select ------------------"<<endl;
    cout<<"1.Brazil 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 3 July 2023 Return on 12 July 2023" << endl;
    cout<<"  Price for First Class   : 789,900 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 399,900 Baht per person" << endl;
    cout<<"  Price for Economy Class : 199,900 Baht per person" << endl<<endl;
    cout<<"2.Colombia 11 Days 9 Nights"<<endl;
    cout<<"  Depart on 13 July 2023 Return on 23 July 2023" << endl;
    cout<<"  Price for First Class   : 559,600 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 279,800 Baht per person" << endl;
    cout<<"  Price for Economy Class : 138,900 Baht per person" << endl<<endl;
    cout<<"3.Argentina 12 Days 11 Nights"<<endl;
    cout<<"  Depart on 25 July 2023 Return on 4 August 2023" << endl;
    cout<<"  Price for First Class   : 1,270,000 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 635,000 Baht per person" << endl;
    cout<<"  Price for Economy Class : 317,500 Baht per person" << endl<<endl;
    cout<<"4.Peru Bolivia 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 5 August 2023 Return on 14 August 2023" << endl;
    cout<<"  Price for First Class   : 999,999 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 550,000 Baht per person" << endl;
    cout<<"  Price for Economy Class : 300,000 Baht per person" << endl<<endl;
    check_cin check;
    int h;
    do{
        do{
            try{
                cout<<"Enter your package : ";
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
    switch(choice){
        case 1 : set_pack("Brazil");
                 classes();
                 break;
        case 2 : set_pack("Colombia");
                 classes();
                 break;
        case 3 : set_pack("Argentina");
                 classes();
                 break;
        case 4 : set_pack("Peru Bolivia");
                 classes();
                 break;
        default : cout<<"Enter again!!!!"<<endl;
                    break;
    }
    }while(choice>4 || choice<1);
}
void trip::africa(){
    int choice;
    cout<<"------------------ Please Select ------------------"<<endl;
    cout<<"1.Egypt 5 Days 4 Nights"<<endl;
    cout<<"  Depart on 10 July 2023 Return on 14 July 2023" << endl;
    cout<<"  Price for First Class   : 187,990 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 93,999 Baht per person" << endl;
    cout<<"  Price for Economy Class : 46,999 Baht per person" << endl<<endl;
    cout<<"2.Morocco 10 Days 9 Nights"<<endl;
    cout<<"  Depart on 16 July 2023 Return on 25 July 2023" << endl;
    cout<<"  Price for First Class   : 199,000 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 99,800 Baht per person" << endl;
    cout<<"  Price for Economy Class : 49,900 Baht per person" << endl<<endl;
    cout<<"3.Madagascar 7 Days 6 Nights"<<endl;
    cout<<"  Depart on 27 July 2023 Return on 2 August 2023" << endl;
    cout<<"  Price for First Class   : 308,000 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 154,000 Baht per person" << endl;
    cout<<"  Price for Economy Class : 77,000 Baht per person" << endl<<endl;
    cout<<"4.South Africa 8 Days 7 Nights"<<endl;
    cout<<"  Depart on 4 August 2023 Return on 11 August 2023" << endl;
    cout<<"  Price for First Class   : 383,000 Baht per person " << endl;
    cout<<"  Price for Buiseness     : 190,000 Baht per person" << endl;
    cout<<"  Price for Economy Class : 95,900 Baht per person" << endl<<endl;
    check_cin check;
    int h;
    do{
        do{
            try{
                cout<<"Enter your package : ";
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
    switch(choice){
        case 1 : set_pack("Egypt");
                 classes();
                 break;
        case 2 : set_pack("Morocco");
                 classes();
                 break;
        case 3 : set_pack("Madagascar");
                 classes();
                 break;
        case 4 : set_pack("South Africa");
                 classes();
                 break;
        default : cout<<"Enter again!!!!"<<endl;
                    break;
    }
    }while(choice>4 || choice<1);
}
void trip::classes(){
    int choice;
    cout<<"-----Please Select------"<<endl;
    cout<<" 1.First Class"<<endl;
    cout<<" 2.Business Class"<<endl;
    cout<<" 3.Economy Class"<<endl;
    check_cin check;
    int h;
    do{
        do{
            try{
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
    switch(choice){
        case 1 : set_class("First Class");
                 break;
        case 2 : set_class("Business Class");
                break;
        case 3 :set_class("Economy Class");
                break;
        default : cout<<"Enter again!!!!"<<endl;
                     break;
    }
    }while(choice>3 || choice<1);


}

void trip::set_class(string n){
    this->classs=n;
}

void trip::set_pack(string n){
    this->pack=n;
}


