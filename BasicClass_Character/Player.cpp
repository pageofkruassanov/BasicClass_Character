#include "Player.h"

void Player::Attack(Character* obj)
{
	Player* player = dynamic_cast<Player*>(obj);
	if (!player) {
		cout << "���� ������� ���";
	}
	else {
		cout << "�� �������� �����";
	}
}
