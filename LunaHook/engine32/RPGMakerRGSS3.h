

class RPGMakerRGSS3:public ENGINE{
    public:
    RPGMakerRGSS3(){
        
        check_by=CHECK_BY::FILE_ALL;
        check_by_target=check_by_list{L"*.rgss3a",L"System/RGSS3*.dll"};
        is_engine_certain=false;
    };
     bool attach_function();
};