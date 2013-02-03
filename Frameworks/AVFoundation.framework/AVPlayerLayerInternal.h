/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayer, AVWeakKeyValueObserverProxy, AVWeakReference, AVPlayerItem, NSString, CALayer, AVSubtitleLayer;

@interface AVPlayerLayerInternal : NSObject {
    AVWeakKeyValueObserverProxy *KVOProxy;
    AVPlayer *_player;
    BOOL connectLayerWhenInForeground;
    CALayer *contentLayer;
    BOOL disableActions;
    BOOL inForeground;
    BOOL isPresentationLayer;
    BOOL isReadyForDisplay;
    struct OpaqueFigSimpleMutex { } *isReadyForDisplayMutex;
    AVPlayerItem *itemMarkedReadyForDisplay;
    NSString *subtitleGravity;
    AVSubtitleLayer *subtitleLayer;
    NSString *videoGravity;
    AVWeakReference *weakReference;
}

@end
