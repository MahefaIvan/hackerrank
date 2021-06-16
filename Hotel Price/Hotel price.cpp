//class HotelRoom

class HotelRoom {
    
public:
    
    //constructor
    HotelRoom(int bedrooms, int bathrooms) : bedrooms_(bedrooms), bathrooms_(bathrooms){}
    
    //virtual member function get_price
    virtual int get_price() {
        
        return 50*bedrooms_ + 100*bathrooms_;
        
    }
    
private:

    int bedrooms_;
    int bathrooms_;
    
};

//class HotelAPartment 
class HotelApartment : public HotelRoom {
    
public:
    
    //constructor
    HotelApartment(int bedrooms, int bathrooms) : HotelRoom(bedrooms, bathrooms) {}
    
    //get_price override
    int get_price() {
        
        return HotelRoom::get_price() + 100;
        
    }
};
//end of class HotelApartement