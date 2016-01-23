//
//  ViewController.h
//  FingerPaint
//
//  Created by Thiago Heitling on 2016-01-22.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;

- (IBAction)pencilPressed:(id)sender;
- (IBAction)eraserPressed:(id)sender;

- (IBAction)resetPressed:(id)sender;
- (IBAction)settingsPressed:(id)sender;
- (IBAction)savePressed:(id)sender;

@end

