//
//  ViewController.h
//  Alcolator
//
//  Created by Leah Padgett on 4/6/15.
//  Copyright (c) 2015 Leah Padgett. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController

@property (weak, nonatomic) UITextField *beerPercentTextField;
@property (weak, nonatomic) UILabel *resultLabel;
@property (weak, nonatomic) UISlider *beerCountSlider;


- (void)buttonPressed:(UIButton *)sender;


@end

