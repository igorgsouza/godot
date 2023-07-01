#ifndef STATE_2D_H
#define STATE_2D_H

#include "component_2d.h"

class StateMachine2D;

class State2D : public Component2D {
	GDCLASS(State2D, Component2D);

protected:
	StateMachine2D &state_machine;
	static void _bind_methods();

public:
	void transtion_to();
	int get_total() const;

	void on_enter();
	void on_exit();
	void on_process();

	State2D(StateMachine2D &state_machine);
};

#endif // COMPONENT_H