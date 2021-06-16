class Person{
    
    protected:
  
        std::string name;
        int age;
    
    public:
    
        virtual void getdata()=0;
        virtual void putdata()=0;
    
};

class Professor : public Person{
    
    private:
        
        int publications;
        static int p_id;
        int cur_id;
    
    public:
        
        Professor(){
            
            this -> cur_id = ++p_id;
            
        }
        
        void getdata() override{
            
            
            std::cin >> this -> name;
            std::cin >> this -> age;
            std::cin >> publications;
            
        }
        
        void putdata() override{
            
            cout << this ->name << ' ' << this ->age << ' ' << publications << ' ' << this ->cur_id <<   std::endl;
            
        }
    
};int Professor::p_id = 0;

class Student : public Person{
    
    private:
    
        int marks[6];
        int sum;
        static int p_id ;
        int cur_id;
        
    public:
        
        Student(){

            this -> cur_id = ++p_id;
            
        }
        
        void getdata() override{
            
            std::cin >> this -> name;
            std::cin >> this -> age;
            
            for(int i = 0;i < 6;i++){
                
                std::cin >> marks[i];
                
            }
            
        }
        
        void putdata() override{
            
            for(int i = 0;i < 6;i++){
                
                sum += marks[i];
                
            }
            std::cout << this ->name << ' ' << this ->age << ' ' << sum << ' ' <<  this ->cur_id << std::endl;
            
        }
    
};int Student::p_id = 0;
