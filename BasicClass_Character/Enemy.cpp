#include "Enemy.h"

void Enemy::Attack(Character* obj)
{
	Enemy* enemy = dynamic_cast<Enemy*>(obj);
	if (!enemy) {
		cout << "���� ������� ���";
	}
	else{
		cout << "�� �������� �����";
	}
}
