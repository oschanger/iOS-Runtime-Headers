/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, NSString, UIColor;

@interface UILabel : UIView <NSCoding> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int lineBreakMode : 3; 
        unsigned int highlighted : 1; 
        unsigned int autosizeTextToFit : 1; 
        unsigned int autotrackTextToFit : 1; 
        unsigned int baselineAdjustment : 2; 
        unsigned int alignment : 2; 
        unsigned int enabled : 1; 
        unsigned int wordRoundingEnabled : 1; 
        unsigned int explicitAlignment : 1; 
    float _actualFontSize;
    UIColor *_color;
    UIFont *_font;
    UIColor *_highlightedColor;
    float _lastLineBaseline;
    NSInteger _lineSpacing;
    float _minFontSize;
    NSInteger _numberOfLines;
    UIColor *_shadowColor;
    } _shadowOffset;
    } _size;
    NSString *_text;
    } _textLabelFlags;
}

@property(retain) UIFont *font;
@property(retain) UIColor *highlightedTextColor;
@property(retain) UIColor *shadowColor;
@property(copy) NSString *text;
@property(retain) UIColor *textColor;
@property(readonly) float _lastLineBaseline;
@property BOOL adjustsFontSizeToFitWidth;
@property BOOL autotrackTextToFit;
@property NSInteger baselineAdjustment;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isHighlighted) BOOL highlighted;
@property NSInteger lineBreakMode;
@property NSInteger lineSpacing;
@property float minimumFontSize;
@property NSInteger numberOfLines;
@property CGSize shadowOffset;
@property NSInteger textAlignment;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

+ (void)_initializeSafeCategory;
+ (id)defaultFont;
+ (id)sectionHeaderLabelWithText:(id)arg1 theme:(id)arg2;

- (BOOL)_allowAscentRounding;
- (id)_attributes;
- (void)_commonInit;
- (id)_disabledFontColor;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 baselineCalculationOnly:(BOOL)arg2;
- (void)_invalidateTextSize;
- (float)_lastLineBaseline;
- (id)_scriptingInfo;
- (void)_setWordRoundingEnabled:(BOOL)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (float)actualFontSize;
- (BOOL)adjustsFontSizeToFitWidth;
- (BOOL)autotrackTextToFit;
- (NSInteger)baselineAdjustment;
- (BOOL)centersHorizontally;
- (id)color;
- (id)currentTextColor;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)drawContentsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)highlightedTextColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isTextFieldCenteredLabel;
- (NSInteger)lineBreakMode;
- (NSInteger)lineSpacing;
- (float)minimumFontSize;
- (NSInteger)numberOfLines;
- (struct CGSize { float x1; float x2; })rawSize;
- (void)setActualFontSize:(float)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAutotrackTextToFit:(BOOL)arg1;
- (void)setBaselineAdjustment:(NSInteger)arg1;
- (void)setCentersHorizontally:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setLineBreakMode:(NSInteger)arg1;
- (void)setLineSpacing:(NSInteger)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (void)setNumberOfLines:(NSInteger)arg1;
- (void)setRawSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)text;
- (NSInteger)textAlignment;
- (id)textColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(NSInteger)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })textSize;
- (struct CGSize { float x1; float x2; })textSizeForWidth:(float)arg1;

@end
