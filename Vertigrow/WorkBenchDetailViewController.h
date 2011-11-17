//
//  WorkBenchDetailViewController.h
//  WorkBench
//
//  Created by hamid poursepanj on 11-11-13.
//  Copyright (c) 2011 uottawa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ThumbImageView.h"
#import "ImageViewForScroller.h"

@interface WorkBenchDetailViewController : UIViewController <UISplitViewControllerDelegate,UIGestureRecognizerDelegate,ThumbImageViewDelegate,ImageViewForScrollerDelegate>{
    BOOL thumbViewShowing;

}

@property (strong, nonatomic) id detailItem;
@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (nonatomic, retain) IBOutlet UINavigationController *masterNavController; // convenience.
@property (nonatomic, retain) IBOutlet UINavigationController *detailNavController; // convenience.

@property(nonatomic,retain) UIScrollView *thumbScrollView;
@property(nonatomic,retain)UIView       *slideUpView; // Contains thumbScrollView and a label giving credit for the images.
@property(nonatomic,retain) NSArray *ImagesNameArray;
- (IBAction)sildeMasterViewLeftRight:(id)sender;
- (void)createThumbScrollViewIfNecessary;
- (void)createSlideUpViewIfNecessary;
@end
