

class Elf:public ENGINE{
    public:
    Elf(){
        
        check_by=CHECK_BY::FILE_ALL;
        check_by_target=check_by_list{L"data.arc",L"effect.arc",L"mes.arc"};
        //Util::CheckFile(L"Silkys.exe") ||    // It might or might not have Silkys.exe
      // data, effect, layer, mes, music
    }; 
     bool attach_function(); 
};

class Elf2:public ENGINE{
    public:
    Elf2(){
        
        check_by=CHECK_BY::FILE_ALL;
        check_by_target=check_by_list{L"data.arc",L"Ai5win.exe",L"mes.arc"}; 
    }; 
     bool attach_function(); 
};

class ElfFunClubFinal:public ENGINE{
    public:
    ElfFunClubFinal(){
        is_engine_certain=false;
        check_by=CHECK_BY::CUSTOM;
        check_by_target=[](){
            return wcscmp(processName_lower,L"fanclub.exe")==0;
        };
    }; 
     bool attach_function(); 
};