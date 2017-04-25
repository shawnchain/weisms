/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCalendarDate, NSString;

@interface Alarm : NSObject
{
    unsigned int _alarmHour;	// 4 = 0x4
    unsigned int _alarmMinute;	// 8 = 0x8
    int _alarmSetting;	// 12 = 0xc
    NSString *_alarmSoundIdentifier;	// 16 = 0x10
    NSString *_alarmTitle;	// 20 = 0x14
    NSCalendarDate *_snoozeUntilDate;	// 24 = 0x18
    unsigned int _isActive:1;	// 28 = 0x1c
    unsigned int _repeats:1;	// 28 = 0x1c
    unsigned int _allowsSnooze:1;	// 28 = 0x1c
    unsigned int _dontSendUpdate:1;	// 28 = 0x1c
    unsigned int _dontStopSnoozing:1;	// 28 = 0x1c
    unsigned int _reserved:27;	// 28 = 0x1c
}

- (void)_activeAlertItem;	// IMP=0x00058b98
- (id)_fireDateAfterDate:(id)fp8;	// IMP=0x00058620
- (id)_initWithDictionary:(id)fp8;	// IMP=0x000580b0
- (id)_prefsDictionary;	// IMP=0x000582d0
- (id)_snoozeUntilDate;	// IMP=0x00058a74
- (void)_update;	// IMP=0x00057fe0
- (id)alarmSoundIdentifier;	// IMP=0x00058af0
- (BOOL)alarmTimesEqualTo:(id)fp8;	// IMP=0x00058574
- (id)alarmTitle;	// IMP=0x00058b90
- (BOOL)allowsSnooze;	// IMP=0x00058958
- (int)daySetting;	// IMP=0x00058908
- (void)dealloc;	// IMP=0x00058508
- (id)description;	// IMP=0x00057eec
- (void)fireAlarm;	// IMP=0x00058c20
- (void)getAlarmHour:(unsigned int *)fp8 minute:(unsigned int *)fp12;	// IMP=0x0005860c
- (id)init;	// IMP=0x00058064
- (BOOL)isActive;	// IMP=0x00058870
- (BOOL)isSnoozing;	// IMP=0x00058968
- (BOOL)repeats;	// IMP=0x000588c4
- (void)setActive:(BOOL)fp8;	// IMP=0x0005882c
- (void)setAlarmHour:(unsigned int)fp8 minute:(unsigned int)fp12;	// IMP=0x000585d0
- (void)setAlarmSoundIdentifier:(id)fp8;	// IMP=0x00058a7c
- (void)setAlarmTitle:(id)fp8;	// IMP=0x00058af8
- (void)setAllowsSnooze:(BOOL)fp8;	// IMP=0x00058910
- (void)setDaySetting:(int)fp8;	// IMP=0x000588d4
- (void)setRepeats:(BOOL)fp8;	// IMP=0x0005887c
- (void)startSnoozingFromDate:(id)fp8;	// IMP=0x00058978
- (void)stopSnoozing;	// IMP=0x00058a1c

@end

