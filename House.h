//
// Created by KGuly on 07.09.2016.
//

#ifndef BLACKJACK_HOUSE_H
#define BLACKJACK_HOUSE_H

#include "GenericPlayer.h"

class House : public GenericPlayer{
 public:
  House(const string& name = "House");
  virtual ~House();

  // показывает, хочет ли игрок продолжать брать карты
  virtual bool IsHitting() const;

  // переворачивает первую карту
  void FlipFirstCard();
};

#endif //BLACKJACK_HOUSE_H
