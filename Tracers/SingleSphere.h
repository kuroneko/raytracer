#ifndef __SINGLE_SPHERE__
#define __SINGLE_SPHERE__

#include "Tracer.h"

class SingleSphere: public Tracer {
	public:
		
		SingleSphere();
										
		explicit SingleSphere(World* _worldPtr);
		
		RGBColor
		trace_ray(const Ray& ray) const override;
};

#endif
