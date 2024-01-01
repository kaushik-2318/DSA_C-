#include <iostream>
#include <string>
using namespace std;

class Gun
{
public:
    int ammo;
    int damage;
    int scope;
};

class Player
{
private:
    class Helmet
    {
    private:
        int hp;
        int level;

    public:
        int setHp(int hp)
        {
            this->hp = hp;
        }
        int setLevel(int level)
        {
            this->level = level;
        }
        int getHp(){
            return hp;
        } 
        int getLevel(){
            return level;
        }
    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    int getHealth()
    {
        return health;
    }
    int getAge()
    {
        return age;
    }
    int getScore()
    {
        return score;
    }
    int isAlive()
    {
        return alive;
    }
    Gun getGun()
    {
        return gun;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setScore(int score)
    {
        this->score = score;
    }
    void setIsAlive(bool alive)
    {
        this->alive = alive;
    }
    void setGun(Gun gun)
    {
        this->gun = gun;
    }

    void setHelmet(int level)
    {
        Helmet *helmet = new Helmet;    //Dynamic
        helmet->setLevel(level);
        int health = 0;
        if (level == 1)
            health = 25;
        else if (level == 2)
            health = 50;
        else if (level == 3)
            health = 100;
        else
            cout << "Error";

        helmet->setHp(health);
        this->helmet = *helmet;
    }

    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }
};
int addScore(Player a, Player b)
{
    return a.getScore() + b.getScore();
}
Player getMaxScorePlayer(Player a, Player b)
{ // Player type ka function hai
    if (a.getScore() > b.getScore())
        return a;
    else
        return b;
}
int main()
{

    Player Harsh;  // Object creation, statically
    Player Raghav; // Compile time pe memory allocation hoga, static allocation

    Player *Urvi = new Player; // Pointer to Object //Run time pe memory allocate hoga


    // Method 1
    Player urviObject = *Urvi; // Urvi address ke andar jo value hai yo milega
    urviObject.setScore(999);
    // cout << urviObject.getScore() << endl;
    // Method 2
    (*Urvi).setAge(40);
    // cout << (*Urvi).getAge() << endl;
    // Method 3
    Urvi->setHealth(40);
    // cout << Urvi->getHealth() << endl;


    Gun akm;
    akm.ammo = 100;
    akm.damage = 120;
    akm.scope = 2;

    Harsh.setAge(21);
    Harsh.setScore(100);
    Harsh.setIsAlive(true);
    Harsh.setHealth(70);
    Harsh.setGun(akm);
    Harsh.setHelmet(2);

    Gun awm;
    awm.ammo = 40;
    awm.damage = 180;
    awm.scope = 8;

    Raghav.setAge(21);
    Raghav.setScore(100);
    Raghav.setIsAlive(true);
    Raghav.setHealth(70);
    Raghav.setGun(awm);
    Raghav.setHelmet(3);


    Gun gun123 = Harsh.getGun();
    // cout<<gun123.ammo<<endl;
    // cout<<gun123.damage<<endl;
    // cout<<gun123.scope<<endl;



    Harsh.getHelmet();
    Raghav.getHelmet();


    // cout<<addScore(Harsh, Raghav)<<endl;
    Player Sanket = getMaxScorePlayer(Harsh, Raghav);
    // cout<<Sanket.getScore()<<endl;
    // cout<<Sanket.getHealth()<<endl;
}