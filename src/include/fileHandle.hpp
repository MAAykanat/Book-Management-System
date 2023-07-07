#pragma once

#include<fstream>

class FileHandle{
    public:
        FileHandle();
        ~FileHandle();
        void openFile(std::string fileName);
        void closeFile();
        void writeToFile(std::string data);
        void readFromFile();
    private:
        std::fstream file;
};