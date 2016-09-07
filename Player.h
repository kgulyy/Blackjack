//
// Created by KGuly on 07.09.2016.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

#include "GenericPlayer.h"

class Player : public GenericPlayer {
 public:
  Player(const string& name = "");
  virtual ~Player();

  // показывает, хочет ли игрок продолжать брать карты
  virtual bool IsHitting() const;

  // объявляет, что игрок победил
  void Win() const;

  // объявляет, что игрок проиграл
  void Lose() const;

  // объявляет ничью
  void Push() const;
};

#endif //BLACKJACK_PLAYER_H
