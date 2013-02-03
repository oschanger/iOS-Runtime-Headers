/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPNowPlayingItemQueueInfoButton, MPInlineTransportControls;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
    unsigned int _layoutSubviewsActive : 1;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    MPInlineTransportControls *_transportControls;
}

- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_configureLinkButtonForCurrentItemTime;
- (NSUInteger)_convertedPartsMask:(NSUInteger)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)crossedURLTimeMarker:(id)arg1;
- (void)dealloc;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (NSInteger)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(NSInteger)arg2;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItem:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;

@end
