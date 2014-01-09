//
//  Deck.h
//  Match
//
//  Created by Kim Ngo on 1/4/14.
//  Copyright (c) 2014 Kim Ngo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void) addCard: (Card *) card atTop: (BOOL)atTop;
- (void) addCard: (Card *) card;
- (Card *) drawRandomCard;

@end
