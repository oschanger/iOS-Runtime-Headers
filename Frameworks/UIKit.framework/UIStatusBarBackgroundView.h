/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView;

@interface UIStatusBarBackgroundView : UIView {
    BOOL _glowEnabled;
    UIImageView *_glowView;
    NSInteger _style;
    BOOL _suppressGlow;
}

- (id)_baseImageForStyle:(NSInteger)arg1;
- (id)_glowImageForStyle:(NSInteger)arg1;
- (id)_imageNameForStyle:(NSInteger)arg1;
- (void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1;
- (void)_stopGlowAnimation;
- (BOOL)_styleCanGlow:(NSInteger)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (void)setGlowAnimationEnabled:(BOOL)arg1;
- (void)setSuppressesGlow:(BOOL)arg1;
- (NSInteger)style;

@end
