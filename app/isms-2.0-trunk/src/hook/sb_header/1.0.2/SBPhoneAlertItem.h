/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem
{
    NSString *_bodyText;	// 12 = 0xc
    NSString *_title;	// 16 = 0x10
}

- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x00065e7c
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;	// IMP=0x00065d5c
- (void)dealloc;	// IMP=0x00065cfc
- (void)dismiss;	// IMP=0x00065e3c
- (id)initWithTitle:(id)fp8 bodyText:(id)fp12;	// IMP=0x00065c7c

@end

