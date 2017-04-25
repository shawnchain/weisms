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

- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x00072348
- (double)autoDismissInterval;	// IMP=0x00072210
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;	// IMP=0x00072380
- (void)dealloc;	// IMP=0x000721b0
- (void)didDeactivate:(BOOL)fp8;	// IMP=0x000724bc
- (void)dismiss;	// IMP=0x00072308
- (BOOL)hasDeactivated;	// IMP=0x000724c8
- (id)initWithTitle:(id)fp8 body:(id)fp12;	// IMP=0x00072130
- (id)lockLabel;	// IMP=0x00072460
- (void)performUnlockAction;	// IMP=0x00072364
- (void)setAutoDismissInterval:(double)fp8;	// IMP=0x0007221c
- (void)setBodyText:(id)fp8;	// IMP=0x00072298
- (void)setTitle:(id)fp8;	// IMP=0x00072228

@end

