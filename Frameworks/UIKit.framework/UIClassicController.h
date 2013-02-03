/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIZoomViewController, UIWindow, UIStatusBarViewController;

@interface UIClassicController : NSObject {
    BOOL _hidesClassicChrome;
    UIImageView *_imageView;
    BOOL _masksToWindowBounds;
    UIStatusBarViewController *_statusBarViewController;
    UIWindow *_window;
    UIZoomViewController *_zoomViewController;
}

@property BOOL drawsClassicChrome;
@property BOOL masksToWindowBounds;

+ (id)sharedClassicController;

- (id)_chromeImageWithOrientation:(NSInteger)arg1;
- (void)_classicChangeStatusBarOrientation:(id)arg1;
- (void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)_finishZoom:(BOOL)arg1;
- (void)_initializeStatusBarOrientation;
- (void)_prepareForZoom:(BOOL)arg1;
- (void)_setupWindow;
- (void)_updateImageView:(id)arg1 orientation:(NSInteger)arg2;
- (id)_window;
- (void)_zoom:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_zoomAnimationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)dealloc;
- (BOOL)drawsClassicChrome;
- (BOOL)isClassicControlWindow:(id)arg1;
- (BOOL)masksToWindowBounds;
- (void)setDrawsClassicChrome:(BOOL)arg1;
- (void)setMasksToWindowBounds:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setStatusBarOrientation:(NSInteger)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1 animationParameters:(id)arg2;

@end
