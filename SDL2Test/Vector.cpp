#include "Vector.h"

Vector::Vector() {
	x = 0.0f;
	y = 0.0f;
}

Vector::Vector(float x, float y) {
	this->x = x;
	this->y = y;
}

Vector& Vector::Add(const Vector& vec) {
	this->x += vec.x;
	this->y += vec.y;
	return *this;
}

Vector& Vector::Subtract(const Vector& vec) {
	this->x -= vec.x;
	this->y -= vec.y;
	return *this;
}

Vector& Vector::Multiply(const Vector& vec) {
	this->x *= vec.x;
	this->y *= vec.y;
	return *this;
}

Vector& Vector::Divide(const Vector& vec) {
	this->x /= vec.x;
	this->y /= vec.y;
	return *this;
}

Vector& operator+(Vector& v1, const Vector& v2) {
	return v1.Add(v2);
}

Vector& operator-(Vector& v1, const Vector& v2) {
	return v1.Subtract(v2);
}

Vector& operator*(Vector& v1, const Vector& v2) {
	return v1.Multiply(v2);
}

Vector& operator/(Vector& v1, const Vector& v2) {
	return v1.Divide(v2);
}

Vector& Vector::operator+=(const Vector & vec) {
	return this->Add(vec);
}

Vector& Vector::operator-=(const Vector& vec) {
	return this->Subtract(vec);
}

Vector& Vector::operator*=(const Vector& vec) {
	return this->Multiply(vec);
}

Vector& Vector::operator/=(const Vector& vec) {
	return this->Divide(vec);
}

Vector& Vector::operator*(const int& i) {
	this->x *= i;
	this->y *= i;
	return *this;
}

Vector& Vector::zero() {
	this->x = 0;
	this->y = 0;
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const Vector& vec) {
	stream << vec.x << ',' << vec.y;
	return stream;
}