//
//  UISplitViewController+QuickAccess.h
//
//  Created by Timothy Sanders on 6/28/12.
//  Copyright (c) 2012 HiddenJester Software.
//  Copyright (c) 2012 HiddenJester Software.
// This work is licensed under the Creative Commons Attribution-ShareAlike 4.0
// International License. To view a copy of this license, visit
// http://creativecommons.org/licenses/by-sa/4.0/deed.en_US.

#import <UIKit/UIKit.h>

/* This is almost embarrassingly simple. Thing is that I'm always having
 to get the left or the right controller from a UISplitViewController.
 Accessing them is straightforward, but does require nesting four messages
 from the UISplitViewController. So this just wraps those calls up into a
 simple "leftController" and "rightController", which return the "master"
 controller and the "detail" controller respectively.
 */
@interface UISplitViewController (QuickAccess)

@property (weak, readonly, nonatomic) UIViewController *leftController;
@property (weak, readonly, nonatomic) UIViewController *rightController;

@end
