/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@interface SBSMSAlertItem : SBAlertItem
{
    struct __CTSMSMessage *_message;	// 12 = 0xc
    int _alignment;	// 16 = 0x10
    BOOL _alignmentHasBeenSet;	// 20 = 0x14
    BOOL _displayingEntireMessage;	// 21 = 0x15
}

+ (void)prefsChanged;	// IMP=0x00068c2c
- (void)_deactivateAllTaggedSMSAlertItems;	// IMP=0x000686a0
- (void)_markReadIfDisplayingEntireMessage;	// IMP=0x00068b48
- (void)_playMessageReceived;	// IMP=0x00068844
- (BOOL)_showSMSPreviewWithPasscodeEnabled;	// IMP=0x00068c40
- (void)_tag;	// IMP=0x00068590
- (void)_untag;	// IMP=0x00068660
- (id)address;	// IMP=0x00068904
- (id)alertSheet;	// IMP=0x00068a60
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x00068b94
- (int)bodyTextAlignmentForAlertSheet:(id)fp8 displayedLineCount:(int)fp12;	// IMP=0x00068be4
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;	// IMP=0x00068cb4
- (void)dealloc;	// IMP=0x00068540
- (void)didActivate;	// IMP=0x000687b8
- (void)didDeactivateForReason:(int)fp8;	// IMP=0x000687e0
- (id)lockLabel;	// IMP=0x000691d8
- (id)messageText;	// IMP=0x00068940
- (void)performUnlockAction;	// IMP=0x00068c10
- (void)reply;	// IMP=0x0006897c
- (void)setMessage:(struct __CTSMSMessage *)fp8;	// IMP=0x000687fc
- (BOOL)shouldShowInEmergencyCall;	// IMP=0x0006923c
- (void)willActivate;	// IMP=0x0006879c
- (void)willPresentAlertSheet:(id)fp8;	// IMP=0x000688d0
- (BOOL)willShowInAwayItems;	// IMP=0x00069234

@end

