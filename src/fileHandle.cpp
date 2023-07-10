#include<iostream>
#include<fstream>
#include<string>
#include"include/fileHandle.h"


void writeFile(std::string fileName, std::string data){
    std::fstream file;
    file.open(fileName, std::ios::app);
    if(!file){
        std::cout<<"File is not opened!!"<<std::endl;
    }
    else{
        std::cout<<"File Created!!"<<std::endl;
        file<<data;
    }
    file.close();
}

void readFromFile(std::string fileName){
    std::fstream file;
    std::string line;
    file.open(fileName, std::ios::in);

    while(!file.eof()){
        // std::cout<<"File Reading..."<<std::endl;
        getline(file,line);
        std::cout<<line<<std::endl;
    }
}
