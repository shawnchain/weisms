/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBSlidingAlertDisplay.h"

@interface SBSIMLockEntryAlertDisplay : SBSlidingAlertDisplay
{
}

- (id)_pinAttemptsRemainingLabel;	// IMP=0x00067384
- (void)_unlock:(id)fp8;	// IMP=0x00067c24
- (void)alertDisplayWillBecomeVisible;	// IMP=0x00067a90
- (id)failureLabel;	// IMP=0x00067644
- (id)failureTitle;	// IMP=0x00067584
- (id)label;	// IMP=0x0006784c
- (void)passcodeFieldDidAcceptEntry:(id)fp8;	// IMP=0x00067e98
- (void)phonePad:(id)fp8 keyUp:(BOOL)fp12;	// IMP=0x00067d30
- (void)setupCurrentLockAttemptState;	// IMP=0x000679d4
- (void)setupFailureState;	// IMP=0x000676b4
- (void)setupSuccess;	// IMP=0x00067b48
- (void)setupUnlockAttemptState;	// IMP=0x00067484
- (id)titleText;	// IMP=0x0006778c
- (void)unlock;	// IMP=0x00067c74

@end

