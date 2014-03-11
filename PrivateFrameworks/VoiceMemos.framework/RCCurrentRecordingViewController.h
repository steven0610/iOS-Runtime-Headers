/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCCurrentRecordingViewControllerDelegate>, RCCurrentRecordingRemoteViewController, UIColor;

@interface RCCurrentRecordingViewController : UIViewController <RCCurrentRecordingViewControllerDelegate> {
    <RCCurrentRecordingViewControllerDelegate> *_delegate;
    BOOL _isDisplayingLockscreenInterface;
    UIColor *_presentationBackgroundColor;
    RCCurrentRecordingRemoteViewController *_remoteViewController;
    BOOL _screenUpdatesDisabled;
    UIColor *_waveformForegroundColor;
}

@property <RCCurrentRecordingViewControllerDelegate> * delegate;

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;

- (void).cxx_destruct;
- (void)_failedToBecomeReadyWithMessage:(id)arg1;
- (void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(BOOL)arg2;
- (void)currentRecordingViewControllerRecordingDidEnd:(id)arg1;
- (id)delegate;
- (void)dismissLockscreenInterface;
- (id)initWithDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertRemoteViewController:(id)arg1;
- (void)presentLockscreenInterfaceWithBackgroundColor:(id)arg1 waveformForegroundColor:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setScreenUpdatesDisabled:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end