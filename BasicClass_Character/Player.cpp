#include "Player.h"

void Player::Attack(Character* obj)
{
	Player* player = dynamic_cast<Player*>(obj);
	if (!player) {
		cout << "Враг атакует вас";
	}
	else {
		cout << "Вы атакуете врага";
	}
}
