#ifndef FILEHANDLE_H
#define FILEHANDLE_H

    class FileHandle{
        private:
            std::string f;
        public:
            FileHandle();
            void createFile(std::string fileName);
            void deleteFile(char* fileName);
            void writeToFile(std::string fileName, std::string data);
            void readFromFile(std::string fileName);
    };

#endif // FILEHANDLE_H

