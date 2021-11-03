#include <iostream>
#include "source.hpp"
using namespace std;

int main() {
    cout<<"введите день, месяц и год числами:"<<endl;
    date d;
    cin>>d.day>>d.month>>d.year;
    cout<<"день недели: "<<dayByDate(d)<<endl;
    
    return 0;
}
