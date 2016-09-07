//
// Created by KGuly on 07.09.2016.
//

#ifndef BLACKJACK_GENERICPLAYER_H
#define BLACKJACK_GENERICPLAYER_H

#include "Hand.h"

class GenericPlayer : public Hand {
  friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);

 public:
  GenericPlayer(const string& name = "");
  virtual ~GenericPlayer();

  // показывает, хочет ли игрок продолжать брать карты
  virtual bool IsHitting() const = 0;

  // возвращает значение true, если игрок имеет перебор - сумму очков большую 21
  bool IsBusted() const;

  // объявляет, что игрок имеет перебор
  void Bust() const;

 protected:
  string m_Name;
};

#endif //BLACKJACK_GENERICPLAYER_H
