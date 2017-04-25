/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class SBApplication, UIWindow;

@interface SBMiniAlertController : NSObject
{
    SBApplication *_displayShowingAnAlert;	// 4 = 0x4
    UIWindow *_dimmingWindow;	// 8 = 0x8
    unsigned int _dontAskApps:1;	// 12 = 0xc
    unsigned int _reserved:31;	// 12 = 0xc
}

+ (id)sharedInstance;	// IMP=0x00063e54
- (BOOL)canShowAlerts;	// IMP=0x00064908
- (void)cancelHideDimmingWindow;	// IMP=0x00064238
- (void)deactivateAlertItemsWithBundleIdentifier:(id)fp8;	// IMP=0x000643d4
- (id)dimImageForKeyboard:(BOOL)fp8;	// IMP=0x00063ea4
- (void)displayDidDisableMiniAlerts:(id)fp8;	// IMP=0x0006463c
- (id)displayShowingAnAlert;	// IMP=0x00064500
- (void)displayWillDismissMiniAlert:(id)fp8 andShowAnother:(BOOL)fp12;	// IMP=0x00064520
- (void)displayWillShowMiniAlert:(id)fp8;	// IMP=0x00064444
- (void)finishedAnimatingDimWindowOut:(id)fp8 didFinish:(id)fp12;	// IMP=0x000641a8
- (void)hideApplicationMiniAlerts;	// IMP=0x0006477c
- (void)hideDimmingWindow;	// IMP=0x000642c4
- (void)hideDimmingWindowAfterDelay;	// IMP=0x00064280
- (void)noteMiniAlertStateChanged;	// IMP=0x00064800
- (void)setShouldAskApps:(BOOL)fp8;	// IMP=0x00064508
- (void)showApplicationMiniAlertsIfNeeded;	// IMP=0x00064690
- (void)showDimmingWindow;	// IMP=0x00063fb8

@end

