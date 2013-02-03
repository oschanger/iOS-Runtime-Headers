/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoBufferLayerContainer, UIView, MPMovieSnapshotController, UIMovieSubtitlesView, CALayer, NSString;

@interface MPVideoView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _disableFudgingScaleToFullScreen : 1;
    unsigned int _requiresIntegralScreenFrame : 1;
    NSUInteger _effectiveScaleMode;
    NSString *_moviePath;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    NSUInteger _scaleMode;
    MPMovieSnapshotController *_snapshotController;
    double _startTime;
    double _stopTime;
    } _subtitlesMargin;
    UIMovieSubtitlesView *_subtitlesView;
    MPVideoBufferLayerContainer *_videoBufferContainerLayer;
    UIView *_videoBufferContainerView;
    CALayer *_videoBufferLayer;
}

@property(retain) NSString *movieSubtitle;
@property(retain) NSString *movieTitle;
@property(readonly) BOOL canChangeScaleMode;
@property NSUInteger effectiveScaleMode;
@property(readonly) CGRect movieFrame;
@property BOOL requiresIntegralScreenFrame;
@property NSUInteger scaleMode;
@property double startTime;
@property double stopTime;
@property float subtitlesFontSize;
@property CGSize subtitlesMargin;
@property CGSize subtitlesPadding;

+ (void)_initializeSafeCategory;

- (BOOL)_allowFudgingScaleToFullScreen;
- (id)_avController;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (BOOL)_isCloseToFullScreenWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)_isExactlyFullScreenWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_layoutSublayers;
- (void)_layoutSubtitleLayers;
- (void)_layoutVideoLayers:(BOOL)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_sizeDidChangedNotification:(id)arg1;
- (BOOL)_sizeDifferenceFromFullScreenIsLessThan:(struct CGSize { float x1; float x2; })arg1 allowingZero:(BOOL)arg2 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3;
- (void)_validityChangedNotification:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)addSubview:(id)arg1;
- (id)avController;
- (void)bringSubviewToFront:(id)arg1;
- (NSInteger)bufferingStatusMask;
- (BOOL)canChangeScaleMode;
- (void)cancelSnapshots;
- (double)currentTime;
- (void)dealloc;
- (double)duration;
- (NSUInteger)effectiveScaleMode;
- (void)exchangeSubviewAtIndex:(NSInteger)arg1 withSubviewAtIndex:(NSInteger)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertSubview:(id)arg1 atIndex:(NSInteger)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })movieFrame;
- (id)moviePath;
- (id)movieSubtitle;
- (id)movieTitle;
- (id)mpavController;
- (void)pause;
- (void)play;
- (void)play;
- (void)playFromBeginning;
- (void)playWhenLikelyToKeepUp;
- (NSInteger)playableContentType;
- (NSInteger)playbackState;
- (void)prepareAVControllerQueue;
- (BOOL)requiresIntegralScreenFrame;
- (NSUInteger)scaleMode;
- (void)scheduleThumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 orientation:(NSInteger)arg2 time:(float)arg3 delegate:(id)arg4;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(NSInteger)arg2;
- (void)setCurrentTime:(double)arg1;
- (void)setEffectiveScaleMode:(NSUInteger)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setMovieWithPath:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRepeatGap:(double)arg1;
- (void)setRepeatMode:(NSInteger)arg1;
- (void)setRequiresIntegralScreenFrame:(BOOL)arg1;
- (void)setScaleMode:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(NSUInteger)arg1 duration:(float)arg2;
- (void)setScaleMode:(NSUInteger)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (void)setSubtitlesFontSize:(float)arg1;
- (void)setSubtitlesMargin:(struct CGSize { float x1; float x2; })arg1;
- (void)setSubtitlesPadding:(struct CGSize { float x1; float x2; })arg1;
- (double)startTime;
- (void)stop;
- (double)stopTime;
- (void)subtitlesDidClear:(id)arg1;
- (void)subtitlesDidUpdate:(id)arg1;
- (float)subtitlesFontSize;
- (struct CGSize { float x1; float x2; })subtitlesMargin;
- (struct CGSize { float x1; float x2; })subtitlesPadding;
- (void)toggleScaleMode:(BOOL)arg1;
- (id)viewWithTag:(NSInteger)arg1;

@end
