/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBSlidingAlertDisplay.h"

@interface SBSIMLockEntryAlertDisplay : SBSlidingAlertDisplay
{
}

- (id)_pinAttemptsRemainingLabel;	// IMP=0x00061fe4
- (void)_unlock:(id)fp8;	// IMP=0x00062884
- (void)alertDisplayWillBecomeVisible;	// IMP=0x000626f0
- (id)failureLabel;	// IMP=0x000622a4
- (id)failureTitle;	// IMP=0x000621e4
- (id)label;	// IMP=0x000624ac
- (void)passcodeFieldDidAcceptEntry:(id)fp8;	// IMP=0x00062af8
- (void)phonePad:(id)fp8 keyUp:(BOOL)fp12;	// IMP=0x00062990
- (void)setupCurrentLockAttemptState;	// IMP=0x00062634
- (void)setupFailureState;	// IMP=0x00062314
- (void)setupSuccess;	// IMP=0x000627a8
- (void)setupUnlockAttemptState;	// IMP=0x000620e4
- (id)titleText;	// IMP=0x000623ec
- (void)unlock;	// IMP=0x000628d4

@end

