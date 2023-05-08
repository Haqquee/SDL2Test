#pragma once
#include "Components.h"
#include "../Vector.h"
class TransformComponent : public Component {

private:
	int xpos = 0, ypos = 0;

public:

	Vector position;

	TransformComponent() {
		position.x = 0.0f;
		position.y = 0.0f;
	}

	TransformComponent(float x, float y) {
		position.x = x;
		position.y = y;
	}
	
	/*void init() override {
		xpos = 0; ypos = 0;
	}*/

	

	

};