#include <SFML/Graphics.hpp>

int main() {
    // Create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Bouncing Ball Game");

    // Define the ball properties
    sf::CircleShape ball(10.f); // radius of 10 pixels
    ball.setFillColor(sf::Color::Red);
    sf::Vector2f ballPosition(400.f, 300.f); // Initial position
    sf::Vector2f ballVelocity(0.2f, 0.2f);  // Initial velocity

    // Main game loop
    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update ball position
        ballPosition += ballVelocity;

        // Collision detection and response
        if (ballPosition.x <= 0 || ballPosition.x + ball.getRadius() * 2 >= 800)
            ballVelocity.x = -ballVelocity.x;
        if (ballPosition.y <= 0 || ballPosition.y + ball.getRadius() * 2 >= 600)
            ballVelocity.y = -ballVelocity.y;

        ball.setPosition(ballPosition);

        // Clear the window
        window.clear();

        // Draw the ball
        window.draw(ball);

        // Display the updated window
        window.display();
    }

    return 0;
}
