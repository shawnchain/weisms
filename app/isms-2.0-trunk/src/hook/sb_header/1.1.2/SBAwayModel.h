/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, SBAwayController;

@interface SBAwayModel : NSObject
{
    SBAwayController *_controller;	// 4 = 0x4
    NSMutableArray *_standardVMs;	// 8 = 0x8
    NSMutableArray *_calls;	// 12 = 0xc
    NSMutableArray *_SMSs;	// 16 = 0x10
    NSMutableArray *_otherAwayItems;	// 20 = 0x14
}

- (void)addCall:(struct __CTCall *)fp8;	// IMP=0x00027298
- (void)addOtherAwayItem:(id)fp8;	// IMP=0x00027234
- (void)addSMSMessage:(struct __CTSMSMessage *)fp8;	// IMP=0x0002731c
- (void)dealloc;	// IMP=0x00027118
- (id)initWithController:(id)fp8;	// IMP=0x000270d0
- (void)markAwayTime;	// IMP=0x00027190
- (id)missedItems;	// IMP=0x00027fdc
- (void)populateWithMissedCalls:(id)fp8;	// IMP=0x00027634
- (void)populateWithMissedEnhancedVoiceMails:(id)fp8;	// IMP=0x00027dfc
- (void)populateWithMissedSMS:(id)fp8;	// IMP=0x00027a50
- (void)setStandardVoiceMailCount:(int)fp8;	// IMP=0x000281f4
- (int)uncoalescedMissedItemCount;	// IMP=0x0002810c

@end

