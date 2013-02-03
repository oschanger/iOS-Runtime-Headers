/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarServer, UIStatusBarForegroundView, UIStatusBarBackgroundView, UILabel, UIStatusBar, UIStatusBarWindow, <UIStatusBarStyleDelegate>;

@interface UIStatusBar : UIView <UIStatusBarServerClient> {
    UIStatusBarBackgroundView *_backgroundView;
    UILabel *_doubleHeightLabel;
    UIStatusBarForegroundView *_foregroundView;
    BOOL _hidden;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    NSInteger _orientation;
    NSInteger _requestedStyle;
    BOOL _showsForeground;
    UIStatusBar *_slidingStatusBar;
    UIStatusBarServer *_statusBarServer;
    UIStatusBarWindow *_statusBarWindow;
    NSInteger _style;
    <UIStatusBarStyleDelegate> *_styleDelegate;
    NSInteger _styleOverrides;
    BOOL _styleRequestedWhileHidden;
    BOOL _suppressGlow;
    float _translucentBackgroundAlpha;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
}

@property UIStatusBarWindow *statusBarWindow;
@property <UIStatusBarStyleDelegate> *styleDelegate;

+ (void)_initializeSafeCategory;
+ (NSInteger)cornerStyleForRequestedStyle:(NSInteger)arg1 effectiveStyle:(NSInteger)arg2 alignment:(NSInteger)arg3;
+ (struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; })dataForRequestedData:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; })arg1 overrides:(struct { BOOL x1[22]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; struct { BOOL x_22_1_1[22]; BOOL x_22_1_2[64]; NSInteger x_22_1_3; NSInteger x_22_1_4; BOOL x_22_1_5[100]; BOOL x_22_1_6[100]; BOOL x_22_1_7[100]; BOOL x_22_1_8[1024]; NSUInteger x_22_1_9; NSInteger x_22_1_10; NSInteger x_22_1_11; NSUInteger x_22_1_12; NSInteger x_22_1_13; NSUInteger x_22_1_14; BOOL x_22_1_15[150]; NSInteger x_22_1_16; NSInteger x_22_1_17; unsigned int x_22_1_18 : 1; BOOL x_22_1_19[256]; unsigned int x_22_1_20 : 1; BOOL x_22_1_21[100]; unsigned int x_22_1_22 : 1; unsigned int x_22_1_23 : 1; } x22; })arg2;
+ (NSInteger)defaultStatusBarStyle;
+ (NSInteger)defaultStyleForRequestedStyle:(NSInteger)arg1 styleOverrides:(NSInteger)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForStyle:(NSInteger)arg1 orientation:(NSInteger)arg2;
+ (float)heightForStyle:(NSInteger)arg1 orientation:(NSInteger)arg2;

- (BOOL)_accessibilityIgnoresMouseEvents;
- (void)_adjustDoubleHeightLabelAlpha;
- (void)_crossfadeToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_finishedSettingStyleWithOldHeight:(float)arg1 newHeight:(float)arg2 animation:(NSInteger)arg3;
- (float)_foregroundAlphaForStatusBarStyle:(NSInteger)arg1;
- (NSInteger)_foregroundStyleForStatusBarStyle:(NSInteger)arg1;
- (float)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_hiddenTransformForHideAnimationParameters:(id)arg1;
- (void)_prepareToSetStyle:(NSInteger)arg1 animation:(NSInteger)arg2;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_setFrameForStyle:(NSInteger)arg1;
- (void)_setStyle:(NSInteger)arg1 animation:(NSInteger)arg2;
- (void)_setStyle:(NSInteger)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_slideTransform;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_swapToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (void)_willEnterForeground:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentFrame;
- (float)currentHeight;
- (NSInteger)currentStyle;
- (void)dealloc;
- (void)forceUpdateData:(BOOL)arg1;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateStyleOverrides:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForOrientation:(NSInteger)arg1;
- (float)heightForOrientation:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showForegroundView:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHidden;
- (void)noteStyleOverridesChangedLocally;
- (void)requestStyle:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)requestStyle:(NSInteger)arg1 animation:(NSInteger)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(NSInteger)arg5;
- (void)requestStyle:(NSInteger)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(NSInteger)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (void)setStyleDelegate:(id)arg1;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(NSInteger)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(NSInteger)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg2 withActions:(NSInteger)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(NSInteger)arg2;
- (id)statusBarWindow;
- (id)styleDelegate;
- (NSInteger)styleForRequestedStyle:(NSInteger)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
