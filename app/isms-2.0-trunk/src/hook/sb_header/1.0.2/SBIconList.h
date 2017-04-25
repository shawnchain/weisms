/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, SBApplicationIcon, SBUIController, TPLCDTextView;

@interface SBIconList : UIView
{
    NSMutableDictionary *_allAppIcons;	// 28 = 0x1c
    NSMutableArray *_displayedIcons;	// 32 = 0x20
    NSMutableDictionary *_accessoryIcons;	// 36 = 0x24
    NSMutableArray *_buttonBarIcons;	// 40 = 0x28
    NSMutableArray *_hiddenIconTags;	// 44 = 0x2c
    NSMutableArray *_visibleIconTags;	// 48 = 0x30
    NSMutableArray *_duplicateIcons;	// 52 = 0x34
    SBUIController *_uiController;	// 56 = 0x38
    NSMutableArray *_accessoryIconsToAdd;	// 60 = 0x3c
    NSMutableArray *_accessoryIconsToRemove;	// 64 = 0x40
    SBApplicationIcon *_pendingIcon;	// 68 = 0x44
    unsigned int _scattered:1;	// 72 = 0x48
    NSMutableDictionary *_displayDefinitions;	// 76 = 0x4c
    TPLCDTextView *_idleText;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x00045c6c
- (void)_addItemsToIconList:(id)fp8 fromPath:(id)fp12 withTags:(id)fp16;	// IMP=0x0004645c
- (BOOL)_shouldShowIcon:(id)fp8;	// IMP=0x00046384
- (id)applicationIconForQualfiedBundleID:(id)fp8;	// IMP=0x00047a10
- (void)attemptPendingLaunch;	// IMP=0x0004781c
- (id)buttonBarIcons;	// IMP=0x00047128
- (void)changeVisibilityOfIconsWithVisibleTags:(id)fp8 hiddenTags:(id)fp12;	// IMP=0x00046244
- (void)clickedIcon:(id)fp8;	// IMP=0x00047978
- (void)dealloc;	// IMP=0x00045db8
- (id)displayOrder;	// IMP=0x00046b00
- (BOOL)hasLaunchPending;	// IMP=0x00047900
- (void)iconVisibilityChanged;	// IMP=0x00046d18
- (id)initWithSize:(struct CGSize)fp8;	// IMP=0x00045c7c
- (BOOL)isScattered;	// IMP=0x000472d8
- (void)layoutIcons;	// IMP=0x00047130
- (void)lcdTextViewCompletedScroll:(id)fp8;	// IMP=0x00046208
- (void)loadAccessoryIcons;	// IMP=0x00046a34
- (void)loadAllIcons;	// IMP=0x00046fdc
- (void)loadSectionDefinitions:(id)fp8 sectionIcons:(id)fp12 allIcons:(id)fp16;	// IMP=0x00046c04
- (struct CGPoint)originForIcon:(id)fp8;	// IMP=0x00047a30
- (void)pendLaunchOfIcon:(id)fp8;	// IMP=0x00047910
- (void)removeAccessory:(id)fp8;	// IMP=0x00047d00
- (void)removeAccessoryAnimationDidStop:(id)fp8;	// IMP=0x00047c74
- (void)scatter:(BOOL)fp8;	// IMP=0x00047434
- (void)setIdleModeText:(id)fp8;	// IMP=0x00045ea0
- (void)setUIController:(id)fp8;	// IMP=0x00045e98
- (void)showAccessory:(id)fp8;	// IMP=0x00047e90
- (void)showAccessoryAnimationDidStop:(id)fp8;	// IMP=0x00047b2c
- (void)stopAnimations;	// IMP=0x000477a0
- (void)unscatter:(BOOL)fp8 startTime:(double)fp12;	// IMP=0x00047578

@end

