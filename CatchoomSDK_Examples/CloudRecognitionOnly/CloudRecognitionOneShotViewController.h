//
//  CloudRecognitionSnapPhotoViewController.h
//  catchoom-sdk-sampleapp
//
//  Created by Luis Martinell Andreu on 9/17/13.
//  Copyright (c) 2013 Catchoom. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CloudRecognitionOneShotViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *_takePhotoButton;
@property (weak, nonatomic) IBOutlet UIView *_preview;
@property (weak, nonatomic) IBOutlet UIView *_resultOverlay;
@property (weak, nonatomic) IBOutlet UIView *_initialOverlay;
@property (weak, nonatomic) IBOutlet UIImageView *_itemThumbnailView;
@property (weak, nonatomic) IBOutlet UILabel *_itemNameLabel;
@property (weak, nonatomic) IBOutlet UIView *_contentBox;

- (IBAction)snapPhotoToSearch:(id)sender;
- (IBAction)donePressed:(id)sender;
- (IBAction)contentPressed:(id)sender;
- (IBAction)contentReleasedInside:(id)sender;
- (IBAction)contentReleasedOutside:(id)sender;


@end
