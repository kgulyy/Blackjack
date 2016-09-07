cmake_minimum_required(VERSION 3.5)
project(Blackjack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

set(SOURCE_FILES main.cpp Card.cpp Card.h Hand.cpp Hand.h GenericPlayer.cpp GenericPlayer.h Player.cpp Player.h House.cpp House.h Deck.cpp Deck.h Game.cpp Game.h)
add_executable(Blackjack ${SOURCE_FILES})