#include <iostream>

using namespace std;

int main() {

    int number_of_rows,number_of_querries,sub_array_size,sub_array_elements;

    cin >> number_of_rows >> number_of_querries;
    
    int** array = new int*[number_of_rows];

    for(int row_iterator = 0;row_iterator < number_of_rows;row_iterator++){
  
        cin >> sub_array_size;
        array[row_iterator] = new int[sub_array_size];

        for(int column_iterator = 0;column_iterator < sub_array_size;column_iterator++){
            
            cin >> sub_array_elements;
            array[row_iterator][column_iterator] = sub_array_elements;
            
        }
    }

    //position of the element(s) to be printed
    int x_position,y_position;

    for(int i = 0;i < number_of_querries;i++){
        
        cin >> x_position >> y_position;
        cout << array[x_position][y_position] << endl;
        
    }
    
    return 0;
}