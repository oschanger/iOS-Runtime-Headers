/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIImage;

@interface UIKeyboardEmojiCategoriesControl : UIControl {
    UIImage *_darkDivider;
    NSMutableArray *_dividerViews;
    UIImage *_plainDivider;
    NSMutableArray *_segmentViews;
    NSInteger _selected;
    UIImage *_selectedDivider;
    NSInteger _total;
}

@property(readonly) NSInteger numSegments;
@property NSInteger selectedIndex;

+ (void)_initializeSafeCategory;
+ (id)categoryControl;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)numSegments;
- (NSInteger)selectedIndex;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectedIndex:(NSInteger)arg1;

@end
