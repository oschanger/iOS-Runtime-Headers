/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, NSString, UIView, NSSet;

@interface UIBarButtonItem : UIBarItem {
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
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int isMinibarView : 1; 
        unsigned int disableAutosizing : 1; 
        unsigned int selected : 1; 
    SEL _action;
    } _barButtonItemFlags;
    UIImage *_image;
    } _imageInsets;
    UIImage *_miniImage;
    } _miniImageInsets;
    NSSet *_possibleTitles;
    NSInteger _tag;
    id _target;
    NSString *_title;
    UIView *_view;
    float _width;
}

@property(getter=_miniImage,retain) UIImage *miniImage; /* unknown property attribute: S_setMiniImage: */
@property(getter=_miniImageInsets) UIEdgeInsets miniImageInsets; /* unknown property attribute: S_setMiniImageInsets: */
@property(readonly) UIToolbarButton *_toolbarButton;
@property(retain) UIView *customView;
@property(copy) NSSet *possibleTitles;
@property SEL action;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) BOOL isSystemItem;
@property BOOL selected;
@property NSInteger style;
@property(readonly) NSInteger systemItem;
@property NSInteger tag;
@property id target;
@property float width;

+ (void)_initializeSafeCategory;
+ (Class)classForNavigationButton;

- (void)_accessibilityAddIdForView:(id)arg1;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize { float x1; float x2; }*)arg1 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 landscape:(BOOL)arg3;
- (void)_getSystemItemStyle:(NSInteger*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(NSInteger)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8;
- (void)_getToolbarEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg1 imageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2 glowInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg3 forBarStyle:(NSInteger)arg4 landscape:(BOOL)arg5 alwaysBordered:(BOOL)arg6;
- (id)_miniImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_miniImageInsets;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setMiniImage:(id)arg1;
- (void)_setMiniImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setWidth:(float)arg1;
- (BOOL)_shouldBezelNavButtonImage;
- (id)_toolbarButton;
- (void)_updateView;
- (float)_width;
- (SEL)action;
- (void)configureFromScriptButton:(id)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (id)customView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (id)init;
- (id)initWithBarButtonSystemItem:(NSInteger)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 style:(NSInteger)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithTitle:(id)arg1 style:(NSInteger)arg2 target:(id)arg3 action:(SEL)arg4;
- (BOOL)isCustomViewItem;
- (BOOL)isEnabled;
- (BOOL)isMinibarView;
- (BOOL)isSystemItem;
- (id)nextResponder;
- (id)possibleTitles;
- (id)scriptingID;
- (BOOL)selected;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setCustomView:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (void)setIsMinibarView:(BOOL)arg1;
- (void)setPossibleTitles:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)setTag:(NSInteger)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setView:(id)arg1;
- (void)setWidth:(float)arg1;
- (NSInteger)style;
- (NSInteger)systemItem;
- (NSInteger)tag;
- (id)target;
- (id)title;
- (id)view;
- (float)width;

@end
