//
//  BLCWebBrowserViewController.h
//  BLCBrowser
//
//  Created by Leah Padgett on 4/13/15.
//  Copyright (c) 2015 Leah Padgett. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BLCWebBrowserViewController : UIViewController

/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately.
 */

- (void) resetWebView;

@end
