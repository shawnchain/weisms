/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBStatusBarContentView.h"

@class NSString, NSTimer;

@interface SBStatusBarInCallView : SBStatusBarContentView
{
    double _inCallDuration;	// 36 = 0x24
    NSString *_durationPreamble;	// 44 = 0x2c
    struct CGSize _durationPreambleSize;	// 48 = 0x30
    struct __GSFont *_font;	// 56 = 0x38
    NSTimer *_durationTimer;	// 60 = 0x3c
}

- (void)dealloc;	// IMP=0x00048978
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x00048ae4
- (id)init;	// IMP=0x000488d8
- (void)start;	// IMP=0x00048a04
- (void)stop;	// IMP=0x00048aa4

@end

