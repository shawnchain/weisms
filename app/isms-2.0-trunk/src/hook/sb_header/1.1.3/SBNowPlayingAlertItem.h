/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@interface SBNowPlayingAlertItem : SBAlertItem
{
    unsigned int _seeked:1;	// 10 = 0xa
}

+ (id)currentInstance;	// IMP=0x0007c3d4
+ (BOOL)hasCurrentInstance;	// IMP=0x0007c424
- (void)_clearSeekedFlag:(id)fp8;	// IMP=0x0007ce30
- (void)_controlButtonAction:(id)fp8;	// IMP=0x0007ce40
- (id)_createButtonWithImage:(id)fp8 action:(SEL)fp12 tag:(int)fp16;	// IMP=0x0007cac8
- (void)_nowPlayingChanged:(id)fp8;	// IMP=0x0007d234
- (void)_registerForNowPlayingNotifications;	// IMP=0x0007d074
- (void)_registerForVolumeNotifications;	// IMP=0x0007d154
- (void)_systemVolumeChanged:(id)fp8;	// IMP=0x0007d28c
- (void)_unregisterForNowPlayingNotifications;	// IMP=0x0007d0f4
- (void)_unregisterForVolumeNotifications;	// IMP=0x0007d1d4
- (void)_updateLabelWithTag:(int)fp8 text:(id)fp12 faded:(BOOL)fp16 cursor:(float *)fp20 sheet:(id)fp24;	// IMP=0x0007c5fc
- (void)_volumeChange:(id)fp8;	// IMP=0x0007cefc
- (id)alertSheet;	// IMP=0x0007cbc0
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x0007cde8
- (BOOL)allowMenuButtonDismissal;	// IMP=0x0007cde0
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;	// IMP=0x0007d8d8
- (id)createCenteredLabel:(BOOL)fp8;	// IMP=0x0007c43c
- (id)init;	// IMP=0x0007c37c
- (void)updateInformation:(BOOL)fp8;	// IMP=0x0007c794
- (void)viewHandleTouchPause:(id)fp8 isDown:(BOOL)fp12;	// IMP=0x0007cf5c
- (double)viewTouchPauseThreshold:(id)fp8;	// IMP=0x0007d064
- (void)willActivate;	// IMP=0x0007cca8
- (void)willDeactivateForReason:(int)fp8;	// IMP=0x0007cce8

@end

