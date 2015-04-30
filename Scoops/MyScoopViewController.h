//
//  MyNewViewController.h
//  Scoops
//
//  Created by Miguel Angel Vélez Serrano on 25/4/15.
//  Copyright (c) 2015 Miguel Ángel Vélez Serrano. All rights reserved.
//

#import <WindowsAzureMobileServices/WindowsAzureMobileServices.h>
@import UIKit;
@class Scoop;

@interface MyScoopViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleView;
@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet UILabel *publishLabel;
@property (weak, nonatomic) IBOutlet UISwitch *publishSwitch;

@property (strong, nonatomic) Scoop *model;

-(id) initWithScoop: (Scoop *) scoop client: (MSClient *) aClient;

- (IBAction)publish:(id)sender;
@end
