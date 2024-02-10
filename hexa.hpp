// Copyright 2023 (Clyde Shtino)
#pragma once
#ifndef HEXA_HPP
#define HEXA_HPP
#include <iostream>
#include <cmath>
#include <SFML/Main.hpp>
#include <SFML/Graphics.hpp>
// function to draw hexaflake
void hexa_flake(sf::RenderWindow& window, sf::Vector2f center, double l, int n, double theta = 0);
#endif
