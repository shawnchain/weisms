/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBWiFiPasswordAlertItem : SBAlertItem
{
    id _delegate;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
}

- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x0006a7cc
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;	// IMP=0x0006a8dc
- (void)dealloc;	// IMP=0x0006a690
- (void)dismiss;	// IMP=0x0006a740
- (id)initWithNetworkName:(id)fp8;	// IMP=0x0006a62c
- (void)returnKeyPressed:(id)fp8;	// IMP=0x0006a89c
- (void)setDelegate:(id)fp8;	// IMP=0x0006a6e4

@end

