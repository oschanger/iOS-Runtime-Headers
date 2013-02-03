/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSTimer, UITextInputTraits, <UIKeyboardRivenCenterView>, UIDelayedAction, <UIKeyboardImplGeometryDelegate>, UIKeyboardLayout, UIView, UIKeyboardCandidate, NSArray, UITextInputArrowKeyHistory, UIKeyboardInputManager, <UIKeyboardCandidateList>, NSObject<UIKeyboardRecording><UIApplicationEventRecording>, NSString, NSMutableDictionary, <UIKeyInput>, UIAutocorrectInlinePrompt;

@interface UIKeyboardImpl : UIView {
    struct { 
        NSTimer *timer; 
        struct __GSEvent {} *eventToRepeat; 
        BOOL firstRepeat; 
    struct CGPoint { 
        float x; 
        float y; 
    <UIKeyboardRivenCenterView> *_centerView;
    BOOL m_acceptingCandidate;
    BOOL m_anotherTouchWaiting;
    UITextInputArrowKeyHistory *m_arrowKeyHistory;
    NSUInteger m_autoDeleteCount;
    double m_autoDeleteInterval;
    double m_autoDeleteLastDelete;
    BOOL m_autoDeleteOK;
    unsigned short m_autoDeleteShiftCharacter;
    NSTimer *m_autoDeleteTimer;
    BOOL m_autocapitalizationPreference;
    NSMutableDictionary *m_autocorrectHistoryLists;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIDelayedAction *m_autocorrectPromptAction;
    BOOL m_autocorrectPromptTimerFired;
    UIKeyboardCandidate *m_autocorrection;
    BOOL m_autocorrectionPreference;
    BOOL m_automaticMinimizationEnabled;
    BOOL m_autoshift;
    <UIKeyboardCandidateList> *m_candidateList;
    NSArray *m_candidates;
    BOOL m_caretShowingNow;
    <UIKeyboardRivenCenterView> *m_centerView;
    NSInteger m_changeCount;
    BOOL m_changeNotificationDisabled;
    double m_changeTime;
    id m_changedDelegate;
    BOOL m_changingGeometryWithSameOrientation;
    BOOL m_clientVariantSupportEnabled;
    BOOL m_clientVariantSupportEnabledEver;
    NSInteger m_currentDirection;
    BOOL m_currentInputModeChanged;
    UITextInputTraits *m_defaultTraits;
    <UIKeyInput> *m_delegate;
    BOOL m_delegateAdoptsKeyboardInput;
    BOOL m_delegateAdoptsTextInput;
    BOOL m_delegateAdoptsTextInputPrivate;
    BOOL m_delegateIsSMSTextView;
    BOOL m_delegateRequiresKeyEvents;
    BOOL m_doubleSpacePeriodPreference;
    double m_doubleSpacePeriodTime;
    <UIKeyboardImplGeometryDelegate> *m_geometryDelegate;
    BOOL m_hardwareKeyboardAttached;
    } m_hardwareRepeat;
    BOOL m_inDealloc;
    BOOL m_inHardwareKeyboardMode;
    BOOL m_initializationDone;
    UIKeyboardInputManager *m_inputManager;
    NSString *m_inputModeLastChosen;
    } m_inputPoint;
    BOOL m_insideKeyInputDelegateCall;
    NSMutableDictionary *m_keyedLayouts;
    NSMutableArray *m_keyplaneNamesCurrentDelegate;
    NSMutableArray *m_keyplaneNamesPreviousDelegate;
    UIView *m_languageIndicator;
    BOOL m_lastUsedInputModeChangedBySystem;
    UIKeyboardLayout *m_layout;
    BOOL m_longPress;
    UIDelayedAction *m_longPressAction;
    UIView *m_markedTextOverlay;
    struct __CFRunLoopObserver { } *m_observer;
    NSInteger m_orientation;
    NSInteger m_originalOrientation;
    BOOL m_performDecomposingDelete;
    BOOL m_performanceLoggingEnabled;
    float m_persistentOffset;
    BOOL m_preRotateShift;
    BOOL m_preRotateShiftLocked;
    BOOL m_preferencesNeedSynchronization;
    NSString *m_previousInputString;
    NSMutableArray *m_recentUnacceptedAutocorrections;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    BOOL m_replacingWord;
    NSInteger m_returnKeyState;
    BOOL m_rivenCenterDismissPreference;
    BOOL m_rivenCenterViewPreference;
    BOOL m_rivenMiniPreference;
    BOOL m_rivenPopupHammersPreference;
    BOOL m_rivenPreference;
    NSUInteger m_rivenSeparationStyle;
    BOOL m_rivenTranslationPreference;
    NSUInteger m_rivenVisualStyle;
    BOOL m_selecting;
    BOOL m_settingShift;
    BOOL m_shift;
    BOOL m_shiftHeldDownNeedsUpdated;
    BOOL m_shiftLocked;
    BOOL m_shiftLockedEnabled;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shouldChargeKeys;
    BOOL m_shouldSkipCandidateSelection;
    BOOL m_shouldUpdateCacheOnInputModesChange;
    BOOL m_showInputModeIndicator;
    BOOL m_showingCandidateBar;
    float m_splitProgress;
    BOOL m_suppressGeometryChangeNotifications;
    BOOL m_suppressUpdateCandidateView;
    BOOL m_swipeToTabPreference;
    UIDelayedAction *m_synchronizePreferencesAction;
    BOOL m_syntheticInput;
    BOOL m_textInputChangesIgnored;
    NSUInteger m_textInputChangingCount;
    BOOL m_textInputChangingText;
    UITextInputTraits *m_traits;
    BOOL m_updatingPreferences;
    BOOL m_userChangedSelection;
    BOOL m_zoomEnabled;
    BOOL m_zoomed;
}

