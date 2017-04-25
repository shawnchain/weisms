/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIImageView.h"

@interface SBWiFiSignalStrength : UIImageView
{
    int _bars;	// 52 = 0x34
    int _rawStrength;	// 56 = 0x38
    BOOL _hilited;	// 60 = 0x3c
    BOOL _selected;	// 61 = 0x3d
    BOOL _secure;	// 62 = 0x3e
    BOOL _joining;	// 63 = 0x3f
    UIImageView *_icon;	// 64 = 0x40
}

+ (void)hideSpinner;	// IMP=0x00072a04
- (void)dealloc;	// IMP=0x00073088
- (void)hide;	// IMP=0x00073478
- (BOOL)hilited;	// IMP=0x000734dc
- (id)initWithFrame:(struct CGRect)fp8 inView:(id)fp24;	// IMP=0x00072a6c
- (BOOL)joining;	// IMP=0x00073140
- (BOOL)secure;	// IMP=0x00073518
- (BOOL)selected;	// IMP=0x00073470
- (void)setHilited:(BOOL)fp8;	// IMP=0x000734e4
- (void)setJoining:(BOOL)fp8;	// IMP=0x00073148
- (void)setSecure:(BOOL)fp8;	// IMP=0x00073520
- (void)setSelected:(BOOL)fp8;	// IMP=0x000734a8
- (void)setSpinnerHilited:(BOOL)fp8;	// IMP=0x00072a38
- (void)updateImage;	// IMP=0x00073554
- (void)updateStrength:(id)fp8;	// IMP=0x000732c4

@end

