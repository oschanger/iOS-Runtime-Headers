/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKInvalidateCacheRequest : GKDataRequest {
    NSInteger _cacheType;
    NSArray *_invalidateCacheKeys;
}

@property(retain) NSArray *invalidateCacheKeys;
@property NSInteger cacheType;

- (NSInteger)cacheType;
- (void)dealloc;
- (id)invalidateCacheKeys;
- (void)setCacheType:(NSInteger)arg1;
- (void)setInvalidateCacheKeys:(id)arg1;

@end
