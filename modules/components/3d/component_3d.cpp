/* component.cpp */

#include "component_3d.h"

void Component3D::add(int p_value) {
	count += p_value * 2;
}

void Component3D::reset() {
	count = 0;
}

int Component3D::get_total() const {
	return count;
}

void Component3D::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &Component3D::add);
	ClassDB::bind_method(D_METHOD("reset"), &Component3D::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Component3D::get_total);
}

Component3D::Component3D() {
	count = 0;
}