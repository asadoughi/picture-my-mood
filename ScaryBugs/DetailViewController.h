//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Amir Sadoughi on 11/9/13.
//  Copyright (c) 2013 Nayeli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RateView.h"

@class ScaryBugDoc;

@interface DetailViewController : UIViewController<UITextFieldDelegate, RateViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) ScaryBugDoc * detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet RateView *rateView;
@property (strong, nonatomic) UIImagePickerController *picker;

- (IBAction)addPictureTapped:(id)sender;
- (IBAction)titleFieldTextChanged:(id)sender;

@end
