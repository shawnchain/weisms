/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class UIImageView;

@interface SBNowPlayingArtView : UIView
{
    UIImageView *_imageView;	// 28 = 0x1c
    UIView *_reflection;	// 32 = 0x20
}

- (id)albumArtImage;	// IMP=0x0003ae14
- (void)dealloc;	// IMP=0x0003adb4
- (void)setAlbumArtImage:(id)fp8 maxSize:(float)fp12;	// IMP=0x0003b044
- (void)setReflectionVisible:(BOOL)fp8 withDuration:(float)fp12;	// IMP=0x0003ae34

@end

