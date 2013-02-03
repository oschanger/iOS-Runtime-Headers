/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class UIActivityIndicatorView, NSTimer, UIBarButtonItem, <CNFRegFirstRunDelegate>;

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience> {
    UIActivityIndicatorView *_activityIndicator;
    BOOL _cancelled;
    Class _completionControllerClass;
    UIBarButtonItem *_customLeftButton;
    UIBarButtonItem *_customRightButton;
    <CNFRegFirstRunDelegate> *_delegate;
    BOOL _previousHidesBackButton;
    UIBarButtonItem *_previousLeftButton;
    UIBarButtonItem *_previousRightButton;
    BOOL _requiresAlias;
    BOOL _showingActivityIndicator;
    BOOL _timedOut;
    NSTimer *_timeoutTimer;
}

@property(retain) UIBarButtonItem *customLeftButton;
@property(retain) UIBarButtonItem *customRightButton;
@property <CNFRegFirstRunDelegate> *delegate;
@property(retain) UIBarButtonItem *previousLeftButton;
@property(retain) UIBarButtonItem *previousRightButton;
@property Class completionControllerClass;
@property(readonly) NSInteger currentAppearanceStyle;
@property BOOL previousHidesBackButton;
@property BOOL requiresAlias;
@property BOOL timedOut;

- (void)_cancelValidationMode;
- (void)_handleTimeout;
- (void)_handleValidationModeCancelled;
- (BOOL)_hidesBackButton;
- (void)_layoutActivityIndicator;
- (id)_leftButtonItem;
- (void)_leftButtonTapped;
- (void)_refreshCurrentState;
- (void)_refreshNavBarAnimated:(BOOL)arg1;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_setupEventHandlers;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 allowCancel:(BOOL)arg3;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_startValidationModeAnimated:(BOOL)arg1 allowCancel:(BOOL)arg2;
- (void)_startValidationModeAnimated:(BOOL)arg1;
- (void)_stopActivityIndicatorAnimated:(BOOL)arg1;
- (void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_stopTimeout;
- (void)_stopValidationModeAnimated:(BOOL)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)_validationModeCancelButton;
- (BOOL)canBeShownFromSuspendedState;
- (Class)completionControllerClass;
- (NSInteger)currentAppearanceStyle;
- (id)customLeftButton;
- (id)customRightButton;
- (void)dealloc;
- (id)delegate;
- (BOOL)dismissWithState:(NSUInteger)arg1;
- (id)init;
- (BOOL)previousHidesBackButton;
- (id)previousLeftButton;
- (id)previousRightButton;
- (BOOL)pushCompletionControllerIfPossible;
- (BOOL)requiresAlias;
- (void)setCellsChecked:(BOOL)arg1;
- (void)setCompletionControllerClass:(Class)arg1;
- (void)setCustomLeftButton:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviousHidesBackButton:(BOOL)arg1;
- (void)setPreviousLeftButton:(id)arg1;
- (void)setPreviousRightButton:(id)arg1;
- (void)setRequiresAlias:(BOOL)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)timedOut;
- (id)titleString;
- (id)validationString;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willBecomeActive;
- (void)willResignActive;

@end
