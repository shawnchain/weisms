/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBPhoneAlertItem.h"

@interface SBNetworkReselectionAlertItem : SBPhoneAlertItem
{
}

+ (id)currentInstance;	// IMP=0x0006b4a8
+ (BOOL)hasCurrentInstance;	// IMP=0x0006b4f8
- (void)_showPrefs;	// IMP=0x0006b510
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x0006b6f8
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;	// IMP=0x0006b600
- (id)init;	// IMP=0x0006b3f4
- (id)lockLabel;	// IMP=0x0006b570
- (void)performUnlockAction;	// IMP=0x0006b5cc
- (void)willDeactivate:(BOOL)fp8;	// IMP=0x0006b734

@end

