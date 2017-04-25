/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@interface VolumeControlView : UIView
{
    float _volume;	// 28 = 0x1c
    int _mode;	// 32 = 0x20
}

+ (struct CGSize)controlSize;	// IMP=0x0003a604
+ (void)loadImages;	// IMP=0x0003a340
- (id)_label;	// IMP=0x0003a7cc
- (BOOL)_showLabel;	// IMP=0x0003a958
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x0003a998
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x0003a664
- (void)setMode:(int)fp8;	// IMP=0x0003a728
- (void)setVolume:(float)fp8 mode:(int)fp12;	// IMP=0x0003a764
- (float)volume;	// IMP=0x0003a7c4

@end

