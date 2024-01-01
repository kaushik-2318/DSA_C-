#include <iostream>
using namespace std;

class Bike
{
private:
public:
    static int noOfBikes; // This belong to the class. //Ab class ke pass khud ka variable hai
    int tyreSize;
    int engineSize;

    // defalut Constructor
    // USe:- Value intialize karne ke liye
//Method 1
    // Bike(int tyreSize, int engineSize = 200){       //deaflut value 200 lega agar humlog kuch nhi diye toh
    //     this->tyreSize = tyreSize;
    //     this->engineSize = engineSize;
    //     cout<<"Constructor ko call hua\n";
    // }
//Method 2 Constructor Overloading
    Bike(int tS, int eS = 200) : tyreSize(tS), engineSize(eS) {}
    Bike(int tS) : tyreSize(tS), engineSize(200) {}
    Bike() : tyreSize(100), engineSize(200) {}

    static void increaseNoOfBikes()
    {
        noOfBikes++;
    }

    // ~Bike(){
    //     cout<<"desctructor call hua\n";
    // }
};

int Bike::noOfBikes = 10;
int main()
{
    Bike tvs(12, 100); // object creation   //constructor ko call jaayegi
    Bike honda(13, 150);

    tvs.increaseNoOfBikes();

    cout << tvs.noOfBikes << endl;
    cout << honda.noOfBikes << endl;

    honda.increaseNoOfBikes();
    cout << tvs.noOfBikes << endl;
    cout << honda.noOfBikes << endl;

    // cout<<tvs.tyreSize<<endl;
    // cout<<honda.engineSize;
}