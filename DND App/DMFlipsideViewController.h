//
//  DMFlipsideViewController.h
//  DND App
//
//  Created by Christopher Nies on 4/4/14.
//  Copyright (c) 2014 iMasterchris. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DMFlipsideViewController;

@protocol DMFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(DMFlipsideViewController *)controller;
@end

@interface DMFlipsideViewController : UIViewController

@property (weak, nonatomic) id <DMFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
