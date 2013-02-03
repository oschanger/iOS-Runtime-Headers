/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject {
    NSMutableSet *_categories;
    NSMutableArray *_contexts;
}

@property(readonly) id mainContext;

+ (id)sharedInstance;

- (BOOL)_sliderIsVisible:(id)arg1;
- (void)_updateVisibility;
- (void)dealloc;
- (id)init;
- (id)mainContext;
- (void)popContext;
- (id)pushContext;
- (void)registerView:(id)arg1 inContext:(id)arg2;
- (void)setNeedsUpdate;
- (void)unregisterView:(id)arg1 inContext:(id)arg2;

@end
