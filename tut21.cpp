#include<iostream>
#include<string>
using namespace std;


    // OOPS - Classes and objects

    //c++ --> initially called ---> c with classes by strowstroup
    // class --> Extension of structure (in c)
    // structures had limitiations
    // --->members are public
    // --->No methods
    // classes ---> structures + more
    // classes ---> can have methods and properties
    // classes ---> can make few members as private & few as public
    // structures in C++ are typedef
    // you can declare objects along with the class declaration like this:
    /* class Employee{
        class definition
    } harry, rohan, lovish*/


// Nesting of memeber function
   class binary{
    string s;
    public:
       void read(void);
       void chk_bin(void);
       void ones_compliment(void);
       void display(void);
   };

   void binary :: read(void){
     cout<<"Enter a binary number"<<endl;

     cin>>s;
   }

   void binary :: chk_bin(void){
    for(int i=0; i<s. length(); i++){
        if(s.at(i)!='0'  && s.at(i)!='1'){
            cout<<"Increment binary foramt"<<endl;
            exit(0);
        }
    }
   }

 void binary :: ones_compliment(void){
    for(int i=0; i<s.length(); i++){
        if (s.at(i)=='0'){
            s.at(i)='1';
        }
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }

}

void binary :: display(){
    cout<<"Display your bianry number"<<endl;
    for(int i=0; i<=s.length(); i++){
        cout<<s.at(i);
    }
}
int main() 
{
   binary b;
   b.read();
   b.chk_bin();
   b.ones_compliment();
   b.display();
    return 0;
}