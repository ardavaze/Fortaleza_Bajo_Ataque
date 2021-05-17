#include"SFML/Graphics.hpp"


using namespace sf;

int main() {
	bool game_over = false;
	RenderWindow ventana(VideoMode(800, 600, 31), "Ejemplo");
	CircleShape shape(100.f);
	shape.setFillColor(Color::Green);
	while (ventana.isOpen()) {
		Event event;
		while (ventana.pollEvent(event)) {
			if (event.type == Event::Closed)
				ventana.close();
		}

		ventana.clear();
		ventana.draw(shape);
		ventana.display();
	}
	return 0;
}