/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSLock, PLFixedSizeLRUCache;

@interface PLWStackedImageCache : NSObject {
    NSLock *_lock;
    PLFixedSizeLRUCache *_stackedImageOptionsCache;
    PLFixedSizeLRUCache *_stackedImagesCache;
}

+ (id)absolutePathToCachedStackedImagesDirectory;
+ (id)absolutePathToCachesDirectory;
+ (id)sharedInstance;

- (id)_bakedStackedImageFilenameForWithKey:(NSUInteger)arg1;
- (BOOL)_createBaseDirectoryForStackedImagesCache;
- (id)_pathToBakedCachedStackedImageWithKey:(NSUInteger)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidateAll;
- (void)invalidateEntryForKey:(NSUInteger)arg1;
- (void)prefetchStackedImagesWithKey1:(NSUInteger)arg1 key2:(NSUInteger)arg2 key3:(NSUInteger)arg3 key4:(NSUInteger)arg4;
- (void)setStackedImage:(id)arg1 forKey:(NSUInteger)arg2 options:(id)arg3;
- (id)stackedImageWithKey:(NSUInteger)arg1 options:(id*)arg2;

@end
