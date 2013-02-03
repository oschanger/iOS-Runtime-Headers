/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, <PhotoScrubberDataSource>, LoupeView, NSMutableArray, BezelView;

@interface PLPhotoScrubber : UIControl <PLImageRotationAnimationProtocol> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BezelView *_backgroundView;
    NSInteger _currentRotationDegrees;
    <PhotoScrubberDataSource> *_dataSource;
    BOOL _deferImageLoading;
    NSUInteger _displayedImageIndex;
    NSUInteger _imageCount;
    float _imagesPerViewRatio;
    NSInteger _isHorizontal;
    double _lastUpdate;
    BOOL _loadImagesSynchronously;
    LoupeView *_loupe;
    NSInteger _prospectiveImageIndex;
    BOOL _scrubbing;
    } _thumbnailBounds;
    UIView *_thumbnailTrackView;
    NSMutableArray *_thumbnailViews;
    double _timeOfLastTouch;
}

@property <PhotoScrubberDataSource> *dataSource;

+ (id)_backgroundImage;
+ (void)_initializeSafeCategory;
+ (id)_shadowImage;

- (void)_accessibilityOutputIndexChange:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })_centerForImageAtIndex:(NSInteger)arg1;
- (NSUInteger)_imageIndexFromLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setDisplayedImageIndex:(NSInteger)arg1 immediately:(BOOL)arg2;
- (void)_setDisplayedImageIndex:(id)arg1;
- (void)_setIsScrubbing:(BOOL)arg1;
- (NSUInteger)_thumbnailIndexFromLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateLoupe:(BOOL)arg1;
- (void)_updateLoupeWithTouch:(id)arg1 forceUpdate:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)didCancelRotation;
- (void)didFinishRotation;
- (void)didMoveToSuperview;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)displayedImageIndex;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithScrubberOrientation:(NSInteger)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isScrubbing;
- (void)layoutSubviews;
- (void)reloadData;
- (void)reloadDataWithNewDisplayedIndex:(NSUInteger)arg1;
- (void)reloadImageAtIndex:(NSInteger)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1 reloadData:(BOOL)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDeferImageLoading:(BOOL)arg1;
- (void)setDisplayedImageIndex:(NSInteger)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLoupeImage:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willStartRotatingByDegrees:(NSInteger)arg1;

@end
