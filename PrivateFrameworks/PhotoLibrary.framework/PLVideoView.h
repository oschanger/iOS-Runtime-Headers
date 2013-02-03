/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLPhotoTileViewController, UIImage, UIMovieScrubber, PLVideoEditingOverlayView, MLPhotoBakedThumbnails, MLPhoto, PLMoviePlayerController, UIButton, AVRemaker, <PLVideoViewDelegate>, UIView, PLVideoPosterFrameView, NSDictionary, NSArray, NSString, NSMutableDictionary, UIImageView, NSTimer;

@interface PLVideoView : UIView <UIMovieScrubberDelegate, UIMovieScrubberDataSource> {
    unsigned int _showsPosterFrame : 1;
    unsigned int _showsPlayButton : 1;
    unsigned int _canEdit : 1;
    unsigned int _loadMediaImmediately : 1;
    unsigned int _scrubberIsSubview : 1;
    unsigned int _viewWillAppear : 1;
    unsigned int _didLayout : 1;
    unsigned int _wasPlayingBeforeScrub : 1;
    unsigned int _playFromBeginning : 1;
    unsigned int _reloadScrubberThumbnails : 1;
    unsigned int _playing : 1;
    unsigned int _editing : 1;
    unsigned int _disableEditAfterTrim : 1;
    unsigned int _scrubbing : 1;
    unsigned int _scrubbingToRight : 1;
    unsigned int _deleteOriginalFile : 1;
    unsigned int _passthroughTrimming : 1;
    unsigned int _preparingMoviePlayer : 1;
    unsigned int _didPrepareMoviePlayer : 1;
    unsigned int _moviePlayerIsReady : 1;
    unsigned int _firstFrameWasDisplayed : 1;
    unsigned int _showingOverlay : 1;
    unsigned int _showingScrubber : 1;
    unsigned int _showScrubberWhenMovieIsReady : 1;
    unsigned int _playbackDidBegin : 1;
    unsigned int _playbackWillBegin : 1;
    unsigned int _didDisappear : 1;
    unsigned int _loadScrubberThumbnails : 1;
    unsigned int _videoIsLandscape : 1;
    unsigned int _posterImageIsThumbnail : 1;
    unsigned int _canCreateMetadata : 1;
    unsigned int _createPreviewPosterFrame : 1;
    unsigned int _startedDeliveringNotificationsToMainThread : 1;
    unsigned int _isTrimming : 1;
    unsigned int _wasTrimmedInPlace : 1;
    unsigned int _remakingFailed : 1;
    MLPhotoBakedThumbnails *_bakedLandscapeThumbnails;
    MLPhotoBakedThumbnails *_bakedPortraitThumbnails;
    NSMutableDictionary *_cachedThumbnails;
    NSUInteger _currentThumbnailRequestID;
    <PLVideoViewDelegate> *_delegate;
    double _duration;
    PLPhotoTileViewController *_imageTile;
    NSInteger _interfaceOrientation;
    NSArray *_landscapeSummaryThumbnailTimestamps;
    double _lastActualValue;
    double _lastScrubbedValue;
    double _maximumTrimLength;
    PLMoviePlayerController *_moviePlayer;
    NSInteger _orientationWhenLastDisplayed;
    NSArray *_portraitSummaryThumbnailTimestamps;
    UIImage *_posterFrameImage;
    PLVideoPosterFrameView *_posterFrameView;
    NSUInteger _previewFrameRequestID;
    float _progress;
    AVRemaker *_remaker;
    NSUInteger _scaleMode;
    UIMovieScrubber *_scrubber;
    UIImageView *_scrubberBackgroundView;
    UIView *_scrubberTitleView;
    NSTimer *_scrubberUpdateTimer;
    float _scrubberWidth;
    NSDictionary *_thumbnailOptionsDict;
    NSMutableDictionary *_thumbnailRequests;
    NSInteger _timeOptions;
    PLVideoEditingOverlayView *_trimMessageView;
    struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; NSString *x6; } *_trimProgressStack;
    NSTimer *_trimProgressTimer;
    NSString *_trimmedPath;
    MLPhoto *_trimmedVideoClip;
    MLPhoto *_videoCameraImage;
    UIView *_videoOverlayBackgroundView;
    UIButton *_videoOverlayPlayButton;
    NSString *_videoPathAfterTrim;
}

@property(readonly) UIImage *currentFrameImage;
@property <PLVideoViewDelegate> *delegate;
@property PLPhotoTileViewController *imageTile;
@property(readonly) UIImage *posterFrameImage;
@property(readonly) UIImageView *previewImageView;
@property(retain) MLPhoto *trimmedVideoClip;
@property(readonly) MLPhoto *videoCameraImage;
@property(readonly) NSString *videoPathAfterTrim;
@property BOOL canEdit;
@property double currentTime;
@property(readonly) double duration;
@property(getter=isEditing) BOOL editing;
@property(readonly) double endTime;
@property(readonly) NSInteger interfaceOrientation;
@property BOOL loadMediaImmediately;
@property BOOL scrubberIsSubview;
@property float scrubberWidth;
@property BOOL showsPlayOverlay;
@property BOOL showsPosterFrame;
@property(readonly) double startTime;

+ (void)_initializeSafeCategory;

