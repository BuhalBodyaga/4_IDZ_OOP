#include <iostream>
#include "source.h"

using namespace std;

int main(){

    cout<<"Размер буффера "<<endl;
    int size;
    cin>>size;
    if (size<=0) return 0;
    Buff* buffer = init(size);
    cout<<"Вводите числа"<<endl;
    cout<<"Чтобы выйти из буффера введите 0"<<endl;


    do{
        int a;
        cin >> a;
        if(a==0)break;
        addNode(buffer, a);   //Чтобы выйти из буффера нажмите 0
    }while (1);

    print(buffer, cout);

}