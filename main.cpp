// Copyright 2023 (Clyde Shtino)
#include <iostream>
#include "hexa.hpp"
// #include "hexa.cpp"

int main(int argc, char * argv[]) {
    // to obtain user input
    double l;
    int n;
    std::cout << "Please enter length: ";
    std::cin >> l;
    std::cout << "Please enter depth: ";
    std::cin >> n;
    unsigned int win_size = 3 * l;
    // render window
    sf::RenderWindow window(sf::VideoMode(win_size, win_size), "Welcome to my Hexaflake!");
    // center
    sf::Vector2f center(win_size / 2 , win_size / 2);
    // intializing the base hexagon
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
            window.close();
        }
        window.clear();
        // calls the function
        hexa_flake(window, center, l, n);
        window.display();
    }
    return 0;
}


