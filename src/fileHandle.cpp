#include"fileHandle.hpp"

FileHandle::FileHandle(string fileName){
    std::cout<<"FileHandle Constructor"<<std::endl;
    
}
void FileHandle::openFile(std::string fileName){
    file.open(fileName,std::ios::out);
}
void FileHandle::closeFile(){
    file.close();
}
void FileHandle::writeToFile(std::string data){
    file<<data;
}
void FileHandle::readFromFile(){
    std::string data;
    while(file>>data){
        std::cout<<data<<std::endl;
    }
}