/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableArray, UITextLabel;

@interface SBIconList : UIView
{
    NSMutableArray *_iconMatrix;	// 28 = 0x1c
    NSMutableArray *_removedIcons;	// 32 = 0x20
    unsigned int _scattered:1;	// 36 = 0x24
    unsigned int _needsLayout:1;	// 36 = 0x24
    unsigned int _stateIsDirty:1;	// 36 = 0x24
    unsigned int _allowJitter:1;	// 36 = 0x24
    unsigned int _showsInfoText:1;	// 36 = 0x24
    unsigned int _isJittering:1;	// 36 = 0x24
    UITextLabel *_infoTextView;	// 40 = 0x28
}

+ (float)defaultHeight;	// IMP=0x0004c85c
+ (id)sharedInstance;	// IMP=0x0004c780
- (BOOL)canShowInfoText;	// IMP=0x0004ee5c
- (void)clenseRemovedIcons;	// IMP=0x0004e488
- (BOOL)compactIconsInIconList:(BOOL)fp8;	// IMP=0x0004cf04
- (BOOL)containsIcon:(id)fp8;	// IMP=0x0004d2d4
- (void)dealloc;	// IMP=0x0004ca14
- (id)dictionaryRepresentation;	// IMP=0x0004f8a4
- (int)emptySlots;	// IMP=0x0004cdbc
- (BOOL)firstFreeSlotX:(int *)fp8 Y:(int *)fp12;	// IMP=0x0004cc64
- (BOOL)getX:(int *)fp8 Y:(int *)fp12 forIcon:(id)fp16;	// IMP=0x0004d228
- (id)iconAtPoint:(struct CGPoint)fp8 X:(int *)fp16 Y:(int *)fp20;	// IMP=0x0004ebb4
- (id)iconAtPoint:(struct CGPoint)fp8 X:(int *)fp16 Y:(int *)fp20 proposedOrder:(int *)fp24;	// IMP=0x0004ed2c
- (id)iconAtX:(int)fp8 Y:(int)fp12;	// IMP=0x0004cbe8
- (id)icons;	// IMP=0x0004cab4
- (id)initWithDefaultSize;	// IMP=0x0004c984
- (id)initWithDictionaryRepresentation:(id)fp8;	// IMP=0x0004f864
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x0004c790
- (id)insertIcon:(id)fp8 atX:(int)fp12 Y:(int)fp16 moveNow:(BOOL)fp20;	// IMP=0x0004d0e0
- (BOOL)isDock;	// IMP=0x0004f648
- (BOOL)isEmpty;	// IMP=0x0004ce08
- (BOOL)isScattered;	// IMP=0x0004d764
- (float)layoutIconsIfNeeded:(float)fp8 domino:(BOOL)fp12;	// IMP=0x0004e570
- (void)layoutIconsNow;	// IMP=0x0004e534
- (float)leftMarginForIconRowArray:(id)fp8;	// IMP=0x0004e528
- (int)maxIconColumns;	// IMP=0x0004caac
- (int)maxIconRows;	// IMP=0x0004caa4
- (void)moveIconsToWindow;	// IMP=0x0004e2dc
- (void)noteEditingStateChanged;	// IMP=0x0004f56c
- (struct CGPoint)originForIcon:(id)fp8;	// IMP=0x0004eb20
- (struct CGPoint)originForIconAtX:(int)fp8 Y:(int)fp12;	// IMP=0x0004ea48
- (id)placeIcon:(id)fp8 atX:(int)fp12 Y:(int)fp16 animate:(BOOL)fp20 moveNow:(BOOL)fp24;	// IMP=0x0004d8a8
- (void)removeAllIcons;	// IMP=0x0004d608
- (void)removeIcon:(id)fp8 compactEmptyLists:(BOOL)fp12 animate:(BOOL)fp16;	// IMP=0x0004d524
- (void)removeIconAtX:(int)fp8 Y:(int)fp12 compactEmptyLists:(BOOL)fp16 animate:(BOOL)fp20;	// IMP=0x0004d358
- (void)removeInfoAnimation:(id)fp8 didFinish:(id)fp12 view:(id)fp16;	// IMP=0x0004efb4
- (void)resetWithDictionaryRepresentation:(id)fp8;	// IMP=0x0004f650
- (void)scatter:(BOOL)fp8;	// IMP=0x0004dc00
- (void)setIconsNeedLayout;	// IMP=0x0004e22c
- (void)setShowsInfoText:(BOOL)fp8;	// IMP=0x0004efec
- (void)setStateIsDirty:(BOOL)fp8;	// IMP=0x0004f620
- (void)showIconAnimationDidStop:(id)fp8 didFinish:(id)fp12 icon:(id)fp16;	// IMP=0x0004d018
- (void)startJittering;	// IMP=0x0004f3ec
- (BOOL)stateIsDirty;	// IMP=0x0004f638
- (void)stopAnimations;	// IMP=0x0004e054
- (void)stopJittering;	// IMP=0x0004f2a0
- (float)topIconPadding;	// IMP=0x0004e220
- (void)unscatter:(BOOL)fp8 startTime:(double)fp12;	// IMP=0x0004dde8
- (float)verticalIconPadding;	// IMP=0x0004e170
- (int)visibleIconsInRow:(id)fp8;	// IMP=0x0004e23c

@end

