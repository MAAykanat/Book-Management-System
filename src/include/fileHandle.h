#ifndef FILEHANDLE_H
#define FILEHANDLE_H

    class FileHandle{
        public:
            FileHandle();
            void writeToFile(std::string fileName, std::string data);
            void readFromFile(std::string fileName);
    };

#endif // FILEHANDLE_H

