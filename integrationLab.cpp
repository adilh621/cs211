#include <iostream>
using namespace std;


// examples using function pointers

typedef int (*intPtr)(int a, int b);
typedef bool (*boolPtr)(int a);

int sum (int a, int b){
    return a+b;
}

int plusFive(intPtr fp, int a, int b){
    return fp(a,b)+5;
}

bool isEven(int a){
    return a%2 == 0;
}
bool isOdd(int a){
    return a%2 != 0;
}
bool numIsEven(boolPtr fp, int a){
    if(fp(a)){
        cout << "num is even" << endl;
    }
    else{
        cout << "suuply an even num pls" <<endl;
    }
}


int main()
{
    boolPtr ptr = &isEven;
    cout << numIsEven(isEven,23) << endl;

}