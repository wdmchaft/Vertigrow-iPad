//
//  WorkBenchAppDelegate.h
//  WorkBench
//
//  Created by hamid poursepanj on 11-11-13.
//  Copyright (c) 2011 uottawa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ThumbImageView.h"


@interface WorkBenchAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) NSMutableArray *savedObjectsArray;
@property (nonatomic, retain) NSMutableArray *fileNamesArray;
@property(nonatomic,retain)UISplitViewController *splitViewController;
@property(nonatomic,retain) NSString *fileName;
@end