@property(getter=isZoomed) BOOL zoomed; /* unknown property attribute: SsetZoomed: */
@property(retain) UITextInputArrowKeyHistory *arrowKeyHistory;
@property(retain) <UIKeyboardRivenCenterView> *centerView;
@property(retain) UIResponder<UIKeyInput> *delegate;
@property(readonly) UIResponder *delegateAsResponder;
@property <UIKeyboardImplGeometryDelegate> *geometryDelegate;
@property(readonly) UIResponder<UITextInput> *inputDelegate;
@property(retain) UIKeyboardInputManager *inputManager;
@property(readonly) <UIKeyboardInput> *legacyInputDelegate;
@property(readonly) UIResponder<UITextInputPrivate> *privateInputDelegate;
@property(retain) <UIKeyboardRecording><UIApplicationEventRecording> *recorder;
@property(retain) id changedDelegate;
@property(retain) id changedDelegate;
@property BOOL currentInputModeChanged;
@property(getter=isInHardwareKeyboardMode) BOOL inHardwareKeyboardMode;
@property CGPoint persistentOffset;
@property BOOL preferencesNeedSynchronization;
@property(readonly) BOOL rivenCenterDismissPreference;
@property(readonly) BOOL rivenCenterViewPreference;
@property(readonly) BOOL rivenMiniPreference;
@property(readonly) BOOL rivenPopupHammersPreference;
@property(readonly) BOOL rivenPreference;
@property(readonly) NSUInteger rivenSeparationStyle;
@property(readonly) BOOL rivenTranslationPreference;
@property(readonly) NSUInteger rivenVisualStyle;
@property BOOL shouldSkipCandidateSelection;
@property BOOL showInputModeIndicator;
@property float splitProgress;
@property(getter=isZoomEnabled,readonly) BOOL zoomEnabled;

