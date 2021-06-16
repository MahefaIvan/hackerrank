class Student{
    
    private:
    
        int score[5];
    
    public:
    
        void input(){
            
            for(int i = 0;i < 5;i++){
                
                cin >> score[i];
                
            }
            
        }
        int calculateTotalScore(){
            
            int sum;
            
            for(int i = 0;i < 5;i++){
                
                sum += score[i];
                
            }
            return sum;
        }
    
};
