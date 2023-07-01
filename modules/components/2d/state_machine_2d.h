#ifndef STATE_MACHINE_2D_H
#define STATE_MACHINE_2D_H

#include "component_2d.h"
#include "state_2d.h"

class StateMachine2D : public Component2D {
	GDCLASS(StateMachine2D, Component2D);

protected:
	State2D previousState;
	State2D currentState;

	static void _bind_methods();

public:
	void transtion_to();

	StateMachine2D();
};

#endif // COMPONENT_H