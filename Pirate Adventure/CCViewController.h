//
//  CCViewController.h
//  Pirate Adventure
//
//  Created by Yordan Georgiev on 5/16/14.
//  Copyright (c) 2014 Code Coalition. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCCharacter.h"
#import "CCBoss.h"

@interface CCViewController : UIViewController

//iVars
@property (nonatomic) CGPoint currentPoint;
@property (strong, nonatomic) NSArray *tiles;
@property (strong, nonatomic) CCCharacter *character;
@property (strong, nonatomic) CCBoss *boss;


//IBOutlets
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@property (strong, nonatomic) IBOutlet UILabel *healthLabel;

@property (strong, nonatomic) IBOutlet UILabel *damageLabel;

@property (strong, nonatomic) IBOutlet UILabel *weaponLabel;

@property (strong, nonatomic) IBOutlet UILabel *armorLabel;

@property (strong, nonatomic) IBOutlet UILabel *storyLabel;

@property (strong, nonatomic) IBOutlet UIButton *actionButton;

@property (strong, nonatomic) IBOutlet UIButton *northButton;

@property (strong, nonatomic) IBOutlet UIButton *eastButton;

@property (strong, nonatomic) IBOutlet UIButton *sudButton;

@property (strong, nonatomic) IBOutlet UIButton *westButton;

//IBActions

- (IBAction)actionButtonPressed:(UIButton *)sender;

- (IBAction)northActionPressed:(UIButton *)sender;

- (IBAction)eastButtonPressed:(UIButton *)sender;

- (IBAction)sudButtonPressed:(UIButton *)sender;

- (IBAction)westButtonPressed:(UIButton *)sender;
- (IBAction)resetButton:(UIButton *)sender;


@end