- (void)_accessibilityClearChildren;
- (BOOL)_canCreateMetadata;
- (BOOL)_canEditDuration:(double)arg1;
- (void)_cancelRemaking:(id)arg1;
- (void)_createScrubber:(BOOL)arg1;
- (void)_dcimContentsDidChange:(id)arg1;
- (void)_delayedHidePosterFrame;
- (void)_didBeginPlayback;
- (void)_didScrubToValue:(double)arg1 withHandle:(NSInteger)arg2;
- (void)_hideTrimMessageView:(BOOL)arg1;
- (void)_hideVideoOverlay:(BOOL)arg1;
- (void)_informDelegateAboutProgressChange:(float)arg1;
- (void)_itemPlaybackDidEnd:(id)arg1;
- (id)_loadThumbnailsIntoDictionary:(id)arg1 isLandscape:(BOOL)arg2 aspectRatio:(float)arg3;
- (id)_moviePlayer;
- (void)_playbackFinished;
- (void)_prepareMoviePlayer;
- (void)_rateDidChange:(id)arg1;
- (void)_reloadScrubberThumbnails;
- (void)_remakerDidFinish:(id)arg1;
- (void)_removeScrubberUpdateTimer;
- (void)_removeTrimProgressTimer;
- (void)_requestPreviewPosterFrameForVideoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_reset;
- (void)_resetMoviePlayer;
- (void)_resetScrubberUpdateTimer;
- (void)_resetTrimProgressTimer;
- (void)_saveCachedThumbnailsIfNecessary;
- (void)_savePreviewPosterFrameImage:(struct CGImage { }*)arg1;
- (void)_scrubToTime:(double)arg1;
- (void)_scrubberAnimationFinished;
- (float)_scrubberYOffsetForOrientation:(NSInteger)arg1;
- (void)_setPlaying:(BOOL)arg1;
- (void)_setPosterFrameHidden:(BOOL)arg1;
- (void)_setReloadScrubberThumbnails:(BOOL)arg1;
- (void)_setScaleModeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_showVideoOverlay;
- (void)_startDeliveringNotificationsToMainThread;
- (void)_stopDeliveringNotifications;
- (void)_thumbnailImageGenerationFailed:(id)arg1;
- (void)_thumbnailImageWasGenerated:(id)arg1;
- (void)_thumbnailsWereRegenerated:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3;
- (void)_trimProgressChanged:(id)arg1;
- (void)_updateScrubberValue;
- (void)_updateScrubberVisibility:(BOOL)arg1;
- (void)_updateTrimProgress;
- (void)_videoFrameDisplayed:(id)arg1;
- (void)_videoOverlayFadeOutDidFinish;
- (void)_viewDidAppear:(BOOL)arg1;
- (id)accessibilityContainerElements;
- (id)accessibilityLabel;
- (BOOL)canEdit;
- (void)cancelTrim;
- (id)createPreviewImageData:(id*)arg1 fullScreenImage:(id*)arg2;
- (id)currentFrameImage;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (BOOL)deleteOriginalFileAfterTrim;
- (id)description;
- (void)didMoveToSuperview;
- (double)duration;
- (double)endTime;
- (void)handleDoubleTap;
- (void)hideScrubberBackgroundViewWithDuration:(float)arg1;
- (void)hideTrimMessage;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageTile;
- (void)importerFinishedProcessingTrimmedVideo:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 videoCameraImage:(id)arg2 orientation:(NSInteger)arg3;
- (NSInteger)interfaceOrientation;
- (BOOL)isAccessibilityElement;
- (BOOL)isEditing;
- (BOOL)isPlaying;
- (BOOL)isTrimming;
- (void)layoutSubviews;
- (BOOL)loadMediaImmediately;
- (void)moviePlayerDelegateDidChange:(id)arg1;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(NSInteger)arg2;
- (BOOL)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (BOOL)moviePlayerHeadsetPlayPausePressed:(id)arg1;
- (BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1;
- (void)moviePlayerReadyToPlay:(id)arg1;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(NSInteger)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (id)movieScrubber:(id)arg1 timestampsStartingAt:(id)arg2 endingAt:(id)arg3 maxCount:(NSInteger)arg4;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 widthDelta:(float)arg2 originXDelta:(float)arg3;
- (void)movieScrubberDidBeginEditing:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(NSInteger)arg2;
- (void)movieScrubberDidCancelEditing:(id)arg1;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(NSInteger)arg2;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (void)movieScrubberEditingAnimationFinished:(id)arg1;
- (float)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)movieScrubberWillBeginEditing:(id)arg1;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (void)pause;
- (void)play;
- (void)playButtonClicked:(id)arg1;
- (id)posterFrameImage;
- (id)previewImageView;
- (BOOL)scrubberIsSubview;
- (float)scrubberWidth;
- (void)setCanEdit:(BOOL)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImageTile:(id)arg1;
- (void)setLoadMediaImmediately:(BOOL)arg1;
- (void)setMaximumTrimLength:(double)arg1;
- (void)setPosterFrameImage:(id)arg1 isThumbnail:(BOOL)arg2;
- (void)setProgress:(id)arg1;
- (void)setScrubberIsSubview:(BOOL)arg1;
- (void)setScrubberWidth:(float)arg1;
- (void)setShowsPlayOverlay:(BOOL)arg1;
- (void)setShowsPosterFrame:(BOOL)arg1;
- (void)setTrimmedVideoClip:(id)arg1;
- (void)setVideoOverlayBackgroundView:(id)arg1;
- (BOOL)shouldShowCopyCalloutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)showScrubberBackgroundViewWithDuration:(float)arg1;
- (void)showTrimMessage:(id)arg1 withBottomY:(float)arg2;
- (BOOL)showsPlayOverlay;
- (BOOL)showsPosterFrame;
- (double)startTime;
- (void)stop;
- (void)toggleScaleMode:(float)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)trimUsingMode:(NSInteger)arg1 saveACopy:(BOOL)arg2;
- (id)trimmedVideoClip;
- (id)videoCameraImage;
- (id)videoOverlayBackgroundView;
- (id)videoPathAfterTrim;
- (id)videoScrubber;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wasTrimmedInPlace;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end
