//
//  CCCharacter.h
//  Pirate Adventure
//
//  Created by Yordan Georgiev on 5/17/14.
//  Copyright (c) 2014 Code Coalition. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCArmor.h"
#import "CCWeapon.h"

@interface CCCharacter : NSObject

@property (strong, nonatomic) CCArmor *armor;
@property (strong, nonatomic) CCWeapon *weapon;
@property (nonatomic) int damage;
@property (nonatomic) int health;


@end
