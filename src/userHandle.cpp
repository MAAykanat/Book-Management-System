#include"include/userHandle.h"
#include"fileHandle.cpp"

User::User(){
    std::cout<<"User Constructor"<<std::endl;
}

void User::enterUserToDB(){

    FileHandle userFile;    
    std::string user;

    std::cout<< "Enter User name and surname: "<<std::endl;
    std::cin>> User::userName;
    
    std::cout<<"Enter User age"<<std::endl;
    std::cin>> User::userAge;

    std::cout<<"Enter User Profession"<<std::endl;
    std::cin>> User::userJob;

    std::cout<<"Enter User Education"<<std::endl;
    std::cin >> User::userEducation;

    user = userName + userJob + std::to_string(userAge) + userEducation;

    userFile.writeToFile("users.txt", user);


}