#include <iostream>

using namespace std;

class Enemy {
    public:
        virtual void attack() = 0; /* {
            cout << "I am the enemy class!" << endl;
        }*/
};

class Ninja: public Enemy {
    public:
        void attack() {
        cout << "Ninja attack!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
        cout << "Monster attack!" << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();

    return 0;
}
