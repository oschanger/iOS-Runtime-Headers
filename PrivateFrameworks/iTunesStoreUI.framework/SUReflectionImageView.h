/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView;

@interface SUReflectionImageView : UIView {
    unsigned int _nonSquareImage : 1;
    UIImageView *_imageView;
    UIImageView *_reflection;
    float _reflectionAlpha;
    float _reflectionHeight;
    float _spacing;
    BOOL _useImageSize;
}

@property BOOL nonSquareImage;
@property float reflectionSpacing;

- (void)dealloc;
- (id)init;
- (id)initWithReflectionHeight:(float)arg1 spacing:(float)arg2;
- (BOOL)nonSquareImage;
- (float)reflectionSpacing;
- (void)setImage:(id)arg1;
- (void)setNonSquareImage:(BOOL)arg1;
- (void)setReflectionAlphaWhenVisible:(float)arg1;
- (void)setReflectionSpacing:(float)arg1;
- (void)setReflectionVisible:(BOOL)arg1;
- (void)setUseImageSize:(BOOL)arg1;

@end
