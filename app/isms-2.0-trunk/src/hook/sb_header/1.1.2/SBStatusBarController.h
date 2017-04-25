/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, SBStatusBar, SBStatusBarContentsView, UIWindow;

@interface SBStatusBarController : NSObject
{
    UIWindow *_slidingStatusBarWindow;	// 4 = 0x4
    int _slidingStatusBarAnimation;	// 8 = 0x8
    UIWindow *_animatingCallStatusBarWindow;	// 12 = 0xc
    UIWindow *_leftBottomCorner;	// 16 = 0x10
    UIWindow *_rightBottomCorner;	// 20 = 0x14
    SBStatusBar *_statusBarView;	// 24 = 0x18
    SBStatusBarContentsView *_statusBarContentsView;	// 28 = 0x1c
    SBStatusBar *_transitioningStatusBarView;	// 32 = 0x20
    SBStatusBar *_animatingCallStatusBar;	// 36 = 0x24
    SBStatusBarContentsView *_transitioningStatusBarContentsView;	// 40 = 0x28
    unsigned int _isLocked:1;	// 44 = 0x2c
    unsigned int _lockIsChanging:1;	// 44 = 0x2c
    unsigned int _dimmed:1;	// 44 = 0x2c
    unsigned int _showDimmerOverlay:1;	// 44 = 0x2c
    unsigned int _animating:1;	// 44 = 0x2c
    unsigned int _isInCall:1;	// 44 = 0x2c
    unsigned int _airplaneMode:1;	// 44 = 0x2c
    unsigned int _showsProgress:1;	// 44 = 0x2c
    unsigned int _cloakStatusBar:1;	// 45 = 0x2d
    unsigned int _showAirport:1;	// 45 = 0x2d
    unsigned int _animateDefaultStatusBarDown:1;	// 45 = 0x2d
    unsigned int _animateDefaultStatusBarUp:1;	// 45 = 0x2d
    NSMutableArray *_statusBarIndicatorNames;	// 48 = 0x30
    int _mode;	// 52 = 0x34
    int _orientation;	// 56 = 0x38
    int _animatingCallStatusBarOrientation;	// 60 = 0x3c
    NSString *_customText;	// 64 = 0x40
    int _airPortSignalStrength;	// 68 = 0x44
    int _queuedStatusBarMode;	// 72 = 0x48
    int _queuedStatusBarOrientation;	// 76 = 0x4c
    float _duration;	// 80 = 0x50
    BOOL _telephonyControllerCheckedIn;	// 84 = 0x54
    BOOL _bluetoothControllerCheckedIn;	// 85 = 0x55
}

