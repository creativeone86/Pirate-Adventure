//
//  CCFactory.h
//  Pirate Adventure
//
//  Created by Yordan Georgiev on 5/16/14.
//  Copyright (c) 2014 Code Coalition. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCCharacter.h"
#import "CCBoss.h"

@interface CCFactory : NSObject

-(NSArray *)tiles;
-(CCCharacter *)character;
-(CCBoss *)boss;
@end
