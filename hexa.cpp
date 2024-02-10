// Copyright 2023 (Clyde Shtino)
// #include <iostream>
#include "hexa.hpp"
void hexa_flake(sf::RenderWindow& window, sf::Vector2f center, double l, int n, double theta) {
    const double radians_to_degrees = 180.0 / M_PI;
    double radius = l / 3;
    int i = 0;
    // if non recursive argument is made
    if (n == 0) {
        // setting hex center
        sf::CircleShape hex(l, 6);
        // setting position
        hex.setPosition(center);
        // sets the origin
        hex.setOrigin(l, l);
        // setting fill color
        hex.setFillColor(sf::Color(center.x * 5, center.y * 5, 1));
        // rotating hex
        hex.rotate(theta * radians_to_degrees);
        // draws the center
        window.draw(hex);
    } else {
        // recursive call
        hexa_flake(window, center, radius , n - 1, theta);
        // do while for repeating hexagons
        do {
            i++;
            double t2 = M_PI / 3 * i;
            sf::Vector2f point(center.x - radius * 2 * std::sin(t2),
            center.y - radius * 2 * std::cos(t2));
            hexa_flake(window, point, radius, n - 1, t2);
        } while (i < 6);
    }
}




