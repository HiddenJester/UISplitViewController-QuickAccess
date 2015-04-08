//
//  UISplitViewController+QuickAccess.h
//
//  Created by Timothy Sanders on 6/28/12.
//  Copyright (c) 2012 HiddenJester Software.
// This work is licensed under the Creative Commons Attribution-ShareAlike 4.0
// International License. To view a copy of this license, visit
// http://creativecommons.org/licenses/by-sa/4.0/deed.en_US.

@import UIKit;

/*
 I often want the "left content view controller" or the "right content view controller".
 Many times the UIViewControllers in viewControllers are actually UINavigationControllers and then
 I want to get the topViewController from that. So these methods pull the left or right VC and then
 check if they are UINavigationControllers. If they are then they go ahead and return the controller's
 topViewController property.
*/

@interface UISplitViewController (QuickAccess)

@property (weak, readonly, nonatomic) UIViewController * leftController;
@property (weak, readonly, nonatomic) UIViewController * rightController;

@end
