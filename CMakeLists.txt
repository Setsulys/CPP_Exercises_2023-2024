cmake_minimum_required(VERSION 3.16)
project(CPP_Exercices)

## TP2
add_executable(card
tp2/main.cpp tp2/card/Card.cpp tp2/card/Card.hpp
tp2/player/Player.cpp tp2/player/Player.hpp
)
