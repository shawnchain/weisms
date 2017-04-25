/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, NSTimer;

@interface AlarmController : NSObject
{
    NSMutableArray *_alarmList;	// 4 = 0x4
    NSTimer *_alarmTimer;	// 8 = 0x8
    NSMutableArray *_alarmsToFire;	// 12 = 0xc
    unsigned int _readingPrefs:1;	// 16 = 0x10
    NSTimer *_countDownTimer;	// 20 = 0x14
    double _countDownTime;	// 24 = 0x18
    NSString *_countDownTimerSoundIdentifier;	// 32 = 0x20
    struct __CFDate *_alarmWakeupDate;	// 36 = 0x24
    struct __CFDate *_countdownWakeupDate;	// 40 = 0x28
}

+ (id)sharedAlarmController;	// IMP=0x0005dc90
- (void)_alarmChanged:(id)fp8;	// IMP=0x0005df30
- (void)_alarmTimeReached:(id)fp8;	// IMP=0x0005e728
- (void)_countDownTimerFired:(id)fp8;	// IMP=0x0005ea20
- (void)_readPreferences;	// IMP=0x0005dce0
- (void)_resetCountDownTime;	// IMP=0x0005dfb0
- (void)_savePreferences;	// IMP=0x0005ddf4
- (void)_scheduleAlarms;	// IMP=0x0005e338
- (void)_sleepTimerFired:(id)fp8;	// IMP=0x0005eae0
- (void)_wokeFromSleep;	// IMP=0x0005ec30
- (unsigned int)addAlarm:(id)fp8;	// IMP=0x0005e234
- (id)alarms;	// IMP=0x0005e330
- (double)countDownTime;	// IMP=0x0005ec1c
- (id)countDownTimerSoundIdentifier;	// IMP=0x0005ec28
- (void)dealloc;	// IMP=0x0005e140
- (id)init;	// IMP=0x0005dfe8
- (void)removeAlarmAtIndex:(unsigned int)fp8;	// IMP=0x0005e2e4
- (void)setCountDownTime:(double)fp8 withSoundIdentifier:(id)fp16;	// IMP=0x0005e7d4

@end

