
#include "trip.h"
#include <exception>
using namespace std;
class user:public trip,public check_cin{
    string email;
    string name;
    string surname;
    string passsport;
    long phone_number;
    int person;
    int price;
    user *next=NULL;
public :user(string="no",string="no",long=0,string="no",string="no",int=0,int=0,string="no",string="no");
        ~user();
        void display();
        string get_name(){return name;};
        void set_name();
        string get_surname(){return surname;};
        string get_passsport(){return passsport;};
        void set_surname();
        long get_phone_number(){return phone_number;};
        void set_phone_number();
        void set_email();
        void set_person();
        void set_passsport();
        string get_email(){return email;};
        int get_person(){return person;};
        void set_price();
        int get_price(){return price;};
        void display_for_cancle();
        void insert(user*&);
        user* move_next();
        void discount();
};
user::user(string na,string sur,long phone,string mail,string pass,int per,int pri,string pack,string classs):trip(pack,classs){
    this->name=na;
    this->surname=sur;
    this->phone_number=phone;
    this->email=mail;
    this->passsport=pass;
    this->person=per;
    this->price=pri;
}
user::~user(){
}


void user::insert(user *&a){
    this->next = a;
}

user* user::move_next(){
    return next;
}


void user::set_name(){
    char n[50];
    cin>>n;
    this->name=n;
}
void user::set_surname(){
    char s[50];
    cin>>s;
    this->surname=s;
}
void user::set_phone_number(){
    long p;
    int h;
    check_cin check;
    do{
        try{
        cin>>p;
        h=0;
        if(cin.fail()){throw check;}
        this->phone_number=p;
        }catch(exception &e){
                        cout<<e.what()<<endl;
                        cin.clear();
                        cin.ignore(50,'\n');
                        h=1;}
    }while(h);
}
void user::set_email(){
    char e[50];
    cin>>e;
    this->email=e;
}

void user::set_passsport(){
    char p[50];
    cin>>p;
    this->passsport=p;
}
void user::display(){
    cout<<"                                                             ";
    cout<<"Name : "<<get_name()<<endl;
    cout<<"                                                             ";
    cout<<"Surname : "<<get_surname()<<endl;
    cout<<"                                                             ";
    cout<<"Phone number : 0"<<get_phone_number()<<endl;
    cout<<"                                                             ";
    cout<<"Email : "<<get_email()<<endl;
    cout<<"                                                             ";
    cout<<"passsport : "<<get_passsport()<<endl;
    trip::display();
    cout<<"                                                             ";
    cout<<"Passenger : "<<get_person()<<endl;
    cout<<"                                                             ";  
    cout<<"Price : "<<get_price()<<endl;
    cout<<"                                                             ";
    cout<<"----------------------------------------"<<endl;

}
void user::display_for_cancle(){
    cout<<"                                                             ";
    cout<<"Name : "<<get_name()<<endl;
    trip::display();
}
void user::discount(){
    int choice,a=0,x;
    string code;
    do{
    try{
    cout<<"                                                             ";
    cout<<"Do you want to use promotion code? " << endl;
    cout<<"                                                             ";
    cout<<"        1.Yes        2.No         "<<endl;
    cout<<"                                                             ";
    cin>>choice;
    if(cin.fail()){throw check;}
    x=0;
    }catch(exception &e){
                        cout<<e.what()<<endl;
                        cin.clear();
                        cin.ignore(50,'\n');
                        x=1;
                        } 
    if (choice == 1){
        cout<<"                                                             ";
        cout<<"Please enter your promotion code? : "<<endl;
        cout<<"                                                             ";
        cin>>code;
        
        if(code=="10off")
        {
            price=(price*90)/100;
            a=1;
            system ("CLS");
            break;
        }
        else if (code!="10fff") {
            cout<<"                                                             ";
            cout<<endl<<"Incorrect Code!!"<<endl;}

    }
    if (choice == 2){
        break;
    }
    }while (a==0);

}
void user::set_person(){
    int x,h;
    check_cin check;
    do{
        try{
        cin>>x;
        h=0;
        if(cin.fail()){throw check;}
        this->person=x;
        }catch(exception &e){
                        cout<<e.what()<<endl;
                        cin.clear();
                        cin.ignore(50,'\n');
                        h=1;}
    }while(h);
    if(x<0){this->person=0;} 
    else this->person=x;
}

