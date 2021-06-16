
class Box{
    
    private:
    
        int length,height,breadth;
    
    public:
    
        Box(){

            length = 0;
            height = 0;
            breadth = 0;

        }
        Box(int l,int h,int b){
            
            length = l;
            height = h;
            breadth = b;
            
        }
        Box(const Box &object){
            
            this -> length = object.length;
            this -> height = object.height;
            this -> breadth = object.breadth;
            
        }

        int getLength(){

            return length;
            
        }
        int getHeight(){

            return height;

        }
        int getBreadth(){

            return breadth;

        }
        long long CalculateVolume(){

            return (long long) length*breadth*height;

        }

    friend bool operator<( Box&A,Box& B){
        
        if( (A.length < B.length) || ((A.breadth < B.breadth) && (A.length == B.length)) || ((A.height < B.height) && (A.length == B.length) && (A.breadth == B.breadth)) ){

            return true;

        }else{

            return false;

        }
    }

    friend ostream& operator<<(ostream& out, Box& B){

        out << B.length << ' ' << B.height <<' ' << B.breadth;
        return out;

    }

};