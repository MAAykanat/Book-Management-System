#include<iostream>
#include"fileHandle.cpp"

using namespace std;

int main(){
    int a;

    FileHandle file;
    file.readFromFile("test.txt");

    // readFromFile("test.txt");


    // std::cout<<"Hello World"<<std::endl;
    
    // std::cin>>a;

    return 0;
}