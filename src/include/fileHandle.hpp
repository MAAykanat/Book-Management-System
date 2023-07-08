#pragma once

#include<fstream>

class FileHandle{
    public:
        FileHandle(string fileName);
        ~FileHandle(string fileName);
        void openFile(std::string fileName);
        void closeFile();
        void writeToFile(std::string data);
        void readFromFile();
    private:
        std::fstream file;
};