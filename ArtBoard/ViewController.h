//
//  ViewController.h
//  ArtBoard
//
//  Created by Tim Todish on 3/12/14.
//  Copyright (c) 2014 Tim Todish. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
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
