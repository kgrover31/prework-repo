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
@property (weak, nonatomic) IBOutlet UILabel *addtip;
@property (weak, nonatomic) IBOutlet UITextField *tipTextField;
@property (weak, nonatomic) IBOutlet UILabel *equalAmt;
@property (weak, nonatomic) IBOutlet UITextField *totalTextField;
@property (strong, nonatomic) IBOutlet UIView *mainview;
- (IBAction)tipPercentSelect:(id)sender;
@end
