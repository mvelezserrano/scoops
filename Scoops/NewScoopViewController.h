//
//  MyNewViewController.h
//  Scoops
//
//  Created by Miguel Angel Vélez Serrano on 25/4/15.
//  Copyright (c) 2015 Miguel Ángel Vélez Serrano. All rights reserved.
//

@import UIKit;
@class Scoop;

@interface NewScoopViewController : UIViewController <UITextViewDelegate, UITextFieldDelegate>


@property (weak, nonatomic) IBOutlet UITextField *scoopTitleView;
@property (weak, nonatomic) IBOutlet UITextView *scoopTextView;

- (id) initWithMSClient: (MSClient *) aClient authorName: (NSString *) anAuthorName;

- (IBAction)sendScoop:(id)sender;

@end
