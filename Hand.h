//
// Created by KGuly on 07.09.2016.
//

#ifndef BLACKJACK_HAND_H
#define BLACKJACK_HAND_H

#include "Card.h"

class Hand {
 public:
  Hand();
  virtual ~Hand();

  // добавляет карту в руку
  void Add(Card* pCard);

  // очищает руку от карт
  void Clear();

  // получает сумму очков карт в руке, присваивая тузу значение 1 или 11 в зависимости от ситуации
  int GetTotal() const;

 protected:
  vector<Card*> m_Cards;
};

#endif //BLACKJACK_HAND_H
