#include <iostream>
#include <cstring>
using namespace std;

class Student{

    private:
        string Name;
        string Major;
        int Age;
        int Id;

    public:
        Student(){
            Name = "bob";
            Major = "lib arts";
            Age = 18;
            Id = 1;
        }

        Student(string name, string major, int age, int id){
            Name = name;
            Major = major;
            Age = age;
            Id = id;
        }

    //member functions (accessor functions)
    int getAge(){return Age;}
    string getMajor(){return Major;}

    void setAge(int a){Age = a;}
    void setMajor(string m){Major = m;}

    //member function
    //find out the age of the student, if above 21,  call em an ol ah nig , else yung ah jit
    void checkAge(){
        if(Age >= 21){
            cout <<"Hey "<< Name << " wsg ol ah nigga" << endl;
        }
        else{
            cout << "Hey "<<Name<<" yung ah jit" << endl;
        }
    }

};

int main(){

    Student adil("Adil", "CompSci" , 21 , 3293);
    Student jay("Jay", "CompSci" , 20 , 8275);

    adil.checkAge();
    jay.checkAge();

}