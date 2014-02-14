//
//  UISplitViewController+QuickAccess.m
//
//  Created by Timothy Sanders on 6/28/12.
//  Copyright (c) 2012 HiddenJester Software.
// This work is licensed under the Creative Commons Attribution-ShareAlike 4.0
// International License. To view a copy of this license, visit
// http://creativecommons.org/licenses/by-sa/4.0/deed.en_US.

#import "UISplitViewController+QuickAccess.h"

@implementation UISplitViewController (QuickAccess)

- (UIViewController*)leftController {
    return [[self.viewControllers objectAtIndex:0] topViewController];
}

- (UIViewController*)rightController {
    return [[self.viewControllers lastObject] topViewController];    
}

@end
