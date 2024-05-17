#include "Enemy.h"

Enemy::Enemy() {
    state = State::approach;
};

Enemy::~Enemy() {};

//3 types of state
void(Enemy::* Enemy::StateFunction[])() = {
&Enemy::approach,
&Enemy::shoot,
&Enemy::leave
};

//approach
void Enemy::approach() {
    std::cout << "approach" << std::endl;
}
//shoot
void Enemy::shoot() {
    std::cout << "shoot" << std::endl;

}
//leave
void Enemy::leave() {
    std::cout << "leave" << std::endl;
}

//Update enemy
void Enemy::Update() {

    (this->*StateFunction[static_cast<size_t>(state)])();

    if (state == State::approach) {
        state = State::shoot;
    }
    else if (state == State::shoot) {
        state = State::leave;
    }
    else if (state == State::leave) {
        state = State::approach;
    }

};