#ifndef PREDATOR
#define PREDATOR

#include "../header/MovingEntity.h"
#include "../header/Bird.h"
#include <vector>

class Predator : public MovingEntity {
	public:
		Predator(float x, float y, float size, float max_speed, float max_acceleration, float max_rotation_speed, Float2 direction);
		void updatePosition();
		void setPreys(std::vector<Bird*> friends);
		void draw(SDL_Renderer * renderer);
	private:
		std::vector<Bird*> preys;
};

#endif