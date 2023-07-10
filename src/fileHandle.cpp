#include<fstream>
#include<string>
#include"include/fileHandle.h"

FileHandle::FileHandle(){
    std::cout<<"Constructor"<<std::endl;
}

void FileHandle::writeToFile(std::string fileName, std::string data){
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

void FileHandle::readFromFile(std::string fileName){
    // std::cout<<"File Reading..."<<std::endl;

    std::fstream file;
    std::string line;
    file.open(fileName, std::ios::in);

    while(!file.eof()){
        getline(file,line);
        std::cout<<line<<std::endl;
    }
}