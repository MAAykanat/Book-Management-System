#include<iostream>
#include<fstream>
#include<string>
#include"include/fileHandle.h"


FileHandle::FileHandle(){
    // std::cout<<"Constructor"<<std::endl;
}

void FileHandle::createFile(std::string fileName){
    std::fstream file;
    if(!file){
        std::cout<<"File is not opened!!"<<std::endl;
    }
    else{
        file.open(fileName, std::ios::out);
        std::cout<<"File Created!!"<<std::endl;
        std::cout<<"This loop work"<<std::endl;
    }
    file.close();
}

void FileHandle::deleteFile(char* fileName){
    remove(fileName);
    std::cout<<"File is deleted"<<std::endl;
}

void FileHandle::writeToFile(std::string fileName, std::string data){
    std::fstream file;
    if(!file){
        std::cout<<"File is not opened!!"<<std::endl;
        createFile(fileName);
    }
    else{
        file.open(fileName, std::ios::app);        
        file<<data<<std::endl;
        std::cout<<"Data added"<<std::endl;

    }
    file.close();
}

void FileHandle::readFromFile(std::string fileName){
    // std::cout<<"File Reading..."<<std::endl;

    std::fstream file;
    std::string line;
    file.open(fileName, std::ios::in);

    if(!file){
        std::cout<<"No such a file to read"<<std::endl;
    }
    else{
        
        while(!file.eof()){
            getline(file,line);
            std::cout<<line<<std::endl;
        }

    }

}