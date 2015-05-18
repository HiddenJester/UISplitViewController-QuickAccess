//
//  UISplitViewController+QuickAccess.m
//
//  Created by Timothy Sanders on 6/28/12.
//  Copyright (c) 2012 HiddenJester Software.
//	This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.
//	See http://creativecommons.org/licenses/by-nc-sa/4.0/

@import UIKit;

#import "UISplitViewController+QuickAccess.h"

@implementation UISplitViewController (QuickAccess)

- (UIViewController *)leftController {
	UIViewController * leftVC = [[self viewControllers] objectAtIndex:0];
	
	if ([leftVC isKindOfClass:[UINavigationController class]]) {
		leftVC = [(UINavigationController *)leftVC topViewController];
	}
    return  leftVC;
}

- (UIViewController *)rightController {
	UIViewController * rightVC = [[self viewControllers] lastObject];
	
	if ([rightVC isKindOfClass:[UINavigationController class]]) {
		rightVC = [(UINavigationController *)rightVC topViewController];
	}
    return rightVC;
}

@end
