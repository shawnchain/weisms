/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBCallAlertDisplay.h"

@class TPBottomButtonBar, TPCallWaitingButton, TPPushButton;

@interface SBCallWaitingAlertDisplay : SBCallAlertDisplay
{
    TPCallWaitingButton *_ignoreButton;	// 76 = 0x4c
    TPCallWaitingButton *_answerButton;	// 80 = 0x50
    TPPushButton *_answerAndReleaseButton;	// 84 = 0x54
    TPBottomButtonBar *_animatingBottomBar;	// 88 = 0x58
    unsigned int _didRelease:1;	// 92 = 0x5c
    unsigned int _didHeldRelease:1;	// 92 = 0x5c
    unsigned int _setupForThree:1;	// 92 = 0x5c
}

+ (id)_createBottomButtonBarForDisplay:(id)fp8;	// IMP=0x0004a8f4
+ (id)createBottomBarForInstance:(id)fp8;	// IMP=0x00049814
- (void)_addCallWaitingButtons:(BOOL)fp8;	// IMP=0x0004a5c4
- (void)_answerButtonsSwapped;	// IMP=0x00049ed4
- (void)_bottomBarSwitchDone;	// IMP=0x0004a570
- (void)_bottomBarSwitchHalfDone;	// IMP=0x0004a4bc
- (void)_callCountChanged:(id)fp8;	// IMP=0x0004992c
- (void)_callWaitingControlsFaded;	// IMP=0x00049e88
- (void)_setPhoneFlipBackAttribute;	// IMP=0x00049f40
- (id)additionalURLParameter;	// IMP=0x0004a0c0
- (void)answerAndRelease:(id)fp8;	// IMP=0x0004a210
- (void)answerCall:(struct __CTCall *)fp8;	// IMP=0x0004a124
- (void)dealloc;	// IMP=0x00049890
- (void)dismiss;	// IMP=0x0004a050
- (void)ignore;	// IMP=0x00049fd0
- (id)initWithSize:(struct CGSize)fp8;	// IMP=0x000496f4
- (void)lockBarUnlocked:(id)fp8;	// IMP=0x0004a294
- (void)setMiddleContentAlpha:(float)fp8;	// IMP=0x0004a238

@end

