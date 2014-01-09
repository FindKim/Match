//
//  CardMatchingGame.h
//  Match
//
//  Created by Kim Ngo on 1/4/14.
//  Copyright (c) 2014 Kim Ngo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
#import "Deck.h"

@interface CardMatchingGame : NSObject

//designated initializer (init)
- (id)initWithCardCount:(NSUInteger)count
              usingDeck:(Deck *)deck; //how many cards

- (void)chooseCardAtIndex:(NSUInteger)index; //score

- (Card *)cardAtIndex:(NSUInteger)index; //get card

@property (readonly, nonatomic) int score; //getter, no setter

@end
