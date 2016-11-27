//
//  ModelController.h
//  SHyFT
//
//  Created by Ali Toyserkani on 2016-11-26.
//  Copyright © 2016 Ali Toyserkani. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

