#include <SFML\Graphics.hpp>
#include <Box2D/Box2D.h>
int main() {
	// Define the gravity vector.
	b2Vec2 gravity(0.0f, -9.8f);
	b2World world(gravity);
}