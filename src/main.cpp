#include<iostream>
#include<fstream>
#include"fileHandle.cpp"

using namespace std;

int main(){
    int a;
    FileHandle file("example.txt");
    
    std::cout<<"Hello World"<<std::endl;
    
    std::cin>>a;

    return 0;
}