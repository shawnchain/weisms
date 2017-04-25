/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBTelephonyManager : NSObject
{
    NSString *_operatorName;	// 4 = 0x4
}

+ (id)sharedTelephonyManager;	// IMP=0x0002450c
- (BOOL)EDGEIsAvailable;	// IMP=0x000267f0
- (id)SIMStatus;	// IMP=0x00027208
- (void)_cancelFakeService;	// IMP=0x00026d84
- (void)_delayedAudioResume;	// IMP=0x000250dc
- (void)_headphoneChanged:(id)fp8;	// IMP=0x00026b58
- (void)_mainThreadDaemonRestart:(struct __CFDictionary *)fp8;	// IMP=0x00025000
- (void)_reallySetOperatorName:(id)fp8;	// IMP=0x00026f64
- (void)_resetCTMMode;	// IMP=0x00026b1c
- (struct __CTServerConnection *)_serverConnection;	// IMP=0x00024560
- (void)_setRegistrationStatus:(int)fp8;	// IMP=0x00026cac
- (void)_startFakeServiceIfNecessary;	// IMP=0x00026dc8
- (void)_stopFakeService;	// IMP=0x00026e58
- (void)_updateRegistrationNow;	// IMP=0x00026d48
- (void)_updateState;	// IMP=0x000247f4
- (void)_whackGain:(id)fp8;	// IMP=0x000249c0
- (BOOL)activeCallExists;	// IMP=0x00025d74
- (id)allMissedCallsAfterRowID:(long long)fp8;	// IMP=0x00025c1c
- (id)allUnreadSMSAfterRowID:(long long)fp8;	// IMP=0x00025c54
- (void)answerIncomingCall;	// IMP=0x00025ec0
- (void)answerIncomingCallEndingOthers;	// IMP=0x00025f50
- (int)callCount;	// IMP=0x00025d64
- (void)checkForRegistrationSoon;	// IMP=0x000270fc
- (void)configureForTTY:(BOOL)fp8;	// IMP=0x000268cc
- (void)copyICCID:(id *)fp8 IMEI:(id *)fp12;	// IMP=0x00026840
- (int)dataConnectionType;	// IMP=0x000267e0
- (void)disconnectAllCalls;	// IMP=0x0002606c
- (void)disconnectCall;	// IMP=0x00026094
- (void)disconnectCallAndActivateHeld;	// IMP=0x0002619c
- (void)disconnectIncomingCall;	// IMP=0x00025e9c
- (id)displayForOutgoingCallURL:(id)fp8;	// IMP=0x00024a3c
- (void)dumpBasebandState:(id)fp8;	// IMP=0x00026220
- (long long)getRowIDOfLastCallInsert;	// IMP=0x00025c0c
- (long long)getRowIDOfLastSMSInsert;	// IMP=0x00025c44
- (BOOL)heldCallExists;	// IMP=0x00025d8c
- (BOOL)inCall;	// IMP=0x00025e5c
- (double)inCallDuration;	// IMP=0x00024654
- (BOOL)inCallUsingReceiver;	// IMP=0x00025dd4
- (BOOL)incomingCallExists;	// IMP=0x00025da4
- (id)init;	// IMP=0x0002760c
- (BOOL)isUsingDataConnection;	// IMP=0x00026808
- (BOOL)isUsingWiFiConnection;	// IMP=0x00026824
- (void)markMessageAsRead:(struct __CTSMSMessage *)fp8;	// IMP=0x00025c7c
- (id)operatorName;	// IMP=0x00027084
- (BOOL)outgoingCallExists;	// IMP=0x00025dbc
- (void)powerOffRadio;	// IMP=0x00026294
- (int)registrationStatus;	// IMP=0x000270ec
- (void)setOperatorName:(id)fp8;	// IMP=0x00027008
- (BOOL)shouldPromptForTTY;	// IMP=0x00026934
- (void)swapCalls;	// IMP=0x00026034
- (id)ttyTitle;	// IMP=0x00026a0c
- (void)unmute;	// IMP=0x000261ac
- (void)updateAirplaneMode;	// IMP=0x0002473c
- (void)updateCalls;	// IMP=0x00025978
- (void)updateLocale;	// IMP=0x000248c4
- (void)updateSMSBadges;	// IMP=0x00025cb0
- (void)updateSpringBoard;	// IMP=0x00027b80
- (void)updateTTYIndicator;	// IMP=0x000245cc

@end

