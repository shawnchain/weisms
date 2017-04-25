/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIView.h"

@class SBBatteryChargingView;

@interface SBAwayChargingView : UIView
{
    SBBatteryChargingView *_chargingView;	// 28 = 0x1c
    SBBatteryChargingView *_headsetChargingView;	// 32 = 0x20
    unsigned int _animatingBatteries:1;	// 36 = 0x24
    unsigned int _updateAfterAnimation:1;	// 36 = 0x24
    unsigned int _showingDeviceBattery:1;	// 36 = 0x24
    unsigned int _showingHeadsetBattery:1;	// 36 = 0x24
}

+ (struct CGSize)defaultSize;	// IMP=0x00077450
+ (BOOL)shouldShowDeviceBattery;	// IMP=0x00077520
+ (BOOL)shouldShowHeadsetBattery;	// IMP=0x00077580
- (void)_batteryAnimationFinished:(id)fp8;	// IMP=0x00078444
- (struct CGPoint)_dualBatteryPositionForBattery:(id)fp8;	// IMP=0x000786dc
- (void)_finishedFadeForSwitch:(id)fp8 finished:(BOOL)fp12 context:(id)fp16;	// IMP=0x00078158
- (void)_finishedHideForHideToSlide:(id)fp8 finished:(BOOL)fp12 context:(id)fp16;	// IMP=0x00078328
- (void)_finishedSlideForSlideToReveal:(id)fp8 finished:(BOOL)fp12 context:(id)fp16;	// IMP=0x00078240
- (struct CGPoint)_singleBatteryPositionForBattery:(id)fp8;	// IMP=0x000785a4
- (void)_slideBattery:(id)fp8 toHideBattery:(id)fp12 animate:(BOOL)fp16;	// IMP=0x00077fb8
- (void)_slideBattery:(id)fp8 toShowBattery:(id)fp12 animate:(BOOL)fp16;	// IMP=0x00077e08
- (void)_switchFromBattery:(id)fp8 toView:(id)fp12 animate:(BOOL)fp16;	// IMP=0x00077c64
- (void)_test:(id)fp8;	// IMP=0x00078488
- (void)addChargingView;	// IMP=0x000779f4
- (void)addHeadsetChargingView;	// IMP=0x00077bc8
- (id)chargingView;	// IMP=0x00077898
- (void)dealloc;	// IMP=0x000773c0
- (id)headsetChargingView;	// IMP=0x00077a90
- (void)hideChargingView;	// IMP=0x00077a6c
- (void)hideHeadsetChargingView;	// IMP=0x00077c40
- (id)initWithFrame:(struct CGRect)fp8 awayView:(id)fp24;	// IMP=0x000772b4
- (void)updateInterface:(BOOL)fp8;	// IMP=0x000775e0

@end

