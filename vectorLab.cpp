#include <iostream>
#include <vector>
using namespace std;

template <class T>
void printVector(vector<T> v){
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

double getAverage(vector<double> v){
    double sum = 0;
    for(int i = 0; i < v.size() ; i++){

        sum += v[i];
    }
    return (sum)/(v.size());
}

double highestGrade(vector<double> v){
    for(int i = 0 ; i < v.size() ; i++){

        if(v[i] > v[i+1]){
            return v[i];
        }
        
    }
}

double lowestGrade(vector<double> v){

    int temp = v[0];
    for(int i = 0; i != v.size(); ++i)
    {
        if(v[i] < temp)
        temp = v[i];
    }
    return temp;
}

int main(){

    // ask user to input grades in a vector 
    // keep accepting grades until user enters -1
    // highest, lowest, avg
    
    vector <double> midterm;
    double grade;
    do {
        cout <<  "Enter midterm grades" << endl;
        cin >> grade;

        midterm.push_back(grade);

    } while(grade != -1);

    midterm.pop_back();

    cout << "Avg grade: " << getAverage(midterm) << endl;
    cout << "Highest grade: " << highestGrade(midterm) << endl;
    cout << "Lowest grade: " << lowestGrade(midterm) << endl;

    

}