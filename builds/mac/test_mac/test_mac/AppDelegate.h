//
//  AppDelegate.h
//  test_mac
//
//  Created by Resident Evil on 29.07.14.
//  Copyright (c) 2014 re. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

- (IBAction) onCreate:(id)sender;
- (IBAction) onConnect:(id)sender;

@end
