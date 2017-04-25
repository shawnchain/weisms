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

+ (id)sharedVolumeControl;	// IMP=0x00038c78
- (BOOL)_HUDIsDisplayableForCategory:(id)fp8;	// IMP=0x00039420
- (BOOL)_allowVolumeChangeForCategory:(id)fp8;	// IMP=0x000396a4
- (float)_calcButtonRepeatDelay;	// IMP=0x0003984c
- (void)_changeVolumeBy:(float)fp8;	// IMP=0x00039734
- (void)_createUI;	// IMP=0x00039048
- (void)_orderWindowFront:(id)fp8 forCategory:(id)fp12;	// IMP=0x00039508
- (void)_orderWindowOut:(id)fp8;	// IMP=0x000392bc
- (void)_registerForAVSystemControllerNotifications;	// IMP=0x00039eec
- (void)_serverConnectionDied:(id)fp8;	// IMP=0x0003a088
- (void)_systemVolumeChanged:(id)fp8;	// IMP=0x0003a1d8
- (void)_tearDown;	// IMP=0x00039260
- (void)_unregisterForAVSystemControllerNotifications;	// IMP=0x00039ff4
- (int)_volumeModeForCategory:(id)fp8;	// IMP=0x0003a0bc
- (float)_windowFadeDelay;	// IMP=0x000394e4
- (void)addAlwaysHiddenCategory:(id)fp8;	// IMP=0x0003939c
- (void)animationDidStop:(id)fp8 finished:(id)fp12;	// IMP=0x00039e5c
- (void)cancelVolumeEvent;	// IMP=0x00039da4
- (void)dealloc;	// IMP=0x00038d20
- (void)decreaseVolume;	// IMP=0x000399b4
- (void)handleVolumeEvent:(struct __GSEvent *)fp8;	// IMP=0x00039c40
- (void)hideHUD;	// IMP=0x00039ae4
- (void)increaseVolume;	// IMP=0x00039908
- (id)init;	// IMP=0x00038cc8
- (id)lastDisplayedCategory;	// IMP=0x00039c30
- (void)removeAlwaysHiddenCategory:(id)fp8;	// IMP=0x00039400
- (void)reorientHUDIfNeeded:(BOOL)fp8;	// IMP=0x00038d8c
- (void)setHUDMode:(int)fp8;	// IMP=0x00039c38
- (void)showHUD;	// IMP=0x00039b54

@end

