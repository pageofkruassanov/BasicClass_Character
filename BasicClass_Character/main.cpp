#include <iostream>
#include "Character.h"
#include "Enemy.h"
#include "Player.h"

int main()
{
    setlocale(0, "Rus");
    Player pl;
    Enemy en;
    pl.Attack(&en);
    cout << endl;
    pl.Attack(&pl);
}