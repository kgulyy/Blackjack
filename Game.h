//
// Created by KGuly on 07.09.2016.
//

#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H

#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game {
 public:
  Game(const vector<string>& names);
  ~Game();

  // проводит игру в Blackjack
  void Play();

 private:
  Deck m_Deck;
  House m_House;
  vector<Player> m_Players;
};

#endif //BLACKJACK_GAME_H
