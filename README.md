UISplitViewController-QuickAccess
=================================

QuickAccess category for `UISplitViewController` to get the "left" (master) controller or "right" (detail) controller 
quickly and easily. When working with a `UISplitViewController` I frequently want to get the master controller or the
detail controller which requires unpacking the `viewControllers` array. Worse, often the top level controllers in
viewArray are actually `UINavigationControllers` and in that case what I really want is the `UINavigationController's
topViewcontroller` property.

Also note that the category files are named UISplitViewController+QuickAccess, but GitHub changed the + to a - in the
name. Personally I keep it in a folder with the + symbol, which is fine on HFS.
