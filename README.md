UISplitViewController-QuickAccess
=================================
[![CocoaPods Compatible](https://img.shields.io/badge/Cocoapod-Compatible-brightgreen.svg?style=flat)](https://cocoapods.org)
[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

QuickAccess category for `UISplitViewController` to get the "left" (master) controller or "right" (detail) controller 
quickly and easily. When working with a `UISplitViewController` I frequently want to get the master controller or the
detail controller which requires unpacking the `viewControllers` array. Worse, often the top level controllers in
viewArray are actually `UINavigationControllers` and in that case what I really want is the `UINavigationController's
topViewcontroller` property.

Also note that the category files are named UISplitViewController+QuickAccess, but GitHub changed the + to a - in the
name.
