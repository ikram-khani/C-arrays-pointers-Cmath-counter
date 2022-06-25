#include <iostream>
using namespace std;

int main(){

    int age=20;
    cout<<&age<<endl;            //  print the age address

    int *page=&age;             //save the pointer in the memory
    cout<<*page<<endl;          // print the pointer value

     cout<<page;               //print pointer
     

}