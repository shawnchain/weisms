/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBStatusBarContentView.h"

@class UIProgressIndicator;

@interface SBStatusBarProgressView : SBStatusBarContentView
{
    UIProgressIndicator *_progressIndicator;	// 36 = 0x24
    BOOL _wasLastUsingASlowConnection;	// 40 = 0x28
}

- (void)dataConnectionTypeChanged;	// IMP=0x000777a4
- (void)dealloc;	// IMP=0x00077754
- (id)init;	// IMP=0x000776dc
- (void)progressChanged;	// IMP=0x00077988
- (void)start;	// IMP=0x00077890
- (void)stop;	// IMP=0x00077934

@end

