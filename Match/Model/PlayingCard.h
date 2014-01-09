//
//  PlayingCard.h
//  Match
//
//  Created by Kim Ngo on 1/4/14.
//  Copyright (c) 2014 Kim Ngo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