+ (BOOL)isLikeAFullScreenStatusBar:(int)fp8;	// IMP=0x0002e02c
+ (id)sharedStatusBarController;	// IMP=0x0002db44
+ (id)statusBarImageNamed:(id)fp8 forMode:(int)fp12;	// IMP=0x0002f128
- (void)_SIMOrServiceStatusChanged;	// IMP=0x0002e614
- (id)_SIMStatus;	// IMP=0x0002e5a4
- (void)_SIMStatusChanged:(id)fp8;	// IMP=0x0002e68c
- (void)_finishStatusBarAnimation;	// IMP=0x0002ecd8
- (BOOL)_isServiceAvailable;	// IMP=0x0002e508
- (void)_serviceStatusChanged:(id)fp8;	// IMP=0x0002e6a8
- (void)_setStatusBarSize:(BOOL)fp8;	// IMP=0x0002ffac
- (void)_setTransitionalStatusBarSize:(BOOL)fp8;	// IMP=0x0002fe90
- (void)addStatusBarItem:(id)fp8;	// IMP=0x0002dd58
- (int)airPortStrength;	// IMP=0x0002e998
- (BOOL)airplaneModeIsEnabled;	// IMP=0x0002e790
- (void)animateDefaultStatusBarDown;	// IMP=0x0002e47c
- (void)animateDefaultStatusBarUp:(int)fp8;	// IMP=0x0002e49c
- (float)animationDuration;	// IMP=0x0002f120
- (BOOL)bluetoothControllerCheckedIn;	// IMP=0x0002f4b4
- (void)checkInController:(int)fp8;	// IMP=0x0002f44c
- (BOOL)cloakStatusBar;	// IMP=0x0002ea10
- (id)customText;	// IMP=0x0002e830
- (void)dealloc;	// IMP=0x0002db94
- (BOOL)dimmed;	// IMP=0x0002dfa8
- (void)endCallStatusBarAnimationFinished;	// IMP=0x0002e2f0
- (void)finishSwitching;	// IMP=0x0002ea84
- (id)init;	// IMP=0x00030c90
- (BOOL)isAnimatingStatusBarDown;	// IMP=0x0002e48c
- (BOOL)isAnimatingStatusBarUp;	// IMP=0x0002e4f8
- (BOOL)isInCall;	// IMP=0x0002e46c
- (BOOL)isLockChanging;	// IMP=0x0002deb8
- (BOOL)isLocked;	// IMP=0x0002deac
- (void)lockCurrentStatusBarForAnimation;	// IMP=0x0002ee50
- (void)loopCarrierNameIfNecessary;	// IMP=0x0002f4bc
- (void)orderStatusBarFront;	// IMP=0x0002ec04
- (void)preheatStatusBarForMode:(int)fp8 orientation:(int)fp12;	// IMP=0x0003116c
- (void)releaseLockedStatusBarForAnimationForDisplay:(id)fp8;	// IMP=0x0002eef8
- (void)removeStatusBarItem:(id)fp8;	// IMP=0x0002e7a0
- (void)resizeStatusBar:(float)fp8 grow:(BOOL)fp12;	// IMP=0x00030434
- (void)restoreLevels;	// IMP=0x0002eb8c
- (void)setAirPortStrength:(int)fp8;	// IMP=0x0002e8a0
- (void)setAirplaneModeIsEnabled:(BOOL)fp8;	// IMP=0x0002e6c4
- (void)setCloakStatusBar:(BOOL)fp8;	// IMP=0x0002e9b8
- (void)setCustomText:(id)fp8;	// IMP=0x0002e838
- (void)setDimmed:(BOOL)fp8;	// IMP=0x0002dec8
- (void)setIsInCall:(BOOL)fp8;	// IMP=0x0002e350
- (void)setIsLocked:(BOOL)fp8;	// IMP=0x0002de44
- (void)setShowDimmerOverlay:(BOOL)fp8;	// IMP=0x0002dfc8
- (void)setShowsAirPort:(BOOL)fp8;	// IMP=0x0002e904
- (void)setStatusBarMode:(int)fp8 orientation:(int)fp12 duration:(float)fp16 fenceID:(int)fp20 animation:(int)fp24;	// IMP=0x0002f4dc
- (void)setupWindowForSlidingStatusBar:(id)fp8 overStatusBar:(id)fp12;	// IMP=0x0002e124
- (BOOL)showDimmerOverlay;	// IMP=0x0002dfb8
- (BOOL)showsAirPort;	// IMP=0x0002e970
- (BOOL)showsProgress;	// IMP=0x0002ea4c
- (void)signalFormatChanged;	// IMP=0x0002f41c
- (void)significantTimeChange;	// IMP=0x0002f3cc
- (void)statusBarDidFinishAnimatingDown;	// IMP=0x0002eb7c
- (void)statusBarDidFinishAnimatingUp;	// IMP=0x0002ebf4
- (id)statusBarIndicatorNames;	// IMP=0x0002e828
- (int)statusBarMode;	// IMP=0x0002f110
- (int)statusBarOrientation;	// IMP=0x0002f118
- (id)statusBarView;	// IMP=0x0002dd48
- (id)statusBarWindow;	// IMP=0x0002dd28
- (void)switchBackstopFrom:(int)fp8 to:(int)fp12 fromOrientation:(int)fp16 toOrientation:(int)fp20 duration:(float)fp24 fenceID:(int)fp28 animation:(int)fp32;	// IMP=0x000311a0
- (void)tearDownWindowForSlidingStatusBar:(id)fp8 overStatusBar:(id)fp12;	// IMP=0x0002e054
- (BOOL)telephonyControllerCheckedIn;	// IMP=0x0002f4ac
- (id)transitioningStatusBarView;	// IMP=0x0002dd50
- (void)updateClockFormat;	// IMP=0x0002f3fc
- (void)updateProgressVisibility;	// IMP=0x0002ea1c

@end

