//
//  DMMainViewController.h
//  DND App
//
//  Created by Christopher Nies on 4/4/14.
//  Copyright (c) 2014 iMasterchris. All rights reserved.
//

#import "DMFlipsideViewController.h"

@interface DMMainViewController : UIViewController <DMFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
