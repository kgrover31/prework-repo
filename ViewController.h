//
//  ViewController.h
//  TipCalculator
//
//  Created by Saurabh Kanika on 3/13/17.
//  Copyright (c) 2017 Kanika Grover. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *billTextField;
@property (weak, nonatomic) IBOutlet UISegmentedControl *tipSegment;
@property (weak, nonatomic) IBOutlet UITextField *tipTextField;
@property (weak, nonatomic) IBOutlet UITextField *totalTextField;
@property (weak, nonatomic) IBOutlet UILabel *addTip;
@property (weak, nonatomic) IBOutlet UILabel *equalAmt;
- (IBAction)tipPercentSelect:(id)sender;

@end
