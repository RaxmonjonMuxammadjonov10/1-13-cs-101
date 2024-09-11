#include <iostream>
using namespace std;
int main() {
    int intNumber=23;
    float floatNumber=3.14159;
    double doubleNumber=45.1234;
    bool boolean=true;
    char charName='A';
    cout<<"Value:"<<intNumber<<". Size"<<sizeof(intNumber)<<endl;
    cout<<"Value:"<<floatNumber<<". Size"<<sizeof(floatNumber)<<endl;
    cout<<"Value:"<<doubleNumber<<". Size"<<sizeof(doubleNumber)<<endl;
    cout<<"Value:"<<boolean<<". Size"<<sizeof(boolean)<<endl;
    cout<<"Value:"<<charName<<". Size"<<sizeof(charName)<<endl;
    return 0;
}
