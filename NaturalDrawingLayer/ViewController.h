//
//  ViewController.h
//  NaturalDrawingLayer
//
//  Created by Randy McLain on 2/2/17.
//  Copyright © 2017 Randy McLain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *mainImageView;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImageView;
- (IBAction)pencilPressed:(id)sender;
- (IBAction)eraserPressed:(id)sender;
- (IBAction)resetPressed:(id)sender;
- (IBAction)savePressed:(id)sender;
- (IBAction)settingsPressed:(id)sender;




@end