+ (void)_clearHardwareKeyboardMinimizationPreference;
+ (void)_initializeSafeCategory;
+ (id)activeInstance;
+ (float)additionalInstanceHeight;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (void)applicationWillSuspend:(id)arg1;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(NSInteger)arg1;
+ (void)defaultsDidChange;
+ (void)handleSpecificHardwareKeyboard:(id)arg1;
+ (void)hardwareKeyboardAvailabilityChanged;
+ (void)markElapsed:(id)arg1;
+ (void)markPerformance:(id)arg1;
+ (void)newCarrierChange;
+ (id)normalizedInputModesFromPreference;
+ (NSInteger)orientationForSize:(struct CGSize { float x1; float x2; })arg1;
+ (void)releaseSharedInstance;
+ (void)setCurrentInputModeChanged;
+ (void)setParentTestForProfiling:(id)arg1;
+ (id)sharedInstance;
+ (struct CGSize { float x1; float x2; })sizeForInterfaceOrientation:(NSInteger)arg1;

- (id)UILanguagePreference;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_getLocalizedInputMode;
- (void)_handleWebKeyEvent:(struct __GSEvent { }*)arg1 withEventType:(NSInteger)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4;
- (void)_handleWebKeyEvent:(struct __GSEvent { }*)arg1 withInputString:(id)arg2 withInputStringIgnoringModifiers:(id)arg3;
- (void)_handleWebKeyEvent:(struct __GSEvent { }*)arg1 withInputString:(id)arg2;
- (BOOL)_isShowingCandidateUIWithAvailableCandidates;
- (id)_layout;
- (void)_setInputManager:(id)arg1;
- (void)_setShiftLockedEnabled:(BOOL)arg1;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (void)_updateSoundPreheatingForWindow:(id)arg1;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (void)acceptAutocorrection;
- (void)acceptCandidate:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)acceptCurrentCandidate;
- (void)acceptCurrentCandidateIfSelected;
- (BOOL)acceptInputString:(id)arg1;
- (BOOL)acceptWord:(id)arg1 firstDelete:(NSUInteger)arg2;
- (void)addAutocorrectionRecord:(id)arg1 forTyping:(id)arg2;
- (void)addInputObject:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)addInputString:(id)arg1;
- (void)addTyping:(id)arg1 forAutocorrection:(id)arg2;
- (void)animateAutocorrection;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (id)arrowKeyHistory;
- (void)autoDeleteTimerFired:(id)arg1;
- (BOOL)autocapitalizationPreference;
- (id)autocorrectHistoryForInputMode:(id)arg1;
- (id)autocorrectPrompt;
- (BOOL)autocorrectSpellingEnabled;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)autocorrectionPreference;
- (BOOL)autocorrectionPreferenceForTraits;
- (id)autocorrectionRecordForWord:(id)arg1;
- (BOOL)automaticMinimizationEnabled;
- (void)callChanged;
- (void)callChangedSelection;
- (BOOL)callLayoutIsShiftKeyBeingHeld;
- (BOOL)callLayoutIsShiftKeyPlaneChooser;
- (void)callLayoutLongPressAction;
- (void)callLayoutSetAutoshift:(BOOL)arg1;
- (void)callLayoutSetShift:(BOOL)arg1;
- (BOOL)callLayoutShiftKeyRequiresImmediateUpdate;
- (void)callLayoutUpdateLocalizedKeys;
- (void)callLayoutUpdateReturnKey;
- (BOOL)callLayoutUsesAutoShift;
- (BOOL)callShouldDelete;
- (BOOL)callShouldInsertText:(id)arg1;
- (BOOL)canHandleKeyHitTest;
- (void)cancelAllKeyEvents;
- (id)candidateList;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (BOOL)caretBlinks;
- (BOOL)caretVisible;
- (id)centerView;
- (NSInteger)changeCount;
- (BOOL)changeNotificationDisabled;
- (id)changedDelegate;
- (struct __CFDictionary { }*)chargedKeyProbabilities;
- (BOOL)checkSpellingPreference;
- (void)clearAnimations;
- (void)clearAutocorrectPromptTimer;
- (void)clearChangeTimeAndCount;
- (void)clearDelegate;
- (void)clearInput;
- (void)clearKeyAreas;
- (void)clearLayouts;
- (void)clearLongPressTimer;
- (void)clearSelection;
- (void)clearShiftState;
- (void)clearSynchronizePreferencesTimer;
- (void)clearTimers;
- (void)clearTransientState;
- (id)clientOverrideForKey:(id)arg1;
- (id)clientVariantDelegate;
- (id)clientVariantsForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToAutocorrectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegateView:(id)arg2 container:(id)arg3;
- (BOOL)currentInputModeChanged;
- (void)dealloc;
- (void)defaultsDidChange:(id)arg1;
- (void)defaultsDidChange;
- (void)delayedInit;
- (id)delegate;
- (id)delegateAsResponder;
- (BOOL)delegateIsSMSTextView;
- (BOOL)delegateSuggestionsForCurrentInput;
- (BOOL)delegateSupportsCorrectionUI;
- (void)deleteBackward;
- (void)deleteBackwardAndNotify:(BOOL)arg1;
- (void)deleteFromInput;
- (void)detach;
- (void)dismissKeyboard;
- (BOOL)displaysCandidates;
- (BOOL)doubleSpacePeriodPreference;
- (void)enable;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)fadeAutocorrectPrompt;
- (void)firstHardwareAutoRepeat:(id)arg1;
- (BOOL)flushKeyplaneName:(id)arg1;
- (void)forceShiftUpdate;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (id)generateAutocorrectionReplacements:(id)arg1;
- (void)generateCandidates;
- (void)generateCandidatesWithCompletions:(BOOL)arg1;
- (void)geometryChangeDone:(BOOL)arg1;
- (id)geometryDelegate;
- (void)handleDelete;
- (void)handleDeleteAsRepeat:(BOOL)arg1;
- (void)handleDeleteWithNonZeroInputCount;
- (void)handleDeleteWithZeroInputCount;
- (BOOL)handleKeyCommand:(struct __GSEvent { }*)arg1 repeatOkay:(BOOL*)arg2;
- (void)handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)handleObserverCallback;
- (void)handleSpecificHardwareKeyboard:(id)arg1;
- (void)handleStringInput:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)hardwareAutoRepeat:(id)arg1;
- (void)hardwareKeyboardAvailabilityChanged;
- (id)hardwareKeyboardsSeenPreference;
- (BOOL)hasAutoRepeat;
- (BOOL)hasEditableMarkedText;
- (BOOL)hasMarkedText;
- (void)hideCandidateBar;
- (void)hideKeyboard;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputDelegate;
- (id)inputManager;
- (id)inputModeFirstPreference;
- (id)inputModeLastChosen;
- (id)inputModeLastChosenPreference;
- (id)inputModeLastUsedForLanguage:(id)arg1;
- (id)inputModeLastUsedPreference;
- (id)inputModePreference;
- (id)inputModesLastUsedForLanguagePreference;
- (id)inputOverlayContainer;
- (void)insertText:(id)arg1;
- (void)installRecorder;
- (BOOL)isAllowedInputMode:(id)arg1;
- (BOOL)isAutoDeleteActive;
- (BOOL)isAutoFillMode;
- (BOOL)isAutoShifted;
- (BOOL)isCandidateBarShowing;
- (BOOL)isClientVariantSupportEnabled;
- (BOOL)isDesiredInputMode:(id)arg1;
- (BOOL)isInHardwareKeyboardMode;
- (BOOL)isLongPress;
- (BOOL)isMinimized;
- (BOOL)isShiftLocked;
- (BOOL)isShifted;
- (BOOL)isValidKeyInput:(id)arg1;
- (BOOL)isZoomEnabled;
- (BOOL)isZoomed;
- (void)keyActivated;
- (void)keyDeactivated;
- (NSInteger)keyHitTest:(struct CGPoint { float x1; float x2; })arg1 touchStage:(NSInteger)arg2 atTime:(double)arg3 withTouch:(id)arg4 forceShift:(BOOL)arg5;
- (BOOL)keySlidIntoSwipe;
- (id)keyboardDefaultForKey:(id)arg1;
- (BOOL)keyboardRecordingEnabled;
- (BOOL)keyboardsExpandedPreference;
- (id)keyplaneNameInCurrentDelegateListForIndex:(NSInteger)arg1;
- (void)layoutHasChanged;
- (id)legacyInputDelegate;
- (void)longPressAction;
- (id)markedTextOverlay;
- (void)mediaKeyDown:(struct __GSEvent { }*)arg1;
- (void)movePhraseBoundaryToDirection:(NSInteger)arg1;
- (BOOL)needKeyboardsIncludeIntlPreference;
- (BOOL)needsToDeferUpdateTextCandidateView;
- (void)newCarrierChange;
- (BOOL)noContent;
- (void)notifyShiftState;
- (NSInteger)orientation;
- (void)performClientVariantActionNamed:(id)arg1;
- (BOOL)performanceLoggingPreference;
- (struct CGPoint { float x1; float x2; })persistentOffset;
- (NSUInteger)phraseBoundary;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)postEmptyDelegateNotificationIfNeeded;
- (BOOL)preferencesNeedSynchronization;
- (void)prepareForGeometryChange;
- (void)prepareForSelectionChange;
- (void)prepareLayoutForInterfaceOrientation:(NSInteger)arg1;
- (void)prepareUsedKeyplaneNameListForNewDelegate;
- (id)privateInputDelegate;
- (void)recomputeActiveInputModes;
- (void)recomputeActiveInputModesFromList:(id)arg1;
- (id)recorder;
- (void)refreshRivenPreferences;
- (void)registerKeyArea:(struct CGPoint { float x1; float x2; })arg1 withRadii:(struct CGPoint { float x1; float x2; })arg2 forKeyCode:(unsigned short)arg3 forLowerKey:(id)arg4 forUpperKey:(id)arg5;
- (void)releaseKeyplaneNameFromPreviousDelegateList:(id)arg1;
- (void)removeAutocorrectPrompt;
- (void)removeFromSuperview;
- (void)replaceText:(id)arg1;
- (void)retainKeyplaneNameInCurrentDelegateList:(id)arg1;
- (id)returnKeyDisplayName;
- (BOOL)returnKeyEnabled;
- (NSInteger)returnKeyType;
- (BOOL)rivenCenterDismissPreference;
- (BOOL)rivenCenterViewPreference;
- (BOOL)rivenMiniPreference;
- (BOOL)rivenPopupHammersPreference;
- (BOOL)rivenPreference;
- (NSUInteger)rivenSeparationStyle;
- (BOOL)rivenTranslationPreference;
- (NSUInteger)rivenVisualStyle;
- (void)saveInputModesPreference:(id)arg1;
- (void)scheduleReplacementsWithOptions:(NSUInteger)arg1;
- (id)searchStringForMarkedText;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)setAnotherTouchWaiting:(BOOL)arg1;
- (void)setArrowKeyHistory:(id)arg1;
- (void)setAutocorrectSpellingEnabled:(BOOL)arg1;
- (void)setAutocorrection:(id)arg1;
- (void)setAutomaticMinimizationEnabled:(BOOL)arg1;
- (void)setCandidateBarShowing:(BOOL)arg1;
- (void)setCandidates:(id)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (void)setCenterView:(id)arg1;
- (void)setChangeNotificationDisabled:(BOOL)arg1;
- (void)setChanged;
- (void)setChangedDelegate:(id)arg1;
- (void)setCurrentInputModeChanged:(BOOL)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setDelegate:(id)arg1 force:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometryDelegate:(id)arg1;
- (void)setHardwareKeyboardsSeenPreference:(id)arg1;
- (void)setInHardwareKeyboardMode:(BOOL)arg1;
- (void)setInitialDirection;
- (void)setInputManager:(id)arg1;
- (void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2;
- (void)setInputMode:(id)arg1;
- (void)setInputModeFromPreferences;
- (void)setInputModeLastChosenPreference;
- (void)setInputModeLastUsedPreference;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (void)setInputModeToNextInPreferredList;
- (void)setInputObject:(id)arg1;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setKeyboardDefault:(id)arg1 forKey:(id)arg2;
- (void)setKeyboardsExpandedPreference;
- (void)setMarkedText;
- (void)setOrientationForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPersistentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPhraseBoundary:(NSUInteger)arg1;
- (void)setPreferencesNeedSynchronization:(BOOL)arg1;
- (void)setPreviousInputString:(id)arg1;
- (void)setRecorder:(id)arg1;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)setRivenPreference:(BOOL)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2;
- (void)setShift:(BOOL)arg1;
- (void)setShiftLocked:(BOOL)arg1;
- (void)setShiftLockedForced:(BOOL)arg1;
- (void)setShiftNeedsUpdate;
- (void)setShiftOffIfNeeded;
- (void)setShiftPreventAutoshift:(BOOL)arg1;
- (void)setShouldChargeKeys:(BOOL)arg1;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (void)setShouldUpdateCacheOnInputModesChange:(BOOL)arg1;
- (void)setShowInputModeIndicator:(BOOL)arg1;
- (void)setSplitProgress:(float)arg1;
- (void)setZoomed:(BOOL)arg1;
- (BOOL)shiftLockPreference;
- (BOOL)shiftLockedEnabled;
- (BOOL)shouldChargeKeys;
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned short)arg1;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)shouldSwitchInputMode:(id)arg1;
- (id)showCandidateBar;
- (BOOL)showInputModeIndicator;
- (void)showKeyboard;
- (void)showNextCandidates;
- (float)splitProgress;
- (void)startAutoDeleteTimer;
- (void)startCaretBlinkIfNeeded;
- (void)startKeyboardRecording;
- (void)stopAutoDelete;
- (void)stopKeyboardRecording;
- (void)storeDelegateConformance;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtractKeyboardFrameFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (BOOL)suppliesCompletions;
- (BOOL)swipeToTabPreference;
- (void)synchronizePreferences;
- (void)synchronizePreferencesIfNeeded;
- (void)takeTextInputTraitsFromDelegate;
- (void)testAutocorrectionPromptWithCorrection:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)textDidChange:(id)arg1;
- (NSInteger)textInputChangingCount;
- (id)textInputTraits;
- (void)textWillChange:(id)arg1;
- (void)timeElapsed:(NSUInteger)arg1 message:(id)arg2;
- (void)timeMark:(NSUInteger)arg1 message:(id)arg2;
- (void)timeMark:(NSUInteger)arg1;
- (void)toggleShift;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)touchAutocorrectPromptTimer;
- (void)touchLongPressTimer;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)touchSynchronizePreferencesTimer;
- (void)updateAutocorrectPrompt:(id)arg1;
- (void)updateAutocorrectPromptAction;
- (void)updateCandidateDisplay;
- (void)updateCandidateDisplayAsyncWithCandidates:(id)arg1 forInputManager:(id)arg2;
- (void)updateChangeTimeAndIncrementCount;
- (void)updateForChangedSelection;
- (void)updateFromTextInputTraits;
- (void)updateInputManagerAutoShiftFlag;
- (void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1;
- (void)updateKeyboardEventsLagging:(struct __GSEvent { }*)arg1;
- (void)updateLayout;
- (void)updateLayoutAndSetShift;
- (void)updateLayoutForInterfaceOrientation:(NSInteger)arg1;
- (void)updateLayoutToCurrentInterfaceOrientation;
- (void)updateObserverState;
- (void)updateReturnKey:(BOOL)arg1;
- (void)updateReturnKey;
- (void)updateShiftState;
- (void)updateSplitCenterView;
- (void)updateTextCandidateView;
- (BOOL)usesCandidateBar;
- (BOOL)zoomPreference;

@end
