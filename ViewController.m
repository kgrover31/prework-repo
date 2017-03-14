//
//  ViewController.m
//  TipCalculator
//
//  Created by Saurabh Kanika on 3/13/17.
//  Copyright (c) 2017 Kanika Grover. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.billTextField addTarget:self action:@selector(textFieldDidChange:) forControlEvents:UIControlEventEditingChanged];
    [self.totalTextField setEnabled: NO];
	// Do any additional setup after loading the view, typically from a nib.
}

-(void) textFieldDidChange:(UITextField *)theTextField{
    [self calcTipAndTotal];
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)tipPercentSelect:(id)sender {
    [self calcTipAndTotal];
}
-(void)calcTipAndTotal{
NSArray* tipValues = @[@(0.15), @(0.20), @(0.30)];
float tip = [tipValues[self.tipSegment.selectedSegmentIndex] floatValue];

float bill = [[self.billTextField text] floatValue];
float tipAmount = bill * tip;
float totalAmount = bill + tipAmount;

NSString *tipText = [NSString stringWithFormat:@"$%.2f", tipAmount];
self.addTip.Text = @"+";
self.tipTextField.Text = tipText;

NSString *amountText = [NSString stringWithFormat:@"$%.2f", totalAmount];
self.equalAmt.Text = @"=";
self.totalTextField.Text = amountText;
}
@end
