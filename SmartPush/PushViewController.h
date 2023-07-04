//
//  PushViewController.h
//  SmartPush
//
//  Created by Jakey on 15/3/15.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ioSock.h"
#import "TextFieldDrag.h"
#import "DragPopUpButton.h"
#import "Sec.h"
@interface PushViewController : NSViewController<NSTextFieldDelegate>
{
    
    NSString *_token;
    NSString *_lastCerPath;
    NSString *_cerName;

    otSocket socket;
    OSStatus _connectResult;
    OSStatus _closeResult;
    
    SSLContextRef _context;
    SecKeychainRef _keychain;
    Sec2 *_currentSec;
    SecIdentityRef _identity;
    NSUserDefaults *_defaults;
    NSMutableArray *_certificates;
}
@property (unsafe_unretained) IBOutlet NSTextView *payload;
@property (unsafe_unretained) IBOutlet NSTextView *logTextView;
@property (weak) IBOutlet NSMatrix *mode;
@property (weak) IBOutlet NSButtonCell *devSelect;
@property (weak) IBOutlet NSButtonCell *productSelect;
@property (weak) IBOutlet NSPopUpButton *payLoadPopUpButton;
@property (weak) IBOutlet DragPopUpButton *cerPopUpButton;
@property (weak) IBOutlet NSSegmentedControl *prioritySegmentedControl;
@property (weak) IBOutlet NSPopUpButton *pushTypeButton;
@property (weak) IBOutlet NSTextField *teamIDKeyTextField;
@property (weak) IBOutlet NSTextField *teamIDTextField;
@property (weak) IBOutlet NSTextField *keyIDKeyTextField;
@property (weak) IBOutlet NSTextField *keyIDTextField;
@property (weak) IBOutlet NSTextField *bundleIDKeyTextField;
@property (weak) IBOutlet NSTextField *bundleIDTextField;
@property (weak) IBOutlet NSTextField *tokenKeyTextField;
@property (weak) IBOutlet NSTextField *deviceTokenTextField;

- (IBAction)connect:(id)sender;
- (IBAction)push:(id)sender;
- (IBAction)modeSwitch:(id)sender;
- (IBAction)payLoadButtonTouched:(id)sender;
- (IBAction)playLoadTypeTouched:(id)sender;
- (IBAction)prioritySwitch:(id)sender;

@end
