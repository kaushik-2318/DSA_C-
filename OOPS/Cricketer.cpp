#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    class Cricketer
    {
    private:
        string name;
        int age;
        int test_match;
        int avg_run;

    public:
        void setName(string name)
        {
            this->name = name;
        }
        void setAge(int age)
        {
            this->age = age;
        }
        void setTest_match(int match)
        {
            this->test_match = match;
            test_match = match;
        }
        void setAvg_run(int run)
        {
            this->avg_run = run;
        }
        //
        //
        //
        //
        string getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
        int getTest_match()
        {
            return test_match;
        }
        int getAvg_run()
        {
            return avg_run;
        }
    };

    vector<Cricketer> cricketer;

    Cricketer Virat;
    Virat.setName("Virat");
    Virat.setAge(30);
    Virat.setAvg_run(100);
    Virat.setTest_match(120);

    Cricketer Dhoni;
    Dhoni.setName("Dhoni");
    Dhoni.setAge(30);
    Dhoni.setAvg_run(100);
    Dhoni.setTest_match(120);

    // Dynamic using Vector
    for (int i = 0; i < 2; i++)
    {
        Cricketer *cricketer = new Cricketer;

        cricketer->setName("Sami");
        cricketer->setAge(40);
        cricketer->setAvg_run(50);
        cricketer->setTest_match(50);

        // cricketer.pu
    }

    // Static and using Array
    // Cricketer cricketer[2] = {Virat, Dhoni};
    // cout << cricketer[0].getName() << endl;
    // cout << cricketer[0].getAge() << endl;
    // cout << cricketer[0].getAvg_run() << endl;
    // cout << cricketer[0].getTest_match() << endl;
};
