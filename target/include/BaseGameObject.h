#ifndef UE_BASEGAMEOBJECT_H
#define UE_BASEGAMEOBJECT_H

namespace UE {
	class UndeadEngine;
}

namespace UE {
	class BaseGameObject
	{
	public:
		void (*update) (UE::UndeadEngine* engine, UE::BaseGameObject);
	};
}

#endif