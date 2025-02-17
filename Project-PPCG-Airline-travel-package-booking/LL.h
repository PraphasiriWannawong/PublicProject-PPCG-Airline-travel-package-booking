using namespace std;
#include "user.h"
class LL{
    user *hol=NULL;
    int size;
public:
        void add_user(user*&);
        void show_alluser();
        void cancle_user(int);
        void display_user(long);
        void delete_user(long);
        LL();
        ~LL();
};

LL::LL(){
    hol=NULL;
    size=0;
}

LL::~LL(){
    user*a=hol;
    int i;
    for(i=0;i<size;i++){
        a=hol->move_next();
        delete hol;
        hol=a;
    }
}

void LL::add_user(user*&x){
    if(size==0) hol=x;
    user *t =hol;
    for(int i=0;i<size-1;i++){
        t = t->move_next();
    }
    t->insert(x);
    size++;
}

void LL::show_alluser(){
    user *t=hol; 
     int i;
     if (t==NULL) {cout<<"---Sorry don't have any reservetion---"<<endl;}
     for(i=0;i<size;i++){
        cout<<"                                                             ";
        cout<<"-------------------NO."<<i+1<<"-------------------"<<endl;
        t->display();
        t=t->move_next();
     }
}

void LL::cancle_user(int a){
    if(size==1){
        user *t=hol;
        hol=NULL;
        delete t;
        size--;
        return ;
        
    }
    user *target,*pretarget;
    pretarget=NULL;
    target=hol;
    for(int i=1; i<a; i++){
        pretarget=target;
        target=target->move_next();
    }
    user *tmp = target->move_next();
    if(a==1)hol = target->move_next();
    else pretarget->insert(tmp);
    size--;
    delete target;

}

void LL::display_user(long tel){
    user *t=hol;
    int count=0;
    for(int i=0;i<size;i++){
        if(t->get_phone_number()==tel){
            cout<<"                                                             ";
            cout<<"------------------NO."<<i+1<<"------------------"<<endl;
            t->display();
            count++;
        }
        t=t->move_next();
     }
     if(count==0) {
        cout<<"                                                             ";
        cout<<"---Sorry don't have any reservetion---"<<endl;}
}

void LL::delete_user(long tel){
    int d,h,count=0;
    user *t=hol;
    for(int i=0;i<size;i++){
        if(t->get_phone_number()==tel){
            cout<<"                                                             ";
            cout<<"------------------NO."<<i+1<<"------------------"<<endl;
            t->display();
            count++;
        }
        t=t->move_next();
     }
    if(count==0) {
        cout<<"                                                             ";
        cout<<"---Sorry don't have any reservetion---"<<endl;}
    else{
        do{
            try{
            cout<<"                                                             ";
            cout<<"Please enter ticket number that you want to cancle : ";
            cin>>d;
            h=0;
            if(cin.fail()){throw check;}
            } catch(exception &e){
                        cout<<e.what()<<endl;
                        cin.clear();
                        cin.ignore(50,'\n');
                        h=1;}
            }while(h);
        cancle_user(d);
        cout<<"                                                             ";
        cout<<"    ---Cancel successful.---    "<<endl;
    }
    cout<<"                                                             ";
    cout<<"   ---Press any key to continue.---"<<endl;
}