//
//  SettingsViewController.h
//  ArtBoard
//
//  Created by Tim Todish on 3/13/14.
//  Copyright (c) 2014 Tim Todish. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SettingsViewControllerDelegate <NSObject>
- (void)closeSettings:(id)sender;
@end


@interface SettingsViewController : UIViewController

@property (nonatomic, weak) id<SettingsViewControllerDelegate> delegate;

@property (weak, nonatomic) IBOutlet UISlider *brushControl;

@property (weak, nonatomic) IBOutlet UISlider *opacityControl;

@property (weak, nonatomic) IBOutlet UIImageView *brushPreview;

@property (weak, nonatomic) IBOutlet UIImageView *opacityPreview;

@property (weak, nonatomic) IBOutlet UILabel *brushValueLabel;

@property (weak, nonatomic) IBOutlet UILabel *opacityValueLabel;

@property CGFloat brush;
@property CGFloat opacity;

- (IBAction)sliderChanged:(id)sender;

- (IBAction)closeSettings:(id)sender;

@end
