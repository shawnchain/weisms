/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface SBVODAlarm : NSObject
{
    NSString *_title;	// 4 = 0x4
    NSString *_path;	// 8 = 0x8
    NSDictionary *_rentalInfo;	// 12 = 0xc
    unsigned int _loadingRentalInfo:1;	// 16 = 0x10
    unsigned int _watched:1;	// 16 = 0x10
}

+ (void)_rentalInfoThread;	// IMP=0x0008f3d8
+ (void)cancelPendingLoads;	// IMP=0x0008eb9c
- (id)_dateWithStartDate:(id)fp8 duration:(id)fp12;	// IMP=0x0008f140
- (id)_rentalInfo;	// IMP=0x0008f1e0
- (void)_setRentalInfo:(id)fp8;	// IMP=0x0008f384
- (int)compare:(id)fp8;	// IMP=0x0008ebfc
- (void)dealloc;	// IMP=0x0008eb20
- (id)expirationDate;	// IMP=0x0008ed0c
- (BOOL)hasFireDateSinceDate:(id)fp8;	// IMP=0x0008eef8
- (BOOL)hasLoaded;	// IMP=0x0008ee2c
- (id)initWithDictionary:(id)fp8;	// IMP=0x0008ea38
- (BOOL)isExpired;	// IMP=0x0008ee50
- (id)nextFireDate;	// IMP=0x0008f058
- (id)path;	// IMP=0x0008f130
- (BOOL)rentalHasBeenWatched;	// IMP=0x0008eee8
- (id)title;	// IMP=0x0008f138

@end

