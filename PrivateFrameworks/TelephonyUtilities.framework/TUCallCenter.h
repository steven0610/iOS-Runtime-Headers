/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSMutableArray, TUCall;

@interface TUCallCenter : NSObject {
    NSMutableArray *_conferenceParticipantCalls;
    NSMutableArray *_displayedCalls;
    TUCall *_incomingCall;
}

@property(retain) NSMutableArray * conferenceParticipantCalls;
@property(retain) NSMutableArray * displayedCalls;
@property(retain) TUCall * incomingCall;

+ (void)initialize;
+ (BOOL)isFaceTimeProcess;
+ (BOOL)isMobilePhoneProcess;
+ (void)revertSharedAddressBook;
+ (void*)sharedAddressBook;
+ (id)sharedInstance;

- (void)_addActiveCall:(id)arg1;
- (BOOL)_allCallsSupportCallModelForService:(int)arg1;
- (BOOL)_anyCallsSupportCallModelForService:(int)arg1;
- (id)_callControlFailureUserInfoForUserInfo:(id)arg1;
- (id)_callStatusUserInfoForUserInfo:(id)arg1;
- (id)_callerUnavailableUserInfoForCall:(id)arg1 reason:(unsigned int)arg2 error:(int)arg3;
- (id)_currentCalls:(BOOL)arg1;
- (BOOL)_currentCallsSupportCallModelForService:(int)arg1;
- (id)_dialFaceTimeAudioCall:(id)arg1 callID:(int)arg2;
- (id)_dialTelephonyCall:(id)arg1 callID:(int)arg2;
- (void)_handleCallControlFailure:(id)arg1;
- (void)_handleCallEnded:(id)arg1 withReason:(unsigned int)arg2 error:(int)arg3;
- (BOOL)_onlySupportsCallModelForService:(int)arg1;
- (void)_postConferenceParticipantsChanged;
- (void)_postDisplayedCallsChanged;
- (void)_removeActiveCall:(id)arg1;
- (void)_resetState;
- (void)_setActiveCalls:(id)arg1;
- (void)_setConferenceParticipants:(id)arg1;
- (void)_setIncomingCall:(id)arg1;
- (BOOL)_supportsCallModelForService:(int)arg1;
- (void)_updateActiveCalls:(id)arg1;
- (void)_updateCallCount:(id)arg1 force:(BOOL)arg2;
- (int)ambiguityState;
- (void)answerCall:(id)arg1;
- (id)callForCTCall:(struct __CTCall { }*)arg1;
- (id)callForChat:(id)arg1;
- (id)callWithStatus:(int)arg1;
- (BOOL)canMergeCalls;
- (BOOL)canTakeCallsPrivate;
- (id)conferenceCall;
- (id)conferenceParticipantCalls;
- (void)createdOutgoingIMAVChat:(id)arg1;
- (int)currentCallCount;
- (id)currentCalls;
- (void)daemonConnected:(id)arg1;
- (void)dealloc;
- (id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3;
- (id)dial:(id)arg1 service:(int)arg2;
- (id)dialEmergency:(id)arg1;
- (id)dialVoicemail;
- (void)disconnectAllCalls;
- (void)disconnectCall:(id)arg1 withReason:(int)arg2;
- (void)disconnectCall:(id)arg1;
- (void)disconnectCurrentCallAndActivateHeld;
- (id)displayedCall;
- (id)displayedCallFromCalls:(id)arg1;
- (id)displayedCalls;
- (id)displayedCallsNotIncludingIncomingCall;
- (BOOL)emergencyCallBackModeIsActive;
- (void)endActiveAndAnswerCall:(id)arg1;
- (void)endEmergencyCallBackMode;
- (void)endHeldAndAnswerCall:(id)arg1;
- (void)forceCallActive:(id)arg1;
- (void)forceCallIntoConference:(id)arg1;
- (void)forceCallOutOfConference:(id)arg1;
- (void)forceDisconnectOfCall:(id)arg1;
- (void)forceUpdateOfCallList;
- (void)handleCallFailed:(id)arg1;
- (void)handleCallStatusChanged:(id)arg1 userInfo:(id)arg2;
- (void)handleCallStatusChanged:(id)arg1;
- (void)handleCallerIDChanged:(id)arg1;
- (void)handleCallerUnavailableForCall:(id)arg1 reason:(unsigned int)arg2 error:(int)arg3;
- (void)handleChatInvitationSent:(id)arg1;
- (void)handleChatStateChanged:(id)arg1;
- (void)handleModelStateChanged:(id)arg1;
- (BOOL)inCall;
- (BOOL)inOutgoingCall;
- (id)incomingCall;
- (id)init;
- (void)invitedToIMAVChat:(id)arg1;
- (BOOL)isAddCallAllowed;
- (BOOL)isAmbiguous;
- (BOOL)isEndAndAnswerAllowed;
- (BOOL)isHardPauseAvailable;
- (BOOL)isHoldAllowed;
- (BOOL)isHoldAndAnswerAllowed;
- (BOOL)isMergeable;
- (BOOL)isMuted;
- (BOOL)isSwappable;
- (BOOL)isTTY;
- (BOOL)isTakingCallsPrivateAllowed;
- (BOOL)justAnIncomingCallExists;
- (void)notifyFaceTimeAudioCallDealloced;
- (void)notifyTelephonyCallDealloced;
- (id)pickableRoutes;
- (id)pickableRoutesForNonTTY;
- (id)pickableRoutesForTTY;
- (void)resumeCall:(id)arg1;
- (void)resumeCallChangeNotifications;
- (void)setConferenceParticipantCalls:(id)arg1;
- (void)setDisplayedCalls:(id)arg1;
- (void)setIncomingCall:(id)arg1;
- (BOOL)setMuted:(BOOL)arg1;
- (id)sourceAccount;
- (BOOL)supportsFaceTimeAudioCalls;
- (BOOL)supportsTelephonyCalls;
- (void)suspendCallChangeNotifications;

@end