/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIProgressIndicator, UIPushButton;

@interface SBInfoBubble : UIView
{
    NSString *_title;	// 28 = 0x1c
    NSString *_string;	// 32 = 0x20
    struct CGRect _titleRect;	// 36 = 0x24
    struct CGRect _stringRect;	// 52 = 0x34
    UIPushButton *_backspace;	// 68 = 0x44
    UIProgressIndicator *_progressIndicator;	// 72 = 0x48
}

- (struct CGRect)_progressRect;	// IMP=0x00046a58
- (void)backspace:(id)fp8;	// IMP=0x0004619c
- (void)dealloc;	// IMP=0x00045f8c
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x0004662c
- (void)highlight:(id)fp8;	// IMP=0x000460fc
- (id)initWithTitle:(id)fp8 string:(id)fp12;	// IMP=0x00045ea8
- (void)resize;	// IMP=0x00046224
- (void)setTitle:(id)fp8;	// IMP=0x000465bc
- (void)setTitle:(id)fp8 string:(id)fp12;	// IMP=0x000464f0
- (void)showBackspace:(BOOL)fp8;	// IMP=0x000467dc
- (void)showProgressIndicator:(BOOL)fp8;	// IMP=0x00046004
- (id)title;	// IMP=0x000465a4
- (void)unhighlight:(id)fp8;	// IMP=0x0004614c

@end

