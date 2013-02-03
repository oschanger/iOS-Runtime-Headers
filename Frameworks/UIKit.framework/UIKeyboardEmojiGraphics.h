/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiGraphics : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGGradient { } *_backgroundGradient;
    struct UIKBTheme { } *_backgroundTheme;
    struct UIKBTheme { } *_categorySelectedTheme;
    struct UIKBTheme { } *_categoryTheme;
    struct UIKBTheme { } *_controlPressedTheme;
    struct UIKBTheme { } *_controlTheme;
    struct CGGradient { } *_darkDividerGradient;
    struct UIKBTheme { } *_darkDividerTheme;
    struct UIKBTheme { } *_dividerTheme;
    } _imageRect;
    struct CGGradient { } *_selectedDividerGradient;
    struct CGColor { } *_selectedDividerStart;
    struct UIKBTheme { } *_selectedDividerTheme;
    struct CGGradient { } *_selectedGradient;
}

+ (void)_initializeSafeCategory;
+ (id)emojiWithName:(id)arg1;
+ (id)imageWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 name:(id)arg2 pressed:(BOOL)arg3;
+ (void)mapImagesIfNecessary;
+ (id)sharedInstance;

- (id)backgroundGradientGenerator:(id)arg1;
- (id)categoryKeyGenerator:(BOOL)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)categoryNatureGenerator:(id)arg1;
- (id)categoryObjectsGenerator:(id)arg1;
- (id)categoryPeopleGenerator:(id)arg1;
- (id)categoryPlacesGenerator:(id)arg1;
- (id)categoryRecentsGenerator:(id)arg1;
- (id)categorySymbolsGenerator:(id)arg1;
- (id)categoryWithSymbol:(id)arg1 pressed:(id)arg2;
- (id)controlDeleteGenerator:(id)arg1;
- (id)controlDeleteKeyGenerator:(BOOL)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)controlDismissKeyGenerator:(BOOL)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)controlInternationalGenerator:(id)arg1;
- (id)controlInternationalKeyGenerator:(BOOL)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)controlSpaceKeyGenerator:(BOOL)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)controlWithSymbol:(id)arg1 corners:(NSInteger)arg2 padding:(struct CGSize { float x1; float x2; })arg3 generator:(id)arg4;
- (struct UIKBTheme { }*)createProtoThemeForKey:(id)arg1 keyboard:(id)arg2 state:(NSInteger)arg3;
- (id)darkDividerGenerator:(id)arg1;
- (void)dealloc;
- (id)dividerGenerator:(id)arg1;
- (id)dividerWithTheme:(struct UIKBTheme { }*)arg1;
- (void)drawTopEdgeInContext:(struct CGContext { }*)arg1 withTheme:(struct UIKBTheme { }*)arg2;
- (id)emojiPressedGenerator:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)generateImageWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 name:(id)arg2 pressed:(BOOL)arg3;
- (id)init;
- (void)initializeThemes;
- (id)keyImageWithDisplayString:(id)arg1 state:(NSInteger)arg2 key:(id)arg3 keyboard:(id)arg4 theme:(struct UIKBTheme { }*)arg5;
- (id)keyImageWithDisplayString:(id)arg1 state:(NSInteger)arg2 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 fontSize:(float)arg4;
- (id)pageIndicatorCurrentGenerator:(id)arg1;
- (id)pageIndicatorGenerator:(id)arg1;
- (id)protoKeyWithDisplayString:(id)arg1;
- (id)protoKeyboard;
- (void)releaseThemes;
- (id)selectedDividerGenerator:(id)arg1;

@end
