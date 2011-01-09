/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetInspector, NSMutableArray, AVWeakReference, NSDictionary, AVValidator, NSURL, AVAssetCache;



@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetInspector *_assetInspector;
    AVAssetCache *_assetCache;
    BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
    NSDictionary *_validationPlist;
    AVWeakReference *_weakReference;
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    NSInteger _durationLoadingStatus;
    NSInteger _tracksLoadingStatus;
    NSInteger _lyricsLoadingStatus;
    NSInteger _chapterGroupInfoLoadingStatus;
    NSInteger _playableLoadingStatus;
    NSInteger _status;
    NSInteger _basicInspectionFailureCode;
    NSURL *_URL;
    AVValidator *_validator;
    BOOL _playable;
}

@property(getter=_formatReader,readonly) OpaqueFigFormatReader *formatReader;
@property(getter=_formatReaderLoader,readonly) OpaqueFigFormatReaderLoader *formatReaderLoader;
@property(getter=_playbackItem,readonly) OpaqueFigPlaybackItem *playbackItem;
@property(readonly) ? duration;
@property(readonly) NSString *lyrics;
@property(getter=isPlayable,readonly) BOOL playable;
@property(readonly) NSArray *chapterGroupInfo;
@property(readonly) BOOL hasProtectedContent;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) AVAssetCache *assetCache;
@property(readonly) NSURL *URL;


- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (id)_statusOfValueOfDurationWhileMutexLocked;
- (id)_statusOfValueOfTracksWhileMutexLocked;
- (id)_statusOfValueOfLyricsWhileMutexLocked;
- (id)_statusOfValueOfChapterGroupInfoWhileMutexLocked;
- (id)_statusOfValueOfPlayableWhileMutexLocked;
- (NSInteger)_statusOfValueWhileMutexLockedForKey:(id)arg1 returningFigErrorCode:(NSInteger*)arg2;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_mapFigErrorCodeToNSError:(long)arg1;
- (BOOL)_updateStatusWhileMutexLocked:(NSInteger)arg1 figErrorCode:(long)arg2;
- (void)_setStatus:(NSInteger)arg1 figErrorCode:(long)arg2;
- (void)_updateDurationStatusWhileMutexLocked:(NSInteger)arg1;
- (void)_updateTracksStatusWhileMutexLocked:(NSInteger)arg1;
- (void)_updateLyricsStatusWhileMutexLocked:(NSInteger)arg1;
- (void)_updateChapterGroupInfoStatusWhileMutexLocked:(NSInteger)arg1;
- (void)_updatePlayableStatusWhileMutexLocked:(NSInteger)arg1;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_loadValuesWhileMutexLockedForKeys:(id)arg1;
- (void)_loadLyricsSynchronously;
- (id)_lyrics;
- (void)_loadChapterGroupInfoSynchronously;
- (void)_loadPlayabilitySynchronously;
- (id)_loadPlayabilityWhileMutexLockedAsynchronously;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (BOOL)_providesAccurateTiming;
- (void)_loadDurationSynchronously;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(NSInteger*)arg1;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (NSInteger)_status;
- (id)assetInspector;
- (void)_loadTracksSynchronously;
- (struct OpaqueFigFormatReaderLoader { }*)_formatReaderLoader;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_serverHasDied;
- (BOOL)hasProtectedContent;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (BOOL)isPlayable;
- (id)_chapterGroupInfo;
- (id)assetCache;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (id)chapterGroupInfo;
- (id)_weakReference;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)cancelLoading;
- (id)initWithURL:(id)arg1;
- (void)finalize;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })duration;
- (id)init;
- (void)release;
- (id)retain;
- (void)dealloc;
- (id)lyrics;
- (NSInteger)statusOfValueForKey:(id)arg1 error:(id*)arg2;

@end