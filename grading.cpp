#include <iostream>
using namespace std;
int marks;
int main() {
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks <=25) {
        cout << "Grade: f";
    }
    else if (marks >=25 && marks <44){
        cout << "grade :E";
    }
    else if (marks >=45 && marks <49){
        cout << "grade :D";
    }
    else if (marks >=50 && marks <59){
        cout << "grade :C";
    }
    else if (marks >=60 && marks <69){
        cout << "grade :B";
    }
    else if (marks >=70 && marks <79){
        cout << "grade :A";
    }
    else if (marks >=80 && marks <89){
        cout << "grade :A+";
    }
    else if (marks >=90 && marks <=100){
        cout << "grade :O";
    }
    else {
        cout << "Invalid marks entered.";
    }

}