/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TPPhonePad.h"

@class SBEmergencyCallButton, UIImage, UIPushButton;

@interface SBDeviceLockKeypad : TPPhonePad
{
    UIImage *_deleteIcon;	// 104 = 0x68
    UIPushButton *_deleteButton;	// 108 = 0x6c
    SBEmergencyCallButton *_emergencyCallButton;	// 112 = 0x70
    BOOL _showDeleteIcon;	// 116 = 0x74
    BOOL _playKeyboardClicks;	// 117 = 0x75
}

- (id)_keypadImage;	// IMP=0x0005cab0
- (id)_pressedImage;	// IMP=0x0005c954
- (float)_yFudge;	// IMP=0x0005cb9c
- (void)dealloc;	// IMP=0x0005c780
- (void)hiddenFromView;	// IMP=0x0005ca2c
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x0005c324
- (void)setPlaysKeyboardClicks:(BOOL)fp8;	// IMP=0x0005c51c
- (void)setShowsDeleteIcon:(BOOL)fp8;	// IMP=0x0005c800
- (void)setShowsEmergencyCallButton:(BOOL)fp8;	// IMP=0x0005c5ac
- (BOOL)showsEmergencyCallButton;	// IMP=0x0005c59c
- (void)willBecomeVisible;	// IMP=0x0005ca94

@end

