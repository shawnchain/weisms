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

+ (struct CGSize)defaultSize;	// IMP=0x00076184
+ (BOOL)shouldShowDeviceBattery;	// IMP=0x00076254
+ (BOOL)shouldShowHeadsetBattery;	// IMP=0x000762b4
- (void)_batteryAnimationFinished:(id)fp8;	// IMP=0x00077178
- (struct CGPoint)_dualBatteryPositionForBattery:(id)fp8;	// IMP=0x00077410
- (void)_finishedFadeForSwitch:(id)fp8 finished:(BOOL)fp12 context:(id)fp16;	// IMP=0x00076e8c
- (void)_finishedHideForHideToSlide:(id)fp8 finished:(BOOL)fp12 context:(id)fp16;	// IMP=0x0007705c
- (void)_finishedSlideForSlideToReveal:(id)fp8 finished:(BOOL)fp12 context:(id)fp16;	// IMP=0x00076f74
- (struct CGPoint)_singleBatteryPositionForBattery:(id)fp8;	// IMP=0x000772d8
- (void)_slideBattery:(id)fp8 toHideBattery:(id)fp12 animate:(BOOL)fp16;	// IMP=0x00076cec
- (void)_slideBattery:(id)fp8 toShowBattery:(id)fp12 animate:(BOOL)fp16;	// IMP=0x00076b3c
- (void)_switchFromBattery:(id)fp8 toView:(id)fp12 animate:(BOOL)fp16;	// IMP=0x00076998
- (void)_test:(id)fp8;	// IMP=0x000771bc
- (void)addChargingView;	// IMP=0x00076728
- (void)addHeadsetChargingView;	// IMP=0x000768fc
- (id)chargingView;	// IMP=0x000765cc
- (void)dealloc;	// IMP=0x000760f4
- (id)headsetChargingView;	// IMP=0x000767c4
- (void)hideChargingView;	// IMP=0x000767a0
- (void)hideHeadsetChargingView;	// IMP=0x00076974
- (id)initWithFrame:(struct CGRect)fp8 awayView:(id)fp24;	// IMP=0x00075fe8
- (void)updateInterface:(BOOL)fp8;	// IMP=0x00076314

@end

