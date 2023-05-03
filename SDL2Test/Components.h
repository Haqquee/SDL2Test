#pragma once
#include "ECS.h"

class PositionComponent : public Component {

private:
	int xpos = 0, ypos = 0;

public:
	int x() { return xpos; }
	int y() { return ypos; }

	void init() override {
		xpos = 0; ypos = 0;
	}
	void setPos(int x, int y) {
		xpos = x; ypos = y;
	}

	void update() override {
		xpos++; ypos++;
	}

};