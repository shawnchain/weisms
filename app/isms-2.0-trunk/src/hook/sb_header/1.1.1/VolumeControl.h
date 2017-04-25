/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString, UIWindow, VolumeControlView;

@interface VolumeControl : NSObject
{
    UIWindow *_volumeWindow;	// 4 = 0x4
    VolumeControlView *_volumeView;	// 8 = 0x8
    BOOL _windowVisible;	// 12 = 0xc
    BOOL _debounce;	// 13 = 0xd
    int _mode;	// 16 = 0x10
    double _lastButtonEventTime;	// 20 = 0x14
    NSMutableSet *_alwaysHiddenCategories;	// 28 = 0x1c
    NSString *_lastDisplayedCategory;	// 32 = 0x20
    NSString *_lastEventCategory;	// 36 = 0x24
}

+ (id)sharedVolumeControl;	// IMP=0x00038410
- (BOOL)_HUDIsDisplayableForCategory:(id)fp8;	// IMP=0x00038bb8
- (BOOL)_allowVolumeChangeForCategory:(id)fp8;	// IMP=0x00038e3c
- (float)_calcButtonRepeatDelay;	// IMP=0x00038fe4
- (void)_changeVolumeBy:(float)fp8;	// IMP=0x00038ecc
- (void)_createUI;	// IMP=0x000387e0
- (void)_orderWindowFront:(id)fp8 forCategory:(id)fp12;	// IMP=0x00038ca0
- (void)_orderWindowOut:(id)fp8;	// IMP=0x00038a54
- (void)_registerForAVSystemControllerNotifications;	// IMP=0x00039684
- (void)_serverConnectionDied:(id)fp8;	// IMP=0x00039820
- (void)_systemVolumeChanged:(id)fp8;	// IMP=0x00039970
- (void)_tearDown;	// IMP=0x000389f8
- (void)_unregisterForAVSystemControllerNotifications;	// IMP=0x0003978c
- (int)_volumeModeForCategory:(id)fp8;	// IMP=0x00039854
- (float)_windowFadeDelay;	// IMP=0x00038c7c
- (void)addAlwaysHiddenCategory:(id)fp8;	// IMP=0x00038b34
- (void)animationDidStop:(id)fp8 finished:(id)fp12;	// IMP=0x000395f4
- (void)cancelVolumeEvent;	// IMP=0x0003953c
- (void)dealloc;	// IMP=0x000384b8
- (void)decreaseVolume;	// IMP=0x0003914c
- (void)handleVolumeEvent:(struct __GSEvent *)fp8;	// IMP=0x000393d8
- (void)hideHUD;	// IMP=0x0003927c
- (void)increaseVolume;	// IMP=0x000390a0
- (id)init;	// IMP=0x00038460
- (id)lastDisplayedCategory;	// IMP=0x000393c8
- (void)removeAlwaysHiddenCategory:(id)fp8;	// IMP=0x00038b98
- (void)reorientHUDIfNeeded:(BOOL)fp8;	// IMP=0x00038524
- (void)setHUDMode:(int)fp8;	// IMP=0x000393d0
- (void)showHUD;	// IMP=0x000392ec

@end

