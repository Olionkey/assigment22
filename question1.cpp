#include <iostream>
#include <array>
#include <string>
using namespace std;

void swap (int num1, int num2);


void main(){
    int var1, var2;
    cout << "What is the first number?" << endl;
    cin >> var1;
    cout << "What is the second number? " << endl;
    cin >> var2;
    cout << "Here is the unswapped order. [" << var1 << ", " << var2 << "]" << endl;
    sawp(var1, var2);
    cout << "Here is the swapped order. [" << var1 << ", " << var2 << "]" << endl;

}
void sawp(int num1, int num2){
    int placeHolder = num1;
    num1 = num2;
    num2 = placeHolder;
}