
#include <iostream>
using namespace std;
class Room
{
    int width;
    int height;
public:
    Room()
    {
        width = 1;
        height = 2;
        
    }
    Room(Room& r)
    {
        width = r.width;
        height = r.height;
       
    }
    void display() {
        cout << "Width: " << width << "height: " << height << endl;
    }
    void set(int w, int h) {
        width = w;
        height = h;
    }
};

int main()
{
    Room objRoom1;
    Room objroom2(objRoom1);
    Room objRoom3 = objRoom1;
    objRoom1.set(7, 8);
    objRoom1.display();

    Room objRoom4;
    objRoom3.set(10, 6);
    objRoom3.display();
    objRoom4 = objRoom3; // internal assignment works with simple datatype , try with arrays and observe 
    objRoom4.display();
    objRoom4.set(5, 6);
    objRoom4.display();
    
    //objRoom3.display();
    return 0;

}
