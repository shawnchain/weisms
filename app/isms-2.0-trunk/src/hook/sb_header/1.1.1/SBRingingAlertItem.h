/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class AVController, NSTimer;

@interface SBRingingAlertItem : SBAlertItem
{
    AVController *_avController;	// 12 = 0xc
    BOOL _isRinging;	// 16 = 0x10
    NSTimer *_autoMuteTimer;	// 20 = 0x14
}

- (void)_autoMute:(id)fp8;	// IMP=0x00074bd4
- (void)_stopAutoMuteTimer;	// IMP=0x00074b8c
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x00074bf0
- (id)avAudioCategory;	// IMP=0x00074990
- (id)avClientName;	// IMP=0x00074984
- (id)avClientPriority;	// IMP=0x0007499c
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;	// IMP=0x0007474c
- (void)dealloc;	// IMP=0x00074cdc
- (BOOL)dismissOnLock;	// IMP=0x000749d0
- (BOOL)isRinging;	// IMP=0x00074ac4
- (float)lockLabelFontSize;	// IMP=0x000749d8
- (BOOL)shouldShowInEmergencyCall;	// IMP=0x000749c8
- (id)soundIdentifier;	// IMP=0x00074978
- (void)startRingingAndVibrating;	// IMP=0x00074acc
- (void)stopRingingAndVibrating;	// IMP=0x00074c64
- (void)willDeactivate:(BOOL)fp8;	// IMP=0x00074c30
- (void)willPresentAlertSheet:(id)fp8;	// IMP=0x000749e4

@end

