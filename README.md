UISplitViewController-QuickAccess
=================================

QuickAccess category for UISplitViewController to get the "left" (master) controller or "right" (detail) controller quickly and easily.

/* This is almost embarrassingly simple. Thing is that I'm always having
 to get the left or the right controller from a UISplitViewController.
 Accessing them is straightforward, but does require nesting four messages
 from the UISplitViewController. So this just wraps those calls up into a
 simple "leftController" and "rightController", which return the "master"
 controller and the "detail" controller respectively.
 */

Committed to Github on 2014-02-13.
