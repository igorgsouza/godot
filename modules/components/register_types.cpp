/* #include "register_types.h"

#include "2d/component_2d.h"
#include "3d/component_3d.h"
#include "core/object/class_db.h"

void initialize_components_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<Component2D>();
	ClassDB::register_class<Component3D>();
}

void uninitialize_components_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
} */