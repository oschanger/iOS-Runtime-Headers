/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertView, NSTimer, NSArray;

@interface UIDictationController : NSObject  {
    NSArray *_availableLanguages;
    NSTimer *_recordingLimitTimer;
    void *_callCenterFrameworkFileHandle;
    id _callCenter;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    BOOL _disabledDueToTelephonyActivity;
    UIAlertView *_dictationAvailableSoonAlert;
    BOOL dictationStartedFromGesture;
}

@property BOOL dictationStartedFromGesture;

+ (id)activeInstance;
+ (id)sharedInstance;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(BOOL)arg2;
+ (id)serializedInterpretationFromTokens:(id)arg1;
+ (void)enableGestureHandlerIfNecessary;
+ (void)logCorrectionStatistics;
+ (void)disableGestureHandler;
+ (BOOL)shouldEnableGestureHandler;
+ (void)networkReachableCallback;
+ (void)applicationWillResignActive;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidChangeStatusBarFrame;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)updateLandingView;
+ (BOOL)isRunning;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (id)prunedDictationResultForSingleLineEditor:(id)arg1;
+ (id)inputModeNameForDictation;
+ (void)preheatIfNecessary;
+ (void)keyboardDidSetDelegate;
+ (void)keyboardDidSetInputMode;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (id)serializedDictationPhrases:(id)arg1;
+ (void)willEndEditingInTextView:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizeSpeechPhrases:(id)arg2 correctionIdentifier:(id)arg3;
- (void)errorAnimationDidFinish;
- (float)normalizedAudioLevel;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (void)startRecordingLimitTimer;
- (void)startConnection;
- (void)cancelRecordingLimitTimer;
- (id)selectedTextForInputDelegate:(id)arg1;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (float)audioLevel;
- (id)assistantCompatibleLanguageCodeForLanguage:(id)arg1 region:(id)arg2;
- (BOOL)disabledDueToTelephonyActivity;
- (void)enableProximity;
- (void)setDictationStartedFromGesture:(BOOL)arg1;
- (void)stopDictation;
- (BOOL)dictationStartedFromGesture;
- (void)reenableAutorotation;
- (void)disableAutorotation;
- (id)inputModeThatInvokedDictation;
- (BOOL)dictationEnabled;
- (id)_connection;
- (BOOL)supportsInputMode:(id)arg1 error:(id*)arg2;
- (void)startDictation;
- (void)cancelDictation;
- (void)setState:(int)arg1;
- (int)state;
- (void)proximityStateChanged:(id)arg1;

@end