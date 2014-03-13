//
//  ViewController.h
//  ArtBoard
//
//  Created by Tim Todish on 3/12/14.
//  Copyright (c) 2014 Tim Todish. All rights reserved.
//
//  Code from the following tutorial: http://www.raywenderlich.com/18840/how-to-make-a-simple-drawing-app-with-uikit.
//


#import <UIKit/UIKit.h>
#import "SettingsViewController.h"

@interface ViewController : UIViewController <SettingsViewControllerDelegate> {
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
    
}

@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;

- (IBAction)pencilPressed:(id)sender;

- (IBAction)eraserPressed:(id)sender;

- (IBAction)settings:(id)sender;

@end
