/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem
{
    NSString *_title;	// 12 = 0xc
    NSString *_body;	// 16 = 0x10
    double _autoDismissInterval;	// 20 = 0x14
    BOOL _hasDeactivated;	// 28 = 0x1c
}

- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x00074a6c
- (double)autoDismissInterval;	// IMP=0x00074974
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;	// IMP=0x00074aa4
- (void)dealloc;	// IMP=0x00074914
- (void)didDeactivateForReason:(int)fp8;	// IMP=0x00074be0
- (BOOL)hasDeactivated;	// IMP=0x00074bec
- (id)initWithTitle:(id)fp8 body:(id)fp12;	// IMP=0x00074894
- (id)lockLabel;	// IMP=0x00074b84
- (void)performUnlockAction;	// IMP=0x00074a88
- (void)setAutoDismissInterval:(double)fp8;	// IMP=0x00074980
- (void)setBodyText:(id)fp8;	// IMP=0x000749fc
- (void)setTitle:(id)fp8;	// IMP=0x0007498c

@end

