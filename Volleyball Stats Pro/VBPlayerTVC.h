//
//  VBPlayerTVC.h
//  Volleyball Stats Pro
//
//  Created by Nikolai Chen on 4/29/14.
//  Copyright (c) 2014 Nikolai Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Player;

@interface VBPlayerTVC : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext *context;
@property (strong, nonatomic) Player *player;


@end
