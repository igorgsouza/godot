/* component.cpp */

#include "component_2d.h"

void Component2D::add(int p_value) {
	count += p_value;
}

void Component2D::reset() {
	count = 0;
}

int Component2D::get_total() const {
	return count;
}

void Component2D::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &Component2D::add);
	ClassDB::bind_method(D_METHOD("reset"), &Component2D::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Component2D::get_total);
}

Component2D::Component2D() {
	count = 0;
}