/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIAlertSheet.h"

@class NSArray;

@interface SBAwayItemsView : UIAlertSheet
{
    NSArray *_displayedItems;	// 104 = 0x68
    float _widestLabel;	// 108 = 0x6c
}

+ (struct __GSFont *)createItemTypeFont;	// IMP=0x00037d68
- (void)dealloc;	// IMP=0x00037d14
- (void)drawItems;	// IMP=0x0003815c
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x00038444
- (BOOL)hasAwayItems;	// IMP=0x00038134
- (id)init;	// IMP=0x00037cb8
- (BOOL)reloadData;	// IMP=0x00037f2c

@end