void user::set_price(){
    if(get_pack()=="Vietnam China" && get_class()=="First Class") price=(127500*person); //asia
    if(get_pack()=="Vietnam China" && get_class()=="Buiseness Class") price=(63800*person);
    if(get_pack()=="Vietnam China" && get_class()=="Economy Class") price=(31800*person);
    if(get_pack()=="South Korea Japan" && get_class()=="First Class") price=(188000*person);
    if(get_pack()=="South Korea Japan" && get_class()=="Buiseness Class") price=(94000*person);
    if(get_pack()=="South Korea Japan" && get_class()=="Economy Class") price=(47000*person);
    if(get_pack()=="India Nepal" && get_class()=="First Class") price=(199999*person);
    if(get_pack()=="India Nepal" && get_class()=="Buiseness Class") price=(99999*person);
    if(get_pack()=="India Nepal" && get_class()=="Economy Class") price=(40999*person);
    if(get_pack()=="Singapore Philippines" && get_class()=="First Class") price=(170000*person);
    if(get_pack()=="Singapore Philippines" && get_class()=="Buiseness Class") price=(85800*person);
    if(get_pack()=="Singapore Philippines" && get_class()=="Economy Class") price=(42900*person);
    if(get_pack()=="Ireland  Greenland" && get_class()=="First Class") price=(1639200*person); //europe
    if(get_pack()=="Ireland  Greenland" && get_class()=="Buiseness Class") price=(819000*person);
    if(get_pack()=="Ireland  Greenland" && get_class()=="Economy Class") price=(409800*person);
    if(get_pack()=="United kingdom, France and Italy" && get_class()=="First Class") price=(550000*person);
    if(get_pack()=="United kingdom, France and Italy" && get_class()=="Buiseness Class") price=(280000*person);
    if(get_pack()=="United kingdom, France and Italy" && get_class()=="Economy Class") price=(150000*person);
    if(get_pack()=="Belgium Netherlands" && get_class()=="First Class") price=(311600*person);
    if(get_pack()=="Belgium Netherlands" && get_class()=="Buiseness Class") price=(155800*person);
    if(get_pack()=="Belgium Netherlands" && get_class()=="Economy Class") price=(77900*person);
    if(get_pack()=="Croatia, Czech and republican" && get_class()=="First Class") price=(359600*person);
    if(get_pack()=="Croatia, Czech and republican" && get_class()=="Buiseness Class") price=(179500*person);
    if(get_pack()=="Croatia, Czech and republican" && get_class()=="Economy Class") price=(899000*person);
    if(get_pack()=="Norway, Sweden and Finland" && get_class()=="First Class") price=(639000*person);
    if(get_pack()=="Norway, Sweden and Finland" && get_class()=="Buiseness Class") price=(319800*person);
    if(get_pack()=="Norway, Sweden and Finland" && get_class()=="Economy Class") price=(159900*person);
    if(get_pack()=="Russia Latvia and Germany" && get_class()=="First Class") price=(449500*person);
    if(get_pack()=="Russia Latvia and Germany" && get_class()=="Buiseness Class") price=(249750*person);
    if(get_pack()=="Russia Latvia and Germany" && get_class()=="Economy Class")  price=(124880*person);
    if(get_pack()=="Spain portugal" && get_class()=="First Class") price=(531600*person);
    if(get_pack()=="Spain portugal" && get_class()=="Buiseness Class") price=(265800*person);
    if(get_pack()=="Spain portugal" && get_class()=="Economy Class") price=(132900*person);
    if(get_pack()=="Australia" && get_class()=="First Class") price=(1599000*person); //australia
    if(get_pack()=="Australia" && get_class()=="Buiseness Class") price=(620000*person);
    if(get_pack()=="Australia" && get_class()=="Economy Class") price=(319800*person);
    if(get_pack()=="Newzealand" && get_class()=="First Class") price=(583500*person);
    if(get_pack()=="Newzealand" && get_class()=="Buiseness Class") price=(291000*person);
    if(get_pack()=="Newzealand" && get_class()=="Economy Class") price=(145900*person);
    if(get_pack()=="Canada" && get_class()=="First Class") price=(879600*person);
    if(get_pack()=="Canada" && get_class()=="Buiseness Class") price=(439800*person);
    if(get_pack()=="Canada" && get_class()=="Economy Class") price=(219900*person);
    if(get_pack()=="United States" && get_class()=="First Class") price=(399999*person);
    if(get_pack()=="United States" && get_class()=="Buiseness Class") price=(199999*person);
    if(get_pack()=="United States" && get_class()=="Economy Class") price=(99999*person);
    if(get_pack()=="Mexico" && get_class()=="First Class") price=(787600*person);
    if(get_pack()=="Mexico" && get_class()=="Buiseness Class") price=(393500*person);
    if(get_pack()=="Mexico" && get_class()=="Economy Class") price=(196900*person); //17 day
    if(get_pack()=="Brazil" && get_class()=="First Class") price=(799900*person);
    if(get_pack()=="Brazil" && get_class()=="Buiseness Class") price=(399900*person);
    if(get_pack()=="Brazil" && get_class()=="Economy Class") price=(199900*person);
    if(get_pack()=="Colombia" && get_class()=="First Class") price=(559600*person);
    if(get_pack()=="Colombia" && get_class()=="Buiseness Class") price=(279800*person);
    if(get_pack()=="Colombia" && get_class()=="Economy Class") price=(139900*person);
    if(get_pack()=="Argentina" && get_class()=="First Class") price=(1270000*person);
    if(get_pack()=="Argentina" && get_class()=="Buiseness Class") price=(635000*person);
    if(get_pack()=="Argentina" && get_class()=="Economy Class") price=(317500*person);//12day
    if(get_pack()=="Peru Bolivia" && get_class()=="First Class") price=(999999*person);
    if(get_pack()=="Peru Bolivia" && get_class()=="Buiseness Class") price=(550000*person);
    if(get_pack()=="Peru Bolivia" && get_class()=="Economy Class") price=(300000*person); //10day
    if(get_pack()=="Egypt" && get_class()=="First Class") price=(187990*person); //africa
    if(get_pack()=="Egypt" && get_class()=="Buiseness Class") price=(93999*person);
    if(get_pack()=="Egypt" && get_class()=="Economy Class") price=(46999*person);
    if(get_pack()=="Morocco" && get_class()=="First Class") price=(199000*person);
    if(get_pack()=="Morocco" && get_class()=="Buiseness Class") price=(99800*person);
    if(get_pack()=="Morocco" && get_class()=="Economy Class") price=(49900*person);
    if(get_pack()=="Madagascar" && get_class()=="First Class") price=(308000*person);
    if(get_pack()=="Madagascar" && get_class()=="Buiseness Class") price=(154000*person);
    if(get_pack()=="Madagascar" && get_class()=="Economy Class") price=(77000*person);
    if(get_pack()=="South Africa" && get_class()=="First Class") price=(383000*person);
    if(get_pack()=="South Africa" && get_class()=="Buiseness Class") price=(190000*person);
    if(get_pack()=="South Africa" && get_class()=="Economy Class") price=(95900*person);
}

