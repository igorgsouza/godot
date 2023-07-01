/* component.h */

#ifndef COMPONENT_2D_H
#define COMPONENT_2D_H

#include "scene/2d/node_2d.h"

class Component2D : public Node2D {
	GDCLASS(Component2D, Node2D);

	int count;

protected:
	static void _bind_methods();

public:
	void add(int p_value);
	void reset();
	int get_total() const;

	Component2D();
};

#endif // COMPONENT_H