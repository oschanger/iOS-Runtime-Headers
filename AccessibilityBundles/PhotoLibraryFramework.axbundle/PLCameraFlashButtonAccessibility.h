/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
 */

@interface PLCameraFlashButtonAccessibility : PLCameraFlashButtonAccessibility_super {
}

+ (void)_initializeSafeCategory;

- (void)_accessibilityUpdateCurrentLabel;
- (void)_collapseAndSetMode:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)_handleSingleTap:(id)arg1;
- (void)_scheduleCollapse;
- (void)_showAllModes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (void)setFlashMode:(NSInteger)arg1 notifyDelegate:(BOOL)arg2;
- (void)setShowsWarningIndicator:(BOOL)arg1;

@end
