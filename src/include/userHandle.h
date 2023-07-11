#ifndef USERHANDLE_H
#define USERHANDLE_H

    #include<iostream>

    class User{
        public:
            std::string userName;
            int userAge;
            std::string userJob;
            std::string userEducation;
        
        User();
        void enterUserToDB();
        void showUserFromDB();
        void fastSelectionToUser();
    };

#endif 