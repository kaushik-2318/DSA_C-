#include <iostream>
#include <string>
using namespace std;

class book
{
    public:
    string name;
    int price;
    int pages;
    int countBooks(int p)
    {
        if (price < p)
            return 1;
        else
            return 0;
    }

    bool isBookPresent(string book)
    {
        if (name == book)
            return true;
        else
            return false;
    }

public:
};
int main()
{
    book kaushik;
    kaushik.name = 'H';
    kaushik.price = 100;
    kaushik.pages = 999;

    cout<<kaushik.countBooks(0)<<endl;
    cout<<kaushik.isBookPresent("Ha");
}