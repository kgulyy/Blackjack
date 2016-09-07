//
// Created by KGuly on 07.09.2016.
//

#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H

#include "Hand.h"
#include "GenericPlayer.h"

class Deck : Hand {
 public:
  Deck();
  virtual ~Deck();

  // создает стандартную колоду из 52 карт
  void Populate();

  // тасует карты
  void Shuffle();

  // раздает одну карту в руку
  void Deal(Hand& aHand);

  // дает дополнительные карты игроку
  void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif //BLACKJACK_DECK_H
