#pragma once
#include "Components.h"
#include "../Vector.h"
class TransformComponent : public Component {

private:
	int xpos = 0, ypos = 0;

public:

	Vector position;
	Vector velocity;

	int height = 32;
	int width = 32;
	int scale = 1;

	int speed = 3;

	TransformComponent() {
		position.zero();
	}

	TransformComponent(float x, float y) {
		position.x = x;
		position.y = y;
	}

	TransformComponent(int sc) {
		position.zero();
		scale = sc;
	}

	TransformComponent(float x, float y, int h, int w, int sc) {
		position.x = x;
		position.y = y;
		height = h;
		width = w;
		scale = sc;
	}

	/*void init() override {
		xpos = 0; ypos = 0;
	}*/

	void init() override {
		velocity.zero();
	}

	void update() override {
		position.x += velocity.x * speed;
		position.y += velocity.y * speed;
	}
	
};