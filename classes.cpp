#include <iostream>
using namespace std;

class Rat{

private:
   int n;
   int d;
   
public:

   // member functions but these are constructors
   Rat(){
      n=0;
      d=1;
   }
   
   Rat(int i, int j){
      n=i;
      d=j;
   }
   
   Rat(int i){
      n=i;
      d=1;
   }
   // accessor functions (memberfunctions)
   int getN(){ return n;}
   int getD(){ return d;}
   
   void setN(int i){ n=i;}
   void setD(int i){ d=i;}
   
}; 

int main(){

    Rat r(5,3);
    // r.d = 4;
    cout << r.getD() << endl;
    r.setD(4);
    cout << r.getD() << endl;

}