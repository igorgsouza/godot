/* component.h */

#ifndef COMPONENT_3D_H
#define COMPONENT_3D_H

#include "scene/3d/node_3d.h"

class Component3D : public Node3D {
	GDCLASS(Component3D, Node3D);

	int count;

protected:
	static void _bind_methods();

public:
	void add(int p_value);
	void reset();
	int get_total() const;

	Component3D();
};

#endif // COMPONENT_H