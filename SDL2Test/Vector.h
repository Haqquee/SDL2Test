#pragma once
#include <iostream>

class Vector {

public:
	float x;
	float y;

	Vector();
	Vector(float x, float y);

	Vector& Add(const Vector& vec);
	Vector& Subtract(const Vector& vec);
	Vector& Multiply(const Vector& vec);
	Vector& Divide(const Vector& vec);

	friend Vector& operator+(Vector& v1, const Vector& v2);
	friend Vector& operator-(Vector& v1, const Vector& v2);
	friend Vector& operator*(Vector& v1, const Vector& v2);
	friend Vector& operator/(Vector& v1, const Vector& v2);

	Vector& operator+=(const Vector& vec);
	Vector& operator-=(const Vector& vec);
	Vector& operator*=(const Vector& vec);
	Vector& operator/=(const Vector& vec);

	Vector& operator*(const int& i);
	Vector& zero();

	friend std::ostream& operator<<(std::ostream&, const Vector& vec);
};