/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UILabel;

@interface UIButton : UIControl <NSCoding> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int reversesTitleShadowWhenHighlighted : 1; 
        unsigned int adjustsImageWhenHighlighted : 1; 
        unsigned int adjustsImageWhenDisabled : 1; 
        unsigned int autosizeToFit : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int showsTouchWhenHighlighted : 1; 
        unsigned int buttonType : 8; 
        unsigned int shouldHandleScrollerMouseEvent : 1; 
    UIImageView *_backgroundView;
    } _buttonFlags;
    } _contentEdgeInsets;
    struct __CFDictionary { } *_contentLookup;
    } _imageEdgeInsets;
    UIImageView *_imageView;
    BOOL _initialized;
    } _titleEdgeInsets;
    UILabel *_titleView;
}

@property(retain,readonly) UIImage *currentBackgroundImage;
@property(retain,readonly) UIImage *currentImage;
@property(retain,readonly) NSString *currentTitle;
@property(retain,readonly) UIColor *currentTitleColor;
@property(retain,readonly) UIColor *currentTitleShadowColor;
@property(retain) UIFont *font;
@property(retain,readonly) UIImageView *imageView;
@property(retain) UIColor *tintColor;
@property(retain,readonly) UILabel *titleLabel;
@property BOOL adjustsImageWhenDisabled;
@property BOOL adjustsImageWhenHighlighted;
@property(readonly) NSInteger buttonType;
@property UIEdgeInsets contentEdgeInsets;
@property UIEdgeInsets imageEdgeInsets;
@property NSInteger lineBreakMode;
@property BOOL reversesTitleShadowWhenHighlighted;
@property BOOL showsTouchWhenHighlighted;
@property UIEdgeInsets titleEdgeInsets;
@property CGSize titleShadowOffset;

+ (BOOL)__original_resolveClassMethod:(SEL)arg1;
+ (id)_defaultContentForType:(NSInteger)arg1 andState:(NSUInteger)arg2;
+ (void)_initializeSafeCategory;
+ (id)buttonWithTitle:(id)arg1 theme:(id)arg2;
+ (id)buttonWithType:(NSInteger)arg1;
+ (BOOL)resolveClassMethod:(SEL)arg1;

- (id)__original_forwardingTargetForSelector:(SEL)arg1;
- (id)_accessibilityImagePath;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (id)_archivableContent:(id*)arg1;
- (id)_backgroundForState:(NSUInteger)arg1 usesBackgroundForNormalState:(BOOL*)arg2;
- (id)_contentForState:(NSUInteger)arg1;
- (id)_font;
- (id)_imageForState:(NSUInteger)arg1 usesImageForNormalState:(BOOL*)arg2;
- (NSInteger)_lineBreakMode;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_scriptingInfo;
- (void)_setBackground:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setButtonType:(NSInteger)arg1;
- (void)_setContent:(id)arg1 forState:(NSUInteger)arg2;
- (void)_setFont:(id)arg1;
- (void)_setImage:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setLineBreakMode:(NSInteger)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (void)_setTitle:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(NSUInteger)arg2;
- (void)_setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (id)_setupBackgroundView;
- (void)_setupImageView;
- (void)_setupTitleView;
- (id)_shadowColorForState:(NSUInteger)arg1;
- (void)_takeContentFromArchivableContent:(id)arg1 overrides:(id)arg2;
- (void)_titleAttributesChanged;
- (id)_titleColorForState:(NSUInteger)arg1;
- (id)_titleForState:(NSUInteger)arg1;
- (struct CGSize { float x1; float x2; })_titleShadowOffset;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)adjustsImageWhenDisabled;
- (BOOL)adjustsImageWhenHighlighted;
- (BOOL)autosizesToFit;
- (id)backgroundImageForState:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)buttonType;
- (void)configureFromScriptButton:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)crossfadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)crossfadeToImage:(id)arg1 forState:(NSUInteger)arg2;
- (id)currentBackgroundImage;
- (id)currentImage;
- (id)currentTitle;
- (id)currentTitleColor;
- (id)currentTitleShadowColor;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageEdgeInsets;
- (id)imageForState:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (NSInteger)lineBreakMode;
- (struct CGPoint { float x1; float x2; })pressFeedbackPosition;
- (BOOL)reversesTitleShadowWhenHighlighted;
- (void)setAdjustsImageWhenDisabled:(BOOL)arg1;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(NSUInteger)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentHorizontalAlignment:(NSInteger)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forState:(NSUInteger)arg2;
- (void)setImage:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLineBreakMode:(NSInteger)arg1;
- (void)setReversesTitleShadowWhenHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setShowsTouchWhenHighlighted:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1 forState:(NSUInteger)arg2;
- (void)setTitle:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setTitleColor:(id)arg1 forState:(NSUInteger)arg2;
- (void)setTitleColor:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTitleShadowColor:(id)arg1 forState:(NSUInteger)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(NSUInteger)arg2;
- (void)setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)showsTouchWhenHighlighted;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tintColor;
- (id)titleColorForState:(NSUInteger)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleEdgeInsets;
- (id)titleForState:(NSUInteger)arg1;
- (id)titleLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)titleShadowColorForState:(NSUInteger)arg1;
- (struct CGSize { float x1; float x2; })titleShadowOffset;

@end
