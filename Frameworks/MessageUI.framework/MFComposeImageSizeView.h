/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UISegmentedControl;

@interface MFComposeImageSizeView : MFComposeHeaderView {
    UISegmentedControl *_segmentedControl;
}

- (unsigned long)_segmentIndexForScale:(NSInteger)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)segmentedControlChanged;
- (void)setScale:(NSInteger)arg1;
- (void)setSizeDescription:(id)arg1 forScale:(NSInteger)arg2;

@end
