//
//  DMFlipsideViewController.m
//  DND App
//
//  Created by Christopher Nies on 4/4/14.
//  Copyright (c) 2014 iMasterchris. All rights reserved.
//

#import "DMFlipsideViewController.h"

@interface DMFlipsideViewController ()

@end

@implementation DMFlipsideViewController

- (void)awakeFromNib
{
    self.preferredContentSize = CGSizeMake(320.0, 480.0);
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